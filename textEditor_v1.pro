#-------------------------------------------------
#
# Project created by QtCreator 2019-05-27T22:12:26
#
#-------------------------------------------------

QT       += core gui
HEADERS += about_prog.h \
    fileedit.h \
    filemanager.h
FORMS += about_prog.ui
QT       += core gui
HEADERS += dialog.h
FORMS += dialog.ui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = textEditor_v1
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

CONFIG += c++11

SOURCES += \
        filemanager.cpp \
        main.cpp \
        mainwindow.cpp \
        about_prog.cpp \
        dialog.cpp \
        fileedit.cpp

HEADERS += \
        mainwindow.h \
        about_prog.h \
        dialog.h

FORMS += \
        about_prog.ui \
        dialog.ui \
        mainwindow.ui

RESOURCES += \
    res.qrc

