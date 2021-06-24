DEFINES += _lAURA_UTILS

QT       += core
include (../Common/common.pri)
include (../Configs/Lib/libconfig.pri)
include(../globalLib/Global/globalLib.pri)





INCLUDEPATH+ = functions/
INCLUDEPATH+ = Matrices/



include(functions/LauraUtilsFunctions.pri)
include(Matrices/LauraUtilsMatrices.pri)


TARGET = LauraUtilsShared
