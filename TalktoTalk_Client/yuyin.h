#ifndef YUYIN_H
#define YUYIN_H

#include <QDialog>

namespace Ui {
class yuyin;
}

class yuyin : public QDialog
{
    Q_OBJECT

public:
    explicit yuyin(QWidget *parent = 0);
    ~yuyin();

private:
    Ui::yuyin *ui;
};

#endif // YUYIN_H
