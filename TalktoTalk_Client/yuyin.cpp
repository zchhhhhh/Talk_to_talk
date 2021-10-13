#include "yuyin.h"
#include "ui_yuyin.h"

yuyin::yuyin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yuyin)
{
    ui->setupUi(this);
    this->setWindowTitle("语音通话");
}

yuyin::~yuyin()
{
    delete ui;
}
