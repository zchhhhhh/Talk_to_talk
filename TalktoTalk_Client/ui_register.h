/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QRadioButton *radioButton_2;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QLabel *label_2;
    QListView *listView;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName(QStringLiteral("register"));
        register->resize(561, 452);
        radioButton = new QRadioButton(register);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(260, 220, 174, 33));
        pushButton = new QPushButton(register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 520, 140, 38));
        pushButton->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        pushButton_2 = new QPushButton(register);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 520, 140, 38));
        pushButton_2->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        label_4 = new QLabel(register);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 320, 121, 31));
        label_4->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        radioButton_2 = new QRadioButton(register);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(360, 230, 174, 33));
        dateEdit = new QDateEdit(register);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(270, 330, 191, 41));
        comboBox = new QComboBox(register);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(260, 410, 201, 41));
        label_2 = new QLabel(register);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 107, 27));
        label_2->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        listView = new QListView(register);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 0, 561, 631));
        listView->setStyleSheet(QStringLiteral("border-image: url(:/1.png);"));
        label = new QLabel(register);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 107, 27));
        label->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        label_3 = new QLabel(register);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 220, 107, 27));
        label_3->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        label_5 = new QLabel(register);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 400, 107, 27));
        label_5->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        lineEdit = new QLineEdit(register);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 50, 191, 51));
        lineEdit_2 = new QLineEdit(register);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 150, 181, 51));

        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QDialog *register)
    {
        register->setWindowTitle(QApplication::translate("register", "Dialog", Q_NULLPTR));
        radioButton->setText(QApplication::translate("register", "\347\224\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("register", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("register", "\345\217\226\346\266\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("register", "\345\207\272\347\224\237\345\271\264\346\234\210", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("register", "\345\245\263", Q_NULLPTR));
        label_2->setText(QApplication::translate("register", "\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("register", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("register", "\346\200\247\345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("register", "\344\270\223\344\270\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
