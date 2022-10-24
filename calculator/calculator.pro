#-------------------------------------------------
#
# Project created by QtCreator 2022-08-12T17:08:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = calculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    digitalbutton.cpp \
    signumbutton.cpp \
    clearbutton.cpp \
    display.cpp

HEADERS  += mainwindow.h \
    digitalbutton.h \
    signumbutton.h \
    clearbutton.h \
    display.h
