TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(LightOrganPanel/lightorganpanel.pri)
include(GPIO/GPIO.pri)

SOURCES += main.cpp \
    blink.cpp \
    GPIO/gpiosimulation.cpp \
    LightOrganPanel/levelindicator.cpp \
    LightOrganPanel/lightorganpanel.cpp \
    blink.cpp \
    main.cpp \
    bcm2835/bcm2835.c

HEADERS += \
    bcm2835/bcm2835.h \
    GPIO/gpiointerface.h \
    GPIO/gpiosimulation.h \
    LightOrganPanel/levelindicator.h \
    LightOrganPanel/lightorganinterface.h \
    LightOrganPanel/lightorganpanel.h
