TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(LightOrganPanel/lightorganpanel.pri)
include(GPIO/GPIO.pri)
include(bcm2835/bcm2835.pri)

SOURCES += main.cpp \
    blink.cpp
