#ifndef GLOBALLIB_H
#define GLOBALLIB_H

#include <QtCore/qglobal.h>

#if defined(_lAURA_STUDY)
#   define LAURASTUDYSHARED_EXPORT Q_DECL_EXPORT
# else
#   define LAURASTUDYSHARED_EXPORT Q_DECL_IMPORT
# endif

#endif // GLOBALLIB_H
