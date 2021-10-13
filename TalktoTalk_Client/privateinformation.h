#ifndef PRIVATEINFORMATION_H
#define PRIVATEINFORMATION_H

#include <QDialog>

namespace Ui {
class privateInformation;
}

class privateInformation : public QDialog
{
    Q_OBJECT

public:
    explicit privateInformation(QString u,QWidget *parent = nullptr);
    ~privateInformation();

private slots:
    void on_modify_clicked();

    void on_return_2_clicked();

    void on_cansel_clicked();
signals:
    void s_server(QString me);

private:
    Ui::privateInformation *ui;
    QString user;
};

#endif // PRIVATEINFORMATION_H
