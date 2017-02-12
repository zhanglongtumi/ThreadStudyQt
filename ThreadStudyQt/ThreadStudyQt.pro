#-------------------------------------------------
#
# Project created by QtCreator 2017-02-12T16:12:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ThreadStudyQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    taskmanage/testthread.cpp \
    taskmanage/workobject.cpp

HEADERS  += mainwindow.h \
    taskmanage/testthread.h \
    taskmanage/workobject.h

FORMS    += mainwindow.ui

INCLUDEPATH += taskmanage
