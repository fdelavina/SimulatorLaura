QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets




TARGET = LAURA
TEMPLATE = app
CONFIG -= app_bundle
CONFIG += c++11 static warn_off
CONFIG += console



DEFINES += _lAURA_GUI
DEFINES += _lAURA_CORE
DEFINES += _lAURA_MATERIALS
DEFINES += _lAURA_GEOMETRY
DEFINES += _lAURA_UTILS,
                        _lAURA_UTILS_FUNCTION,
                                              _lAURA_UTILS_FUNC_POL,
                                                                    _lAURA_UTILS_FUNC_POL_INLINE,

                                              _lAURA_UTILS_FUNC_PORO,
                                                                     _lAURA_UTILS_FUNC_PORO_INLINE,


                        _lAURA_UTILS_MATRICES
DEFINES += _lAURA_STUDY




# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0




win32 
{
    DEFINES += _LR_WINDOWS_
    LIBS += -lpsapi
    message("   Setup for WINDOWS!")

    LIBS += -fopenmp

    contains(DEFINES, _USE_OPENMP_)
    {
    QMAKE_LFLAGS += -fopenmp
    QMAKE_CXXFLAGS += -fopenmp
    QMAKE_CFLAGS +=   -fopenmp
    }
}


#LAURA GUI Module
contains(DEFINES, _lAURA_GUI) 
{
    INCLUDEPATH += ../LauraGUI/
    include(../LauraGUI/LauraGUI.pri)
}
#LAURA CORE Module
contains(DEFINES, _lAURA_CORE) 
{
    INCLUDEPATH += ../LauraCore/
    include(../LauraCore/LauraCore.pri)
}

#LAURA Geometry Module
contains(DEFINES, _lAURA_GEOMETRY) 
{
    INCLUDEPATH += ../LauraGeometry/
    include(../LauraGeometry/LauraGeometry.pri)
}

#LAURA Materials Module
contains(DEFINES, _lAURA_MATERIALS) 
{
    INCLUDEPATH += ../LauraMaterials/
    include(../LauraMaterials/LauraMaterials.pri)
}

#LAURA Study Module
contains(DEFINES, _lAURA_STUDY) 
{
    INCLUDEPATH += ../LauraStudy/
    include(../LauraStudy/LauraStudy.pri)
}

#LAURA Utils Module
contains(DEFINES, _lAURA_UTILS) 
{
    INCLUDEPATH += ../LauraUtils/
    include(../LauraUtils/LauraUtils.pri)
}


SOURCES += \
    main.cpp \


