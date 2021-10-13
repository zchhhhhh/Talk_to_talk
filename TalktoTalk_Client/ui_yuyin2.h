/********************************************************************************
** Form generated from reading UI file 'yuyin2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YUYIN2_H
#define UI_YUYIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_yuyin2
{
public:
    QLabel *label;
    QPushButton *OKbtn2;

    void setupUi(QDialog *yuyin2)
    {
        if (yuyin2->objectName().isEmpty())
            yuyin2->setObjectName(QStringLiteral("yuyin2"));
        yuyin2->resize(219, 143);
        label = new QLabel(yuyin2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 91, 17));
        OKbtn2 = new QPushButton(yuyin2);
        OKbtn2->setObjectName(QStringLiteral("OKbtn2"));
        OKbtn2->setGeometry(QRect(100, 80, 81, 25));

        retranslateUi(yuyin2);
        QObject::connect(OKbtn2, SIGNAL(clicked()), yuyin2, SLOT(close()));

        QMetaObject::connectSlotsByName(yuyin2);
    } // setupUi

    void retranslateUi(QDialog *yuyin2)
    {
        yuyin2->setWindowTitle(QApplication::translate("yuyin2", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("yuyin2", "\347\273\223\346\235\237\351\200\232\350\257\235\357\274\201", Q_NULLPTR));
        OKbtn2->setText(QApplication::translate("yuyin2", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class yuyin2: public Ui_yuyin2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YUYIN2_H
