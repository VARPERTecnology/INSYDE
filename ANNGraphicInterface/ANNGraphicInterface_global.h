#ifndef ANNGRAPHICINTERFACE_GLOBAL_H
#define ANNGRAPHICINTERFACE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ANNGRAPHICINTERFACE_LIBRARY)
#  define ANNGRAPHICINTERFACESHARED_EXPORT Q_DECL_EXPORT
#else
#  define ANNGRAPHICINTERFACESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ANNGRAPHICINTERFACE_GLOBAL_H
