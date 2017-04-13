#ifndef TIETOKANTA_GLOBAL_H
#define TIETOKANTA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TIETOKANTA_LIBRARY)
#  define TIETOKANTASHARED_EXPORT Q_DECL_EXPORT
#else
#  define TIETOKANTASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TIETOKANTA_GLOBAL_H
