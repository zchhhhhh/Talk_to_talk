#ifndef CLIENTTHREAD_H
#define CLIENTTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDataStream>
#include <QString>
#include <QRegularExpression>

class ClientThread : public QThread
{
    Q_OBJECT
public:
    ClientThread(int SocketDescriptor,QObject *parent = 0);
    /*为对象设置get方法*/
    QString getUsername() const{
        return username;
    }
    int getSocketDescriptor() const{
        return socketDescriptor;
    }
    QTcpSocket* getTcpSocket() const{
        return tcpSocket;
    }
    void setUsername(QString uname) {
        username = uname;
    }

    void close();
    friend bool operator==(ClientThread client1,ClientThread client2);
    //重写run（）函数
    void run() override;

    //声明信号
signals:
    void error(QTcpSocket::SocketError socketError);
    void connected(ClientThread* clientThread);
    void logon(QString name, QString password, QString sex, QString birth, QString meger);//注册
    void login(QString name, QString password);//登陆
    void clientDisconnected(ClientThread* clientThread);
    void usernameChanged(QString uname);
    void textSend(QString uname,QString text);
    void privateTextSend(QString uname,QString receiverName,QString text);
    void fileSend(QString uname,QString filename,QByteArray dataOfFile);
    void privateFileSend(QString uname,QString receiverName,QString filename,QByteArray dataOfFile);

    //信号槽
public slots:
    void readyRead();
    void disconnected();

private:
    int socketDescriptor;
    //默认用户名
    QString username = "Annonymous";
    //socket文件描述符指针
    QTcpSocket *tcpSocket;
    quint32 blockSize = 0;
};

#endif // CLIENTTHREAD_H
