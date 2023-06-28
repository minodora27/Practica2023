#-------------------------------------------------
#
# Project created by QtCreator 2023-06-21T08:44:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tema
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    monitorizare.cpp \
    actiuni.cpp \
    procese.cpp \
    copiere.cpp \
    instalare.cpp

HEADERS  += mainwindow.h \
    monitorizare.h \
    actiuni.h \
    procese.h \
    copiere.h \
    instalare.h

FORMS    += mainwindow.ui \
    monitorizare.ui \
    actiuni.ui \
    procese.ui \
    copiere.ui \
    instalare.ui

RESOURCES += \
    imagini.qrc
