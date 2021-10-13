#ifndef PRIVATEDDIALOG_H
#define PRIVATEDDIALOG_H


#include <QDialog>
#include <QString>
#include <QTime>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QProgressDialog>

/**
 * @class PrivateDialog
 * @brief 私聊界面窗口
 * 该类声明所需要的控件，对象，函数等
 */
namespace Ui {
class PrivateDialog;
}

class PrivateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PrivateDialog(QString myUsername,QString username,QWidget *parent = 0);
    QString getUsername() const{return username;}
    void addNewMessage(QString time,QString message);
    ~PrivateDialog();

protected:
    bool eventFilter(QObject *target, QEvent *event);//事件过滤器

signals:
    void messageSent(QString username,QString message); //when user press enter in chat input
    void fileSend(QString username,QString filePath,QString filename);


private slots:


    void on_chooseBtn_clicked();

    void on_textbold_clicked(bool checked);

    void on_textitalic_clicked(bool checked);

    void on_textUnderline_clicked(bool checked);

    void on_SendButton_clicked();

private:
    Ui::PrivateDialog *ui;
    QString username;
    QString myUsername;
};

#endif // PRIVATEDDIALOG_H
