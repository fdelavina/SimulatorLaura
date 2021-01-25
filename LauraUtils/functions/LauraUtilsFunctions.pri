message("   Reading LauraUtilsFunctions.pri")

#LAURA Utils Functions Polinomials
contains(DEFINES, _lAURA_UTILS_FUNC_POL)
{
    INCLUDEPATH += ../functions/polinomials
    include(       ../functions/polinomials/LauraUtilsFunctionsPolin.pri)
}

#LAURA Utils Functions Polinomials
contains(DEFINES, _lAURA_UTILS_FUNC_PORO)
{
    INCLUDEPATH += ../functions/poroFunctions
    include(       ../functions/poroFunctions/LauraUtilsFunctionsPoro.pri)
}

SOURCES += \ \
    $$PWD/dvrfunctionsparameteresand2value.cpp \
    $$PWD/dvrfunctionsparametersand1value.cpp



HEADERS += \ \
    $$PWD/dvrfunctionsparameteresand2value.h \
    $$PWD/dvrfunctionsparametersand1value.h


