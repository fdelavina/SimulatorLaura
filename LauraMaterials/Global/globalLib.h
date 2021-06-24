#ifndef GLOBALLIB_H
#define GLOBALLIB_H

#include <QtCore/qglobal.h>

#if defined(_lAURA_MATERIALS)
#   define LAURAMATERIALSSHARED_EXPORT Q_DECL_EXPORT
# else
#   define LAURAMATERIALSSHARED_EXPORT Q_DECL_IMPORT
# endif

#endif // GLOBALLIB_H
