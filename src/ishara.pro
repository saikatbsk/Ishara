#-------------------------------------------------
#
# Project created by QtCreator 2013-11-06T04:59:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ishara
TEMPLATE = app

SOURCES += main.cpp\
        ishara.cpp \
    aboutdialog.cpp

HEADERS  += ishara.h \
    aboutdialog.h

FORMS    += \
    aboutdialog.ui \
    ishara.ui

CONFIG += link_pkgconfig

PKGCONFIG += opencv x11

LIBS += -lXtst

RESOURCES += \
    res.qrc
