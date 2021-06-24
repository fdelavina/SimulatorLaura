message("   Reading LauraUtilsFunctionsPoro.pri")

#LAURA Utils Functions Poro
contains(DEFINES, _lAURA_UTILS_FUNC_PORO_INLINE)
{
    INCLUDEPATH += ../poroFunctions/inline
    include(       ../poroFunctions/inline/LauraUtilsFunctionsPoroInline.pri)
}


SOURCES += \
    $$PWD/dvrporofunction.cpp




HEADERS += \
    $$PWD/dvrporofunction.h



