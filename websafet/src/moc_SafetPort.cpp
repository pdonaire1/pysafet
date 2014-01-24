/****************************************************************************
** Meta object code from reading C++ file 'SafetPort.h'
**
** Created: Mon Nov 18 10:38:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SafetPort.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetPort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetPort[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      18,   10, 0x0a095103,
      25,   10, 0x0a095103,
      30,   10, 0x0a095103,
      35,   10, 0x0a095103,
      43,   10, 0x0a095103,
      49,   10, 0x0a095103,
      57,   10, 0x0a095103,
      67,   10, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetPort[] = {
    "SafetPort\0QString\0config\0side\0type\0"
    "pattern\0query\0options\0tokenlink\0drop\0"
};

void SafetPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SafetPort::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SafetPort::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetPort,
      qt_meta_data_SafetPort, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SafetPort::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SafetPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SafetPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetPort))
        return static_cast<void*>(const_cast< SafetPort*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = config(); break;
        case 1: *reinterpret_cast< QString*>(_v) = side(); break;
        case 2: *reinterpret_cast< QString*>(_v) = type(); break;
        case 3: *reinterpret_cast< QString*>(_v) = pattern(); break;
        case 4: *reinterpret_cast< QString*>(_v) = query(); break;
        case 5: *reinterpret_cast< QString*>(_v) = options(); break;
        case 6: *reinterpret_cast< QString*>(_v) = tokenlink(); break;
        case 7: *reinterpret_cast< QString*>(_v) = drop(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setConfig(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSide(*reinterpret_cast< QString*>(_v)); break;
        case 2: setType(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPattern(*reinterpret_cast< QString*>(_v)); break;
        case 4: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 5: setOptions(*reinterpret_cast< QString*>(_v)); break;
        case 6: setTokenlink(*reinterpret_cast< QString*>(_v)); break;
        case 7: setDrop(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
