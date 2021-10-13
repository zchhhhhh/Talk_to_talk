/********************************************************************************
** Form generated from reading UI file 'privatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATEDIALOG_H
#define UI_PRIVATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivateDialog
{
public:
    QPushButton *SendButton;
    QToolButton *textbold;
    QToolButton *textitalic;
    QToolButton *textUnderline;
    QLabel *label_username;
    QTextEdit *textEdit_chatDisplay;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Text;
    QTextEdit *textEditWrite;
    QPushButton *chooseBtn;

    void setupUi(QDialog *PrivateDialog)
    {
        if (PrivateDialog->objectName().isEmpty())
            PrivateDialog->setObjectName(QStringLiteral("PrivateDialog"));
        PrivateDialog->resize(276, 291);
        SendButton = new QPushButton(PrivateDialog);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(220, 210, 41, 31));
        SendButton->setFocusPolicy(Qt::NoFocus);
        textbold = new QToolButton(PrivateDialog);
        textbold->setObjectName(QStringLiteral("textbold"));
        textbold->setGeometry(QRect(10, 210, 31, 31));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        textbold->setFont(font);
        textbold->setStyleSheet(QLatin1String("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); border-image: url(:/chat/image/icon/icon_bold.png);}\n"
"QToolButton:hover { background-color:rgba(172, 178, 148, 100)}"));
        textitalic = new QToolButton(PrivateDialog);
        textitalic->setObjectName(QStringLiteral("textitalic"));
        textitalic->setGeometry(QRect(50, 210, 31, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setItalic(true);
        textitalic->setFont(font1);
        textitalic->setStyleSheet(QLatin1String("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); border-image: url(:/chat/image/icon/icon_italic.png);}\n"
"QToolButton:hover { background-color:rgba(172, 178, 148, 100)}\n"
""));
        textUnderline = new QToolButton(PrivateDialog);
        textUnderline->setObjectName(QStringLiteral("textUnderline"));
        textUnderline->setGeometry(QRect(90, 210, 31, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setUnderline(true);
        textUnderline->setFont(font2);
        textUnderline->setStyleSheet(QLatin1String("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); border-image: url(:/chat/image/icon/icon_underline.png);}\n"
"QToolButton:hover { background-color:rgba(172, 178, 148, 100)}"));
        label_username = new QLabel(PrivateDialog);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(10, 10, 81, 40));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label_username->setFont(font3);
        label_username->setAlignment(Qt::AlignCenter);
        textEdit_chatDisplay = new QTextEdit(PrivateDialog);
        textEdit_chatDisplay->setObjectName(QStringLiteral("textEdit_chatDisplay"));
        textEdit_chatDisplay->setGeometry(QRect(10, 56, 256, 151));
        textEdit_chatDisplay->setFocusPolicy(Qt::NoFocus);
        textEdit_chatDisplay->setReadOnly(true);
        layoutWidget = new QWidget(PrivateDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 250, 251, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Text = new QLabel(layoutWidget);
        label_Text->setObjectName(QStringLiteral("label_Text"));
        label_Text->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(label_Text);

        textEditWrite = new QTextEdit(layoutWidget);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));
        textEditWrite->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(textEditWrite);

        chooseBtn = new QPushButton(PrivateDialog);
        chooseBtn->setObjectName(QStringLiteral("chooseBtn"));
        chooseBtn->setGeometry(QRect(130, 210, 80, 31));
        chooseBtn->setCursor(QCursor(Qt::IBeamCursor));
        chooseBtn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(PrivateDialog);

        QMetaObject::connectSlotsByName(PrivateDialog);
    } // setupUi

    void retranslateUi(QDialog *PrivateDialog)
    {
        PrivateDialog->setWindowTitle(QApplication::translate("PrivateDialog", "Dialog", Q_NULLPTR));
        SendButton->setText(QApplication::translate("PrivateDialog", "\345\217\221\351\200\201", Q_NULLPTR));
        textbold->setText(QApplication::translate("PrivateDialog", "B", Q_NULLPTR));
        textitalic->setText(QApplication::translate("PrivateDialog", "I", Q_NULLPTR));
        textUnderline->setText(QApplication::translate("PrivateDialog", "U", Q_NULLPTR));
        label_username->setText(QApplication::translate("PrivateDialog", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_Text->setText(QApplication::translate("PrivateDialog", "\346\266\210\346\201\257", Q_NULLPTR));
        chooseBtn->setText(QApplication::translate("PrivateDialog", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrivateDialog: public Ui_PrivateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATEDIALOG_H
