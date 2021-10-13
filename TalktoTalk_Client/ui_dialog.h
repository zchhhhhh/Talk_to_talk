/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QLabel *label_5;
    QStackedWidget *stackedWidget;
    QWidget *Page_1;
    QPushButton *pushButton_Login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_ServerIP;
    QLineEdit *lineEdit_ServerIPAddr;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QWidget *Page_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *Page_3;
    QLabel *label_OnlineUsers;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_you_are;
    QLineEdit *lineEdit_ServerIP;
    QPushButton *pushButton_Disconnect;
    QPushButton *voiceButton;
    QPushButton *stopButton;
    QPushButton *sendfileBtn;
    QLabel *label_Text;
    QTextEdit *textEdit_ChatDisplay;
    QListWidget *listWidget_OnlineUsers;
    QPushButton *pushButton_PrivateChat;
    QToolButton *textbold;
    QToolButton *textitalic;
    QToolButton *textUnderline;
    QTextEdit *textEditWrite;
    QPushButton *SendButton;
    QComboBox *skinComboBox;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QStringLiteral("ClientDialog"));
        ClientDialog->resize(753, 470);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientDialog->sizePolicy().hasHeightForWidth());
        ClientDialog->setSizePolicy(sizePolicy);
        ClientDialog->setMinimumSize(QSize(753, 470));
        ClientDialog->setMaximumSize(QSize(753, 470));
        ClientDialog->setStyleSheet(QLatin1String("#ClientDialog {\n"
"	background-image: url(:/bit3.jpeg);\n"
"}"));
        label_5 = new QLabel(ClientDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 135, 38));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        stackedWidget = new QStackedWidget(ClientDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 50, 711, 401));
        stackedWidget->setStyleSheet(QStringLiteral("#ClientDialog{ background-image: url(:/images/test_2.png);}"));
        Page_1 = new QWidget();
        Page_1->setObjectName(QStringLiteral("Page_1"));
        pushButton_Login = new QPushButton(Page_1);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(320, 250, 76, 32));
        pushButton_Login->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_Login->setCheckable(false);
        pushButton_Login->setAutoDefault(false);
        pushButton_Login->setFlat(false);
        layoutWidget = new QWidget(Page_1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 120, 261, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_ServerIP = new QLabel(layoutWidget);
        label_ServerIP->setObjectName(QStringLiteral("label_ServerIP"));
        label_ServerIP->setMinimumSize(QSize(70, 21));
        label_ServerIP->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_ServerIP);

        lineEdit_ServerIPAddr = new QLineEdit(layoutWidget);
        lineEdit_ServerIPAddr->setObjectName(QStringLiteral("lineEdit_ServerIPAddr"));
        lineEdit_ServerIPAddr->setAutoFillBackground(false);

        horizontalLayout_3->addWidget(lineEdit_ServerIPAddr);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_port = new QLabel(layoutWidget);
        label_port->setObjectName(QStringLiteral("label_port"));
        label_port->setMinimumSize(QSize(70, 21));
        label_port->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_port);

        lineEdit_port = new QLineEdit(layoutWidget);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));

        horizontalLayout_4->addWidget(lineEdit_port);


        verticalLayout_2->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(Page_1);
        Page_2 = new QWidget();
        Page_2->setObjectName(QStringLiteral("Page_2"));
        lineEdit_2 = new QLineEdit(Page_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 240, 191, 41));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(Page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 330, 140, 38));
        pushButton_2->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        lineEdit = new QLineEdit(Page_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 150, 191, 41));
        label_2 = new QLabel(Page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 160, 107, 27));
        label_2->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        label = new QLabel(Page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 30, 101, 91));
        label->setStyleSheet(QStringLiteral("border-image: url(:/0.png);"));
        label_3 = new QLabel(Page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 240, 107, 27));
        label_3->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        pushButton = new QPushButton(Page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 330, 140, 38));
        pushButton->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"font: 14pt \"Ubuntu\";"));
        stackedWidget->addWidget(Page_2);
        lineEdit_2->raise();
        pushButton_2->raise();
        lineEdit->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        label->raise();
        Page_3 = new QWidget();
        Page_3->setObjectName(QStringLiteral("Page_3"));
        label_OnlineUsers = new QLabel(Page_3);
        label_OnlineUsers->setObjectName(QStringLiteral("label_OnlineUsers"));
        label_OnlineUsers->setGeometry(QRect(450, 10, 91, 31));
        label_OnlineUsers->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget1 = new QWidget(Page_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 393, 35));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_you_are = new QLabel(layoutWidget1);
        label_you_are->setObjectName(QStringLiteral("label_you_are"));
        label_you_are->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_6->addWidget(label_you_are);

        lineEdit_ServerIP = new QLineEdit(layoutWidget1);
        lineEdit_ServerIP->setObjectName(QStringLiteral("lineEdit_ServerIP"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_ServerIP->setFont(font1);
        lineEdit_ServerIP->setFocusPolicy(Qt::NoFocus);
        lineEdit_ServerIP->setAlignment(Qt::AlignCenter);
        lineEdit_ServerIP->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_ServerIP);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        pushButton_Disconnect = new QPushButton(layoutWidget1);
        pushButton_Disconnect->setObjectName(QStringLiteral("pushButton_Disconnect"));
        pushButton_Disconnect->setFocusPolicy(Qt::NoFocus);
        pushButton_Disconnect->setAutoDefault(false);

        horizontalLayout_7->addWidget(pushButton_Disconnect);

        voiceButton = new QPushButton(Page_3);
        voiceButton->setObjectName(QStringLiteral("voiceButton"));
        voiceButton->setGeometry(QRect(100, 320, 81, 31));
        voiceButton->setFocusPolicy(Qt::NoFocus);
        stopButton = new QPushButton(Page_3);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(190, 320, 81, 31));
        stopButton->setFocusPolicy(Qt::NoFocus);
        sendfileBtn = new QPushButton(Page_3);
        sendfileBtn->setObjectName(QStringLiteral("sendfileBtn"));
        sendfileBtn->setGeometry(QRect(15, 320, 80, 31));
        sendfileBtn->setFocusPolicy(Qt::NoFocus);
        label_Text = new QLabel(Page_3);
        label_Text->setObjectName(QStringLiteral("label_Text"));
        label_Text->setGeometry(QRect(16, 358, 60, 23));
        label_Text->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textEdit_ChatDisplay = new QTextEdit(Page_3);
        textEdit_ChatDisplay->setObjectName(QStringLiteral("textEdit_ChatDisplay"));
        textEdit_ChatDisplay->setEnabled(true);
        textEdit_ChatDisplay->setGeometry(QRect(10, 50, 401, 261));
        textEdit_ChatDisplay->setMaximumSize(QSize(16777215, 323));
        textEdit_ChatDisplay->setFocusPolicy(Qt::NoFocus);
        textEdit_ChatDisplay->setReadOnly(true);
        listWidget_OnlineUsers = new QListWidget(Page_3);
        listWidget_OnlineUsers->setObjectName(QStringLiteral("listWidget_OnlineUsers"));
        listWidget_OnlineUsers->setGeometry(QRect(430, 40, 256, 271));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget_OnlineUsers->sizePolicy().hasHeightForWidth());
        listWidget_OnlineUsers->setSizePolicy(sizePolicy1);
        pushButton_PrivateChat = new QPushButton(Page_3);
        pushButton_PrivateChat->setObjectName(QStringLiteral("pushButton_PrivateChat"));
        pushButton_PrivateChat->setGeometry(QRect(550, 320, 80, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_PrivateChat->sizePolicy().hasHeightForWidth());
        pushButton_PrivateChat->setSizePolicy(sizePolicy2);
        pushButton_PrivateChat->setFocusPolicy(Qt::NoFocus);
        pushButton_PrivateChat->setAutoDefault(false);
        textbold = new QToolButton(Page_3);
        textbold->setObjectName(QStringLiteral("textbold"));
        textbold->setGeometry(QRect(290, 320, 31, 31));
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setWeight(75);
        textbold->setFont(font2);
        textbold->setStyleSheet(QLatin1String("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); border-image: url(:/chat/image/icon/icon_bold.png);}\n"
"QToolButton:hover { background-color:rgba(172, 178, 148, 100)}"));
        textitalic = new QToolButton(Page_3);
        textitalic->setObjectName(QStringLiteral("textitalic"));
        textitalic->setGeometry(QRect(340, 320, 31, 31));
        QFont font3;
        font3.setPointSize(17);
        font3.setItalic(true);
        textitalic->setFont(font3);
        textitalic->setStyleSheet(QLatin1String("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); border-image: url(:/chat/image/icon/icon_italic.png);}\n"
"QToolButton:hover { background-color:rgba(172, 178, 148, 100)}\n"
""));
        textUnderline = new QToolButton(Page_3);
        textUnderline->setObjectName(QStringLiteral("textUnderline"));
        textUnderline->setGeometry(QRect(390, 320, 31, 31));
        QFont font4;
        font4.setPointSize(17);
        font4.setUnderline(true);
        textUnderline->setFont(font4);
        textUnderline->setStyleSheet(QLatin1String("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); border-image: url(:/chat/image/icon/icon_underline.png);}\n"
"QToolButton:hover { background-color:rgba(172, 178, 148, 100)}"));
        textEditWrite = new QTextEdit(Page_3);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));
        textEditWrite->setGeometry(QRect(90, 360, 531, 31));
        textEditWrite->setFocusPolicy(Qt::StrongFocus);
        SendButton = new QPushButton(Page_3);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(640, 360, 61, 31));
        SendButton->setFocusPolicy(Qt::NoFocus);
        stackedWidget->addWidget(Page_3);
        skinComboBox = new QComboBox(ClientDialog);
        skinComboBox->setObjectName(QStringLiteral("skinComboBox"));
        skinComboBox->setGeometry(QRect(615, 20, 101, 25));
        skinComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius: 3px;   /* \345\234\206\350\247\222 */\n"
