/****************************************************************************
** Meta object code from reading C++ file 'SafetRecursiveFilter.h'
**
** Created: Thu Dec 19 15:54:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/SafetRecursiveFilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetRecursiveFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetRecursivefilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      29,   21, 0x0a095103,
      32,   21, 0x0a095103,
      37,   21, 0x0a095103,
      44,   21, 0x0a095103,
      49,   21, 0x0a095103,
      55,   21, 0x0a095103,
      63,   21, 0x0a095103,
      73,   21, 0x0a095103,
      81,   21, 0x0a095103,
      88,   21, 0x0a095103,
      96,   21, 0x0a095103,
     103,   21, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetRecursivefilter[] = {
    "SafetRecursivefilter\0QString\0id\0side\0"
    "source\0type\0query\0options\0tokenlink\0"
    "pattern\0report\0initial\0filter\0onlyfathers\0"
};

void SafetRecursivefilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SafetRecursivefilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SafetRecursivefilter::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetRecursivefilter,
      qt_meta_data_SafetRecursivefilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SafetRecursivefilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SafetRecursivefilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SafetRecursivefilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetRecursivefilter))
        return static_cast<void*>(const_cast< SafetRecursivefilter*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetRecursivefilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = side(); break;
        case 2: *reinterpret_cast< QString*>(_v) = source(); break;
        case 3: *reinterpret_cast< QString*>(_v) = type(); break;
        case 4: *reinterpret_cast< QString*>(_v) = query(); break;
        case 5: *reinterpret_cast< QString*>(_v) = options(); break;
        case 6: *reinterpret_cast< QString*>(_v) = tokenlink(); break;
        case 7: *reinterpret_cast< QString*>(_v) = pattern(); break;
        case 8: *reinterpret_cast< QString*>(_v) = report(); break;
        case 9: *reinterpret_cast< QString*>(_v) = initial(); break;
        case 10: *reinterpret_cast< QString*>(_v) = filter(); break;
        case 11: *reinterpret_cast< QString*>(_v) = onlyfathers(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSide(*reinterpret_cast< QString*>(_v)); break;
        case 2: setSource(*reinterpret_cast< QString*>(_v)); break;
        case 3: setType(*reinterpret_cast< QString*>(_v)); break;
        case 4: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 5: setOptions(*reinterpret_cast< QString*>(_v)); break;
        case 6: setTokenlink(*reinterpret_cast< QString*>(_v)); break;
        case 7: setPattern(*reinterpret_cast< QString*>(_v)); break;
        case 8: setReport(*reinterpret_cast< QString*>(_v)); break;
        case 9: setInitial(*reinterpret_cast< QString*>(_v)); break;
        case 10: setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 11: setOnlyfathers(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
