#-------------------------------------------------
#
# Project created by QtCreator 2018-12-25T13:24:13
#
#-------------------------------------------------
#对网络请求必须加上network
QT       += core gui network
QT += network
QT += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = talkTotalk
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    clientdialog.cpp \
    privatedialog.cpp \
    audiosendthread.cpp \
    audioplaythread.cpp \
    privateinformation.cpp \
    register_r.cpp \
    yuyin2.cpp \
    yuyin.cpp

HEADERS += \
    clientdialog.h \
    privatedialog.h \
    audiosendthread.h \
    audioplaythread.h \
    privateinformation.h \
    register_r.h \
    yuyin2.h \
    yuyin.h

FORMS += \
        dialog.ui \
    privatedialog.ui \
    privateinformation.ui \
    register_r.ui \
    yuyin2.ui \
    yuyin.ui

RESOURCES += \
    images.qrc
