/********************************************************************************
** Form generated from reading UI file 'yuyin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YUYIN_H
#define UI_YUYIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_yuyin
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *yuyin)
    {
        if (yuyin->objectName().isEmpty())
            yuyin->setObjectName(QStringLiteral("yuyin"));
        yuyin->resize(181, 135);
        label = new QLabel(yuyin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 71, 17));
        pushButton = new QPushButton(yuyin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 80, 71, 25));

        retranslateUi(yuyin);
        QObject::connect(pushButton, SIGNAL(clicked()), yuyin, SLOT(close()));

        QMetaObject::connectSlotsByName(yuyin);
    } // setupUi

    void retranslateUi(QDialog *yuyin)
    {
        yuyin->setWindowTitle(QApplication::translate("yuyin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("yuyin", "\346\255\243\345\234\250\350\257\255\351\237\263...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("yuyin", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class yuyin: public Ui_yuyin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YUYIN_H
