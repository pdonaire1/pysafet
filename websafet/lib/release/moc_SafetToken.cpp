/****************************************************************************
** Meta object code from reading C++ file 'SafetToken.h'
**
** Created: Tue Apr 10 10:53:49 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SafetToken.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetToken.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetToken[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   10, // properties
       0,    0, // enums/sets

 // properties: name, type, flags
      19,   11, 0x0a095103,
      23,   11, 0x0a095103,
      33,   11, 0x0a095103,
      38,   11, 0x0a095103,
      50,   11, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetToken[] = {
    "SafetToken\0QString\0key\0keysource\0type\0"
    "description\0config\0"
};

const QMetaObject SafetToken::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetToken,
      qt_meta_data_SafetToken, 0 }
};

const QMetaObject *SafetToken::metaObject() const
{
    return &staticMetaObject;
}

void *SafetToken::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetToken))
        return static_cast<void*>(const_cast< SafetToken*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetToken::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = keysource(); break;
        case 2: *reinterpret_cast< QString*>(_v) = type(); break;
        case 3: *reinterpret_cast< QString*>(_v) = description(); break;
        case 4: *reinterpret_cast< QString*>(_v) = description(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setKey(*reinterpret_cast< QString*>(_v)); break;
        case 1: setKeysource(*reinterpret_cast< QString*>(_v)); break;
        case 2: setType(*reinterpret_cast< QString*>(_v)); break;
        case 3: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 4: setConfig(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
