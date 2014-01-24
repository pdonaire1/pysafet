/****************************************************************************
** Meta object code from reading C++ file 'SafetConnection.h'
**
** Created: Mon Nov 18 10:41:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/SafetConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      24,   16, 0x0a095103,
      31,   16, 0x0a095103,
      37,   16, 0x0a095103,
      45,   16, 0x0a095103,
      55,   16, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetConnection[] = {
    "SafetConnection\0QString\0source\0query\0"
    "options\0tokenlink\0back\0"
};

void SafetConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SafetConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SafetConnection::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetConnection,
      qt_meta_data_SafetConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SafetConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SafetConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SafetConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetConnection))
        return static_cast<void*>(const_cast< SafetConnection*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = source(); break;
        case 1: *reinterpret_cast< QString*>(_v) = query(); break;
        case 2: *reinterpret_cast< QString*>(_v) = options(); break;
        case 3: *reinterpret_cast< QString*>(_v) = tokenlink(); break;
        case 4: *reinterpret_cast< QString*>(_v) = back(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QString*>(_v)); break;
        case 1: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 2: setOptions(*reinterpret_cast< QString*>(_v)); break;
        case 3: setTokenlink(*reinterpret_cast< QString*>(_v)); break;
        case 4: setBack(*reinterpret_cast< QString*>(_v)); break;
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
