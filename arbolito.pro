TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    nodo.cpp \
    funciones.cpp \
    arbol.cpp \
    parser.cpp \
    analizador.cpp \
    mapeador.cpp \
    tabulador.cpp

HEADERS += \
    funciones.h \
    Nodo.h \
    Arbol.h \
    parser.h \
    analizador.h \
    mapeador.h \
    tabulador.h

