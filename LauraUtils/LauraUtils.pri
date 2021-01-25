message("   Reading LauraUtils.pri")

#LAURA Utils Functions
contains(DEFINES, _lAURA_UTILS_FUNCTION)
{
    INCLUDEPATH += ../LauraUtils/functions
    include(       ../LauraUtils/functions/LauraUtilsFunctions.pri)
}

#LAURA Utils Matrices
contains(DEFINES, _lAURA_UTILS_MATRICES)
{
    INCLUDEPATH += ../LauraUtils/Matrices
    include(       ../LauraUtils/Matrices/LauraUtilsMatrices.pri)
}




