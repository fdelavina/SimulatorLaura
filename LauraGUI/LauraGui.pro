DEFINES += _lAURA_GUI
include (../Common/common.pri)
include (../Configs/lib/libconfig.pri)

QT += widgets gui



TARGET = LauraGuiShared




INCLUDEPATH+=MainWindow/



include(MainWindow/MainWindow.pri)
