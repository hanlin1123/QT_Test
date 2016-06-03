#ifndef QRENCRYPTDLL_GLOBAL_H
#define QRENCRYPTDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QRENCRYPTDLL_LIBRARY)
#  define QRENCRYPTDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QRENCRYPTDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QRENCRYPTDLL_GLOBAL_H