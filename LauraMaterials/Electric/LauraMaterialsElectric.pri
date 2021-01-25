message("   Reading LauraMaterialsElectric.pri")

#LAURA Materials Electric PropertiesModule
contains(DEFINES, _lAURA_MATERIALS_ElectricProperties)
{
    INCLUDEPATH += ../Electric/Properties
    include(       ../Electric/Properties/LauraElectricProperties.pri)
}


HEADERS += \
    $$PWD/matelectricproperty.h     \
    $$PWD/poromatelectricproperty.h \
    $$PWD/tempmatelectricproperty.h

SOURCES += \
    $$PWD/matelectricproperty.cpp    \
    $$PWD/poromatelectricproperty.cpp \
    $$PWD/tempmatelectricproperty.cpp
