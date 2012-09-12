#-------------------------------------------------
#
# Project created by QtCreator 2012-09-12T21:49:46
#
#-------------------------------------------------

QT       += core gui

TARGET = Watchlist
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tv_show.cpp

HEADERS  += mainwindow.h \
    tv_show.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/manifest.aegis \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog

contains(MEEGO_EDITION,harmattan) {
    target.path = /opt/Watchlist/bin
    INSTALLS += target
}
