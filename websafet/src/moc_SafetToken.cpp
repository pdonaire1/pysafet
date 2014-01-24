/****************************************************************************
** Meta object code from reading C++ file 'SafetToken.h'
**
** Created: Mon Nov 18 10:38:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SafetToken.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetToken.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetToken[] = {

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

void SafetToken::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SafetToken::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SafetToken::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetToken,
      qt_meta_data_SafetToken, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SafetToken::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SafetToken::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
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
