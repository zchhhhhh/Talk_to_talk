#include "yuyin2.h"
#include "ui_yuyin2.h"

yuyin2::yuyin2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yuyin2)
{
    ui->setupUi(this);
    this->setWindowTitle("语音通话");
}

yuyin2::~yuyin2()
{
    delete ui;
}
