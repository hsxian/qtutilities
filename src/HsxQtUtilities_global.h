#ifndef HSXQTUTILITIES_GLOBAL_H
#define HSXQTUTILITIES_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HSXQTUTILITIES_LIBRARY)
#define HSXQTUTILITIES_EXPORT Q_DECL_EXPORT
#else
#define HSXQTUTILITIES_EXPORT Q_DECL_IMPORT
#endif

#endif // HSXQTUTILITIES_GLOBAL_H