"    padding: 1px 18px 1px 3px;   /* \345\255\227\344\275\223\345\241\253\350\241\254 */\n"
"}"));
        stackedWidget->raise();
        label_5->raise();
        skinComboBox->raise();

        retranslateUi(ClientDialog);

        stackedWidget->setCurrentIndex(1);
        pushButton_Login->setDefault(true);


        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QApplication::translate("ClientDialog", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("ClientDialog", "     Client", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("ClientDialog", "\350\277\236\346\216\245", Q_NULLPTR));
        label_ServerIP->setText(QApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250ip\357\274\232", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        lineEdit_ServerIPAddr->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_ServerIPAddr->setText(QString());
        lineEdit_ServerIPAddr->setPlaceholderText(QApplication::translate("ClientDialog", "xxxx.xxxx.xxxx.xxxx", Q_NULLPTR));
        label_port->setText(QApplication::translate("ClientDialog", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_port->setText(QString());
        lineEdit_port->setPlaceholderText(QApplication::translate("ClientDialog", "1 - 65535", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ClientDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientDialog", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QApplication::translate("ClientDialog", "\345\257\206      \347\240\201:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClientDialog", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        label_OnlineUsers->setText(QApplication::translate("ClientDialog", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\232", Q_NULLPTR));
        label_you_are->setText(QApplication::translate("ClientDialog", "\344\275\240\345\267\262\347\273\217\350\277\236\346\216\245\345\210\260ip\357\274\232", Q_NULLPTR));
        lineEdit_ServerIP->setText(QString());
        pushButton_Disconnect->setText(QApplication::translate("ClientDialog", "\346\226\255\345\274\200", Q_NULLPTR));
        voiceButton->setText(QApplication::translate("ClientDialog", "\350\277\233\345\205\245\350\257\255\351\237\263", Q_NULLPTR));
        stopButton->setText(QApplication::translate("ClientDialog", "\351\200\200\345\207\272\350\257\255\351\237\263", Q_NULLPTR));
        sendfileBtn->setText(QApplication::translate("ClientDialog", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
        label_Text->setText(QApplication::translate("ClientDialog", "\350\276\223\345\205\245\346\266\210\346\201\257", Q_NULLPTR));
        pushButton_PrivateChat->setText(QApplication::translate("ClientDialog", "\347\247\201\350\201\212", Q_NULLPTR));
        textbold->setText(QApplication::translate("ClientDialog", "B", Q_NULLPTR));
        textitalic->setText(QApplication::translate("ClientDialog", "I", Q_NULLPTR));
        textUnderline->setText(QApplication::translate("ClientDialog", "U", Q_NULLPTR));
        SendButton->setText(QApplication::translate("ClientDialog", "\345\217\221\351\200\201", Q_NULLPTR));
        skinComboBox->clear();
        skinComboBox->insertItems(0, QStringList()
         << QApplication::translate("ClientDialog", "\345\214\227\346\271\226\351\224\246\351\262\244", Q_NULLPTR)
         << QApplication::translate("ClientDialog", "\351\233\252\344\270\255\350\211\257\344\271\241", Q_NULLPTR)
         << QApplication::translate("ClientDialog", "\351\233\252\344\270\255\345\205\263\346\235\221", Q_NULLPTR)
         << QApplication::translate("ClientDialog", "\345\244\271\345\270\246\347\247\201\350\264\247", Q_NULLPTR)
         << QApplication::translate("ClientDialog", "\347\233\233\345\244\217\347\276\216\346\231\257", Q_NULLPTR)
         << QApplication::translate("ClientDialog", "\346\237\220\346\225\231\345\255\246\346\245\274", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
