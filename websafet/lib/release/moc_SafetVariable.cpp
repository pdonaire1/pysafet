/****************************************************************************
** Meta object code from reading C++ file 'SafetVariable.h'
**
** Created: Tue Apr 10 10:53:55 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SafetVariable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetVariable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetVariable[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   10, // properties
       0,    0, // enums/sets

 // properties: name, type, flags
      22,   14, 0x0a095103,
      25,   14, 0x0a095103,
      35,   14, 0x0a095103,
      41,   14, 0x0a095103,
      46,   14, 0x0a095103,
      53,   14, 0x0a095103,
      60,   14, 0x0a095103,
      75,   14, 0x0a095103,
      87,   14, 0x0a095103,
      96,   14, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetVariable[] = {
    "SafetVariable\0QString\0id\0tokenlink\0"
    "scope\0type\0config\0source\0documentsource\0"
    "description\0rolfield\0timestampfield\0"
};

const QMetaObject SafetVariable::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetVariable,
      qt_meta_data_SafetVariable, 0 }
};

const QMetaObject *SafetVariable::metaObject() const
{
    return &staticMetaObject;
}

void *SafetVariable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetVariable))
        return static_cast<void*>(const_cast< SafetVariable*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetVariable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = tokenlink(); break;
        case 2: *reinterpret_cast< QString*>(_v) = scope(); break;
        case 3: *reinterpret_cast< QString*>(_v) = type(); break;
        case 4: *reinterpret_cast< QString*>(_v) = config(); break;
        case 5: *reinterpret_cast< QString*>(_v) = source(); break;
        case 6: *reinterpret_cast< QString*>(_v) = documentsource(); break;
        case 7: *reinterpret_cast< QString*>(_v) = description(); break;
        case 8: *reinterpret_cast< QString*>(_v) = rolfield(); break;
        case 9: *reinterpret_cast< QString*>(_v) = timestampfield(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setTokenlink(*reinterpret_cast< QString*>(_v)); break;
        case 2: setScope(*reinterpret_cast< QString*>(_v)); break;
        case 3: setType(*reinterpret_cast< QString*>(_v)); break;
        case 4: setConfig(*reinterpret_cast< QString*>(_v)); break;
        case 5: setSource(*reinterpret_cast< QString*>(_v)); break;
        case 6: setDocumentsource(*reinterpret_cast< QString*>(_v)); break;
        case 7: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 8: setRolfield(*reinterpret_cast< QString*>(_v)); break;
        case 9: setTimestampfield(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
