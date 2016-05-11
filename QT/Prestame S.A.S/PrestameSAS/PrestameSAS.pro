#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T19:00:32
#
#-------------------------------------------------

QT       += core gui sql xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PrestameSAS
TEMPLATE = app


SOURCES += main.cpp\
        prestamesas.cpp \
    registrarse.cpp \
    registrarsesegundaventana.cpp \
    iniciarsesion.cpp \
    registrarseresultado.cpp

HEADERS  += prestamesas.h \
    registrarse.h \
    registrarsesegundaventana.h \
    iniciarsesion.h \
    registrarseresultado.h

FORMS    += prestamesas.ui \
    registrarse.ui \
    registrarsesegundaventana.ui \
    iniciarsesion.ui \
    registrarseresultado.ui

DISTFILES +=
