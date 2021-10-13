#ifndef REGISTER_R_H
#define REGISTER_R_H

#include <QDialog>

namespace Ui {
class Register_r;
}

class Register_r : public QDialog
{
    Q_OBJECT

public:
    explicit Register_r(QWidget *parent = nullptr);
    ~Register_r();

private slots:
    void on_cansel_clicked();
    void judge(QString an);
    void on_register_2_clicked();

signals:
    void send_server(QString rinform);

private:
    Ui::Register_r *ui;
    QString username,password,sex,age,major;
};

#endif // REGISTER_R_H
