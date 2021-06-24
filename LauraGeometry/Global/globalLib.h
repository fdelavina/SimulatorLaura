#ifndef GLOBALLIB_H
#define GLOBALLIB_H

#include <QtCore/qglobal.h>

#if defined _lAURA_GEOMETRY
#   define LAURAGEOMETRYSHARED_EXPORT Q_DECL_EXPORT
# else
#   define LAURAGEOMETRYSHARED_EXPORT Q_DECL_IMPORT
# endif

#endif // GLOBALLIB_H
