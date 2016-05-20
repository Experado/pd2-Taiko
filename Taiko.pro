#-------------------------------------------------
#
# Project created by QtCreator 2016-05-08T16:19:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    typea.cpp \
    choose.cpp \
    typeb.cpp \
    item.cpp \
    ending.cpp

HEADERS  += mainwindow.h \
    typea.h \
    choose.h \
    typeb.h \
    item.h \
    ending.h

FORMS    += mainwindow.ui \
    typea.ui \
    choose.ui \
    typeb.ui \
    ending.ui

RESOURCES += \
    resource.qrc
