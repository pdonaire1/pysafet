/****************************************************************************
** Meta object code from reading C++ file 'SafetConfiguration.h'
**
** Created: Tue Apr 10 10:53:59 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SafetConfiguration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetConfiguration[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   10, // properties
       0,    0, // enums/sets

 // properties: name, type, flags
      27,   19, 0x0a095103,
      30,   19, 0x0a095103,
      44,   19, 0x0a095103,
      53,   19, 0x0a095103,
      66,   19, 0x0a095103,
      75,   19, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetConfiguration[] = {
    "SafetConfiguration\0QString\0id\0"
    "connectstring\0hostname\0databasename\0"
    "username\0driver\0"
};

const QMetaObject SafetConfiguration::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetConfiguration,
      qt_meta_data_SafetConfiguration, 0 }
};

const QMetaObject *SafetConfiguration::metaObject() const
{
    return &staticMetaObject;
}

void *SafetConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetConfiguration))
        return static_cast<void*>(const_cast< SafetConfiguration*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = connectstring(); break;
        case 2: *reinterpret_cast< QString*>(_v) = hostname(); break;
        case 3: *reinterpret_cast< QString*>(_v) = databasename(); break;
        case 4: *reinterpret_cast< QString*>(_v) = username(); break;
        case 5: *reinterpret_cast< QString*>(_v) = driver(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setConnectstring(*reinterpret_cast< QString*>(_v)); break;
        case 2: setHostname(*reinterpret_cast< QString*>(_v)); break;
        case 3: setDatabasename(*reinterpret_cast< QString*>(_v)); break;
        case 4: setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 5: setDriver(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
