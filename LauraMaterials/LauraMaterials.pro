include (../Common/common.pri)
include(../globalLib/Global/globalLib.pri)
include(MaterialProperties/MaterialsProperties.pri)
# Include specific build type variables
include (../Configs/Lib/libconfig.pri)

TARGET = LauraMaterialsShared


INCLUDEPATH += MaterialProperties
DEPENDPATH  += MaterialProperties

HEADERS += material.h
SOURCES += material.cpp



LIBS+= -L$$OUT_PWD//../LauraUtilsShared/Debug -lLauraUtilsShared

INCLUDEPATH += $$PWD/../LauraUtils
DEPENDPATH  += $$PWD/../LauraUtils

