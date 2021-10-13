#ifndef CLIENTDIALOG_H
#define CLIENTDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>
#include "privatedialog.h"
#include <QString>
#include <QStringList>
#include <QIntValidator>
#include <QRegularExpression>
#include <QMap>
#include <QTime>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>
#include <QTime>
#include <QLCDNumber>
#include <audioplaythread.h>
#include <audiosendthread.h>
#include <QComboBox>
#include "privateinformation.h"

/**
 * @class ClientDialog
 * @brief 客户端界面主类--继承 QDialog
 * @date 2018年12月17日
 */
namespace Ui {
class ClientDialog;
}

class Register_r;
class ClientDialog : public QDialog
{
    Q_OBJECT

    //声明
public:
    AudioPlayThread aud;
    audiosendthread audsend;
    explicit ClientDialog(QWidget *parent = 0);
    void jugeLog(QString);
    void sendFileToAll(QString filePath,QString filename);
    //void sendTextToServer(QString text);
    void onFileReceived(QString senderName,QString filename,QByteArray dataOfFile);
    //用来关闭界面
    ~ClientDialog();

protected:
    bool eventFilter(QObject *target, QEvent *event);//事件过滤器

    //声明信号槽
public slots:
    void connected();
    //必须覆盖的方法之一，用来异步读取数据，信号槽（连接redyRead函数）
    void readyRead();
    void disconnected();
    void displayError(QAbstractSocket::SocketError socketError);
    void privateFinished(int result);
    void privateMessageSent(QString username,QString text);
    void privateFileSent(QString username,QString filePath,QString filename);

signals:
    void sendtoRegister(QString an);

private slots:
     void sendTextToServer(QString text);
    //连接按钮点击事件
    void on_pushButton_Login_clicked();
    //断开按钮点击事件
    void on_pushButton_Disconnect_clicked();


    void on_pushButton_PrivateChat_clicked();
    //显示时间
    void showTime();

    void on_sendfileBtn_clicked();

    void on_voiceButton_clicked();

    void on_stopButton_clicked();

    void skin();

    void on_textbold_clicked(bool checked);

    void on_textitalic_clicked(bool checked);

    void on_textUnderline_clicked(bool checked);

    void on_SendButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ClientDialog *ui;
    //16bit 无符号整形
    quint16 port;
    QString username;
    //实体化QTcpSocket类
    QTcpSocket *tcpSocket;
    QString serverIP;
    //
    QMap<QString,PrivateDialog*> privateChatList;
    quint32 blockSize = 0;
    //定时器
    QTimer *myTimer;
    QLCDNumber *myLCDNumber;
    Register_r *r;
    privateInformation *p;

};


#endif // CLIENTDIALOG_H
