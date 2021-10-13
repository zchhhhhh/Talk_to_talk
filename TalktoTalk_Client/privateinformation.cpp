#include "privateinformation.h"
#include "ui_privateinformation.h"

privateInformation::privateInformation(QString u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::privateInformation)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page);
    this->user=u;

}

privateInformation::~privateInformation()
{
    delete ui;
}

void privateInformation::on_modify_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);

    QString se=ui->sexx->text();
    QString ag=ui->agee->text();
    QString mj=ui->najorr->text();
    QString modyIfm="/value5:"+se+','+ag+','+mj+'\n';
    emit s_server(modyIfm);
}

void privateInformation::on_return_2_clicked()
{
    this->close();
}

void privateInformation::on_cansel_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}
