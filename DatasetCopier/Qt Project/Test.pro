#-------------------------------------------------
#
# Project created by QtCreator 2014-06-04T11:24:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    thirdparty/qtcopydialog.cpp \
    thirdparty/qtfilecopier.cpp

HEADERS  += mainwindow.h \
    thirdparty/qtcopydialog.h \
    thirdparty/qtfilecopier.h

FORMS    += mainwindow.ui \
    thirdparty/qtcopydialog.ui \
    thirdparty/qtotherdialog.ui \
    thirdparty/qtoverwritedialog.ui

RESOURCES +=
