QT += core gui widgets
include (../Common/common.pri)
include (../Configs/app/appconfig.pri)


LIBS += -lLauraUtilsShared \
        -lLauraGuiShared

TEMPLATE = app

DESTDIR = $$MAIN_DEST_DIR/bin
SOURCES += main.cpp



# Will build the final executable in the main project directory.
TARGET = MyAppesita

unix{
instalacionDLL.files = $$LIB_DEST_DIR/*
instalacionDLL.path = $$MAIN_DEST_DIR/aplicacionfinal
INSTALLS += instalacionDLL
}

RESOURCES += \
    MyResources.qrc

