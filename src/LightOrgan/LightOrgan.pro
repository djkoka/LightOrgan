TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(LightOrganPanel/lightorganpanel.pri)
include(GPIO/GPIO.pri)

SOURCES += main.cpp
