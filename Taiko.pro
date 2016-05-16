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
    result.cpp \
    typeb.cpp \
    item.cpp

HEADERS  += mainwindow.h \
    typea.h \
    choose.h \
    result.h \
    typeb.h \
    item.h

FORMS    += mainwindow.ui \
    typea.ui \
    choose.ui \
    result.ui \
    typeb.ui

RESOURCES += \
    resource.qrc
