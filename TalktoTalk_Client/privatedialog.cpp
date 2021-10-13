#include "privatedialog.h"
#include "ui_privatedialog.h"
#include <QKeyEvent>

PrivateDialog::PrivateDialog(QString myUsername,QString username,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrivateDialog)
{
    ui->setupUi(this);
    this->username = username;
    //设置标题
    this->setWindowTitle("我与 "+username+" 的私聊窗口");
    this->myUsername = myUsername;
    //设置label内容
    ui->label_username->setText(this->username);
    ui->SendButton->setFocus();
    ui->SendButton->setDefault(true);
    ui->textEditWrite->installEventFilter(this);//设置完后自动调用其eventFilter函数
}

/** 结束窗口*/
PrivateDialog::~PrivateDialog()
{
    delete ui;
}

void PrivateDialog::addNewMessage(QString time, QString message){
    ui->textEdit_chatDisplay->append(
                "<b>"+username+" ["+time+"] </b>: "+message);
}


void PrivateDialog::on_chooseBtn_clicked()
{
    //set home directory to user home path
    QString homePath = QDir::homePath();
    //open file dialog and choose a file and get the file path
    QString filePath = QFileDialog::getOpenFileName(this,tr("Open a file"),homePath,tr("All files (*.*)"),NULL,QFileDialog::DontResolveSymlinks);
    //get the filename
    QString filename = filePath.section("/",-1);
    //do nothing if no file selected
    if(filename.isEmpty())
        return;

    //confirmation
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Send a file",tr("Do you want to send \"%1\"?").arg(filename));

    if (reply == QMessageBox::No )
        return;
    else{
        //get current time string
        QString currentTime = QTime::currentTime().toString("H:mm A");
        //add to chat display
        ui->textEdit_chatDisplay->append("<font color=\"MediumBlue\"><b>"+myUsername+" ["+currentTime+"] send a file \""+filename+"\"</b></font>");
        emit fileSend(username,filePath,filename);

        QProgressDialog *progressDlg=new QProgressDialog(this);
        progressDlg->setWindowModality(Qt::WindowModal);
        progressDlg->setMinimumDuration(0);
        progressDlg->setAttribute(Qt::WA_DeleteOnClose, true);
        progressDlg->setWindowTitle(tr("上传文件"));
        progressDlg->setLabelText(tr("正在上传......"));
        progressDlg->setCancelButtonText(tr("取消"));
        progressDlg->setRange(0,8000);
        for(int i=1;i<8000;i++){
            progressDlg->setValue(i);
            if(progressDlg->wasCanceled()){
                break;
            }
        }
        progressDlg->close();

    }
}

void PrivateDialog::on_textbold_clicked(bool checked)
{
    checked = ((ui->textEditWrite->fontWeight())!= QFont::Bold);
    if(checked)
    {
        ui->textEditWrite->setFontWeight(QFont::Bold);
        ui->textbold->setStyleSheet("background-color: rgb(50, 50, 50,50); border-radius: 3px;border-image: url(:/chat/image/icon/icon_bold.png);");
    }
    else
    {
        ui->textEditWrite->setFontWeight(QFont::Normal);
        ui->textbold->setStyleSheet("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px;border-image: url(:/chat/image/icon/icon_bold.png);}"
                                    "QToolButton:hover { background-color:rgba(172, 178, 148, 100)}");
    }
    ui->textEditWrite->setFocus();
}


void PrivateDialog::on_textitalic_clicked(bool checked)
{
    checked =!(ui->textEditWrite->fontItalic());
    if(checked)
    {
        ui->textitalic->setStyleSheet("background-color: rgb(50, 50, 50,50); border-radius: 3px;border-image: url(:/chat/image/icon/icon_italic.png);");
    }
    else
    {
        ui->textitalic->setStyleSheet("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px;border-image: url(:/chat/image/icon/icon_italic.png);}"
                                      "QToolButton:hover { background-color:rgba(172, 178, 148, 100)}");
    }
    ui->textEditWrite->setFontItalic(checked);
    ui->textEditWrite->setFocus();
}

void PrivateDialog::on_textUnderline_clicked(bool checked)
{
    checked =!(ui->textEditWrite->fontUnderline());
    if(checked)
    {
        ui->textUnderline->setStyleSheet("background-color: rgb(50, 50, 50,50); border-radius: 3px;border-image: url(:/chat/image/icon/icon_underline.png);");
    }
    else
    {
        ui->textUnderline->setStyleSheet("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px;border-image: url(:/chat/image/icon/icon_underline.png);}"
                                         "QToolButton:hover { background-color:rgba(172, 178, 148, 100)}");
    }
    ui->textEditWrite->setFontUnderline(checked);
    ui->textEditWrite->setFocus();
}


void PrivateDialog::on_SendButton_clicked()
{
    QString text = ui->textEditWrite->toPlainText().trimmed();

    if(text.isEmpty())
        return;
    //获取当前时间
    QString currentTime = QTime::currentTime().toString("H:m A");
    //添加字体font
    ui->textEdit_chatDisplay->append("<font color=\"MediumBlue\"><b>"+myUsername+" ["+currentTime+"] :</b> "+text +"</font>");

    //检查是否给自己发送
    if(this->myUsername != this->username){
        emit messageSent(username,text);
    }
    //每次回车之后清空输入框
    ui->textEditWrite->clear();
}

bool PrivateDialog::eventFilter(QObject *target, QEvent *event)
{
    if(target == ui->textEditWrite)		//可替换
        {
            if(event->type() == QEvent::KeyPress)//回车键
            {
                 QKeyEvent *k = static_cast<QKeyEvent *>(event);

                 if(k->key() == Qt::Key_Return)
                 {
                     on_SendButton_clicked();		//替换为需要响应的函数事件，以这里的按钮为例
                     return true;
                 }
            }
        }
        return QWidget::eventFilter(target,event);
}
