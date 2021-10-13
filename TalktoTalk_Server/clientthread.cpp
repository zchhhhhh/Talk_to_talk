#include "clientthread.h"

ClientThread::ClientThread(int SocketDescriptor,QObject *parent):
    QThread(parent)
{
    this->socketDescriptor = SocketDescriptor;
}

/**
 * 关闭套接字
 */
void ClientThread::close(){
    this->tcpSocket->close();
    exit(0);
}

/**
 * 连接server的功能主函数入口
 *
 */
void ClientThread::run(){

    this->tcpSocket = new QTcpSocket();
    //检测是否可以初始化 socketDescriptor
    if(!tcpSocket->setSocketDescriptor(this->socketDescriptor)){
        //输出error信息
        emit error(tcpSocket->error());
        return;
    }

    //连接信号槽，readyRead（）函数为信号，用来在有数据到来时候发出
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);
    //disconnected（）信号在连接断开时候发出
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(disconnected()),Qt::DirectConnection);

    emit connected(this);

    qDebug() << socketDescriptor << " Client Connected";//调试用

    exec();
}

/**
 * 对 输入的数据 进行 正则验证
 * 简单验证 即 不包含：. * ）
 */
void ClientThread::readyRead(){

    qDebug() << "接受信息";
    QRegularExpression regex_value1("^/value1:(.*)\n$");//注册
    QRegularExpression regex_value2("^/value2:(.*)\n$");    //登陆
    QRegularExpression regex_value3("^/value3:(.*)\n$");//修改
    QRegularExpression regex_username("^/username:(.*)\n$");
    QRegularExpression regex_text("^/text:(.*)\n$");
    QRegularExpression regex_private("^/pm:(.*) : (.*)\n$");
    QRegularExpression regex_fileAll("^/fileAll:(.*)\n$");
    QRegularExpression regex_filePrivate("^/filePrivate:(.*) : (.*)\n$");
    QRegularExpressionMatch match;

    //循环读取到来的数据
    while(tcpSocket->canReadLine()){
        QDataStream in(tcpSocket);
        in.setVersion(QDataStream::Qt_5_8);
        qDebug() << "blockSize = "<< blockSize;
        if (blockSize == 0){
            qDebug() << "无消息";
            if(tcpSocket->bytesAvailable() < sizeof(quint32))
                return;
            in >> blockSize;
            qDebug() << "!blockSize = "<< blockSize;//调试用
        }
        if(tcpSocket->bytesAvailable() < blockSize){
            qDebug() << "byteAvailable = " << tcpSocket->bytesAvailable();//调试用
            return;
        }


        QString data;
        in >> data;

        qDebug() << data;

        //注册
        match = regex_value1.match(data);
        if(match.hasMatch())
        {
            qDebug()<<"logon";
            QString temp = match.captured(1);
            QStringList list;
            list = temp.split(',');
            username = list[0];
            emit logon(list[0],list[1],list[2],list[3],list[4]);
        }
        //登陆
        match = regex_value2.match(data);
        if(match.hasMatch())
        {
            qDebug() << "login" ;
            QString temp = match.captured(1);
            QStringList list;
            list = temp.split(',');
            username = list[0];
            emit login(list[0],list[1]);
        }
        //修改
        match = regex_value3.match(data);
        if(match.hasMatch())
        {
            qDebug() << "修改" ;
        }

//        //验证数据 先验证名字
        match = regex_username.match(data);
        qDebug() << match.captured(1);
        if(match.hasMatch()){//需移除
            qDebug() << "名字" ;
            this->username = match.captured(1);
//            emit usernameChanged(this->username);
            qDebug() << "名字结束" ;
        }
        //之后在验证text
        match = regex_text.match(data);
        qDebug() << match.captured(1);
        if(match.hasMatch()){
            QString text = match.captured(1);
            qDebug() << "发消息";
            emit textSend(this->username,text);
            qDebug() << "发消息";
        }
        match = regex_private.match(data);
        if(match.hasMatch()){
            QString receiverName = match.captured(1);
            QString text = match.captured(2);
            qDebug() << "私fa信息";
            emit privateTextSend(this->username,receiverName,text);
            qDebug() << "私fa信息";
        }

        //以下用来验证文件
        match = regex_fileAll.match(data);
        if(match.hasMatch()){
            QString filename = match.captured(1);
            QByteArray dataOfFile = tcpSocket->readAll();
            emit fileSend(this->username,filename,dataOfFile);
        }
        match = regex_filePrivate.match(data);
        if(match.hasMatch()){
            QString target = match.captured(1);
            QString filename = match.captured(2);
            QByteArray dataOfFile = tcpSocket->readAll();
            emit privateFileSend(this->username,target,filename,dataOfFile);
        }
        blockSize = 0;
    }
    qDebug() << "读取结束";

}
/** 响应函数*/
void ClientThread::disconnected(){
    qDebug() << socketDescriptor << " Disconnected";//调试用
    //触发ClientDisconnect信号
    emit clientDisconnected(this);
    //调用deleteLater函数删除socket
    tcpSocket->deleteLater();
    exit(0);
}


//! OPERATOR OVERLOADING
// 操作符重载 与==连用整体视为一个函数名
bool operator==(ClientThread client1,ClientThread client2){
    return client1.socketDescriptor == client2.socketDescriptor;
}

