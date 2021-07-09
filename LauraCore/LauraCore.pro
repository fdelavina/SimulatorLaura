DEFINES += _lAURA_CORE

include (../Common/common.pri)
include (../Configs/Lib/libconfig.pri)

include (ContainerData/ContainerData.pri)

LIBS += -lLauraMaterialsShared \
        -lLauraGeometryShared

INCLUDEPATH += ContainerData/


TARGET = LauraCoreShared





