message("   Reading LauraUtilsFunctionsPolin.pri")

#LAURA Utils Functions Polinomials inline
contains(DEFINES, _lAURA_UTILS_FUNC_POL_INLINE)
{
    INCLUDEPATH += ../polinomials/inline
    include(       ../polinomials/inline/LauraUtilsFunctionsPolinInline.pri)
}


SOURCES += \
    $$PWD/dvrpolinomial.cpp \



HEADERS += \
    $$PWD/dvrpolinomial.h \


