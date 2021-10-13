#ifndef YUYIN2_H
#define YUYIN2_H

#include <QDialog>

namespace Ui {
class yuyin2;
}

class yuyin2 : public QDialog
{
    Q_OBJECT

public:
    explicit yuyin2(QWidget *parent = 0);
    ~yuyin2();

private:
    Ui::yuyin2 *ui;
};

#endif // YUYIN2_H
