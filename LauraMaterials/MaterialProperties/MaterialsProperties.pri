message("   Reading LauraMaterialsProperties.pri")

HEADERS += \
    $$PWD/materialProperty.h \


SOURCES += \
    $$PWD/materialProperty.cpp \


#LAURA Materials Electric Module
contains(DEFINES, _lAURA_MATERIALS_Electric)
{
    include(       Electric/LauraMaterialsElectric.pri)
}

#LAURA Materials Thermal Module
contains(DEFINES, _lAURA_MATERIALS_Thermal)
{
    include(       Thermal/LauraMaterialsThermal.pri)
}

#LAURA Materials Mecanics Module
contains(DEFINES, _lAURA_MATERIALS_Mechanic)
{
    include(       Mechanic/LauraMaterialsMechanic.pri)
}
