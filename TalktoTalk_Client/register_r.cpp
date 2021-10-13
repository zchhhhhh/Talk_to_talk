#include "register_r.h"
#include "ui_register_r.h"
#include <QMessageBox>
#include <QDebug>

Register_r::Register_r(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_r)
{
    ui->setupUi(this);
    this->setWindowTitle("注册账号");
    ui->major->addItem("Artificial Intelligence Major");
    ui->major->addItem("Computer Science and Technology Major");
    ui->major->addItem("Software Engineering Major");
    ui->major->addItem("Internet of Things Major");
    ui->major->addItem("Big Data Major");
    ui->major->addItem("Cryptography major");
}

Register_r::~Register_r()
{
    delete ui;
}

void Register_r::on_cansel_clicked()
{
    this->close();
}

void Register_r::on_register_2_clicked()
{
    username=ui->username->text();
    password=ui->password->text();
    sex=ui->sex->text();
    age=ui->age->text();
    major=ui->age->text();

    QString registerInformation="/value1:"+username+','+password+','+sex+','+age+','+major+'\n';

    emit send_server(registerInformation);

}

void Register_r::judge(QString ans)
{
    int s=ans.toInt();
    if (s==1)
    {
        QMessageBox::information(this,
                                 "提示",
                                 "注册成功！",
                                 QMessageBox::Ok);
       this->close();
    }
    else
    {
        QMessageBox::information(this,
                                 "提示",
                                 "注册失败！",
                                 QMessageBox::Ok);
    }

}
