DEFINES += _lAURA_GEOMETRY

include (../Common/common.pri)
include (../Configs/Lib/libconfig.pri)



LIBS += -lLauraUtilsShared

INCLUDEPATH += LauraRectangle/

HEADERS += geometry.h
SOURCES += geometry.cpp


# Include specific build type variables
include(LauraRectangle/LauraRectangle.pri)

TARGET = LauraGeometryShared




