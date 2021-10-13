#ifndef DIALOG_H
#define DIALOG_H

#include <database.h>
#include <QDialog>
#include <QMessageBox>
#include <QList>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkInterface>
#include <QIntValidator>
#include <QRegularExpression>
#include "server.h"
#include <QTimer>
#include <QTime>
#include <QLCDNumber>

/*!
 * 服务器界面头文件
 * 界面样式使用dialog形式
 */
namespace Ui {
class ServerDialog;
}

class ServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ServerDialog(QWidget *parent = 0);
    ~ServerDialog();

signals:
    //声明踢人信号
    void pushButton_Kick_clicked(int socketDescriptor);

public slots:
    //声明连接服务器槽函数
    void on_clientThread_connected(ClientThread* clientThread);
    //注册槽函数
//    void on_clientThread_register(ClientThread* clientThread);

    //断开连接槽函数
    void on_clientThread_disconnected(ClientThread* clientThread);
    //name查重
    void on_clientThread_usernameChanged(int socketDescriptor,QString uname);

    /*声明服务器端按钮点击事件（即对应的槽函数）*/
private slots:
    //开始连接
    void on_connectBtn_clicked();
    //踢人
    void on_kickBtn_clicked();
    //退出
    void on_exitBtn_clicked();
    //显示时间
    void showTime();

private:

    Ui::ServerDialog *ui;
    int num;
    QIntValidator *validator_port;
    //server主类
    Server server;
    void startServer();
    //定时器
    QTimer *myTimer;
    QLCDNumber *myLCDNumber;


};

#endif // DIALOG_HPP
