#-------------------------------------------------
#
# Project created by QtCreator 2016-04-06T10:56:25
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PrestameSAS
TEMPLATE = app


SOURCES += main.cpp\
        prestame_sas.cpp \
    iniciar_sesion.cpp \
    registrarse.cpp \
    registrarse_segunda_ventana.cpp

HEADERS  += prestame_sas.h \
    iniciar_sesion.h \
    registrarse.h \
    registrarse_segunda_ventana.h

FORMS    += prestame_sas.ui \
    iniciar_sesion.ui \
    registrarse.ui \
    registrarse_segunda_ventana.ui
