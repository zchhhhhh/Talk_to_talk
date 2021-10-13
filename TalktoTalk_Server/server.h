#ifndef SERVER_H
#define SERVER_H


#include <QTcpServer>
#include <QObject>
#include <QLinkedList>
#include <QHash>
#include <QTime>
#include "clientthread.h"
#include <database.h>


class Server : public QTcpServer
{
    Q_OBJECT
    //声明函数
public:
    explicit Server(QObject *parent = 0);
    bool StartServer();
    void setPort(quint16 port);//端口号 为16bit 无符号整型
    void kickFromServer(int socketDescriptor);
    void close();
    void sendTextToAll(QString text,ClientThread* except = NULL);
    void sendTextToOne(QString text,ClientThread* target);
    void sendDataFileToAll(QString text,QByteArray dataOfFile,ClientThread* except = NULL);
    void sendDataFileToOne(QString text,QByteArray dataOfFile,ClientThread* target);

    //声明信号
signals:
    void connected(ClientThread *clientThread);
    void clientDisconnected(ClientThread* clientThread);
    void clientUsernameChanged(int socketDescriptor,QString uname);

    //声明事件槽
public slots:
    void on_client_connected(ClientThread* clientThread);
    void logon(QString name, QString password, QString sex, QString birth, QString meger);//注册
    void login(QString name, QString password);//登陆
//    void on_client_register(ClientThread* clientThread);
    void on_client_disconnected(ClientThread* clientThread);
    void on_client_usernameChanged(QString uname,ClientThread* client);
    void on_client_textSend(QString uname,QString text);
    void on_client_privateTextSend(QString uname,QString receiverName,QString text);
    void on_client_fileSend(QString uname, QString filename, QByteArray dataOfFile);
    void on_client_privateFileSend(QString uname,QString receiverName, QString filename, QByteArray dataOfFile);

protected:
    //必须覆盖的方法
    void incomingConnection(qintptr socketDescriptor) override;
private:
    quint16 port = 8081; //默认端口号
    void deleteClientFromList(ClientThread* client);
    QMap<ClientThread*,QString> users;//使用map，存储对应的线程和用户名
    QLinkedList<ClientThread*> clientThreadList;
    //database 类
    DataBase* database;
};

#endif // SERVER_H
