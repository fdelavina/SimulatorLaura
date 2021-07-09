DEFINES += _lAURA_GUI
include (../Common/common.pri)
include (../Configs/lib/libconfig.pri)

QT += widgets gui



TARGET = LauraGuiShared




INCLUDEPATH+=MainWindow/
INCLUDEPATH+=buttomDialogs/


include(MainWindow/MainWindow.pri)
include(WindowsContainer/WindowsContainer.pri)
include(buttomDialogs/buttomDialogs.pri)
