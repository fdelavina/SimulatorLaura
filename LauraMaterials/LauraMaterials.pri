message("   Reading LauraMaterials.pri")

HEADERS += \
    $$PWD/material.h \
    $$PWD/materialProperty.h \


SOURCES += \
    $$PWD/material.cpp \
    $$PWD/materialProperty.cpp \


#LAURA Materials Electric Module
contains(DEFINES, _lAURA_MATERIALS_Electric)
{
    INCLUDEPATH += ../LauraMaterials/Electric
    include(       ../LauraMaterials/Electric/LauraMaterialsElectric.pri)
}

#LAURA Materials Thermal Module
contains(DEFINES, _lAURA_MATERIALS_Thermal)
{
    INCLUDEPATH += ../LauraMaterials/Thermal
    include(       ../LauraMaterials/Thermal/LauraMaterialsThermal.pri)
}

#LAURA Materials Mecanics Module
contains(DEFINES, _lAURA_MATERIALS_Mechanic)
{
    INCLUDEPATH += ../LauraMaterials/Mechanic
    include(       ../LauraMaterials/Mechanic/LauraMaterialsMechanic.pri)
}
