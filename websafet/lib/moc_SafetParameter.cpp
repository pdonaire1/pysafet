/****************************************************************************
** Meta object code from reading C++ file 'SafetParameter.h'
**
** Created: Mon Nov 18 10:41:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/SafetParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetParameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      23,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      23,   15, 0x0a095103,
      28,   15, 0x0a095103,
      38,   15, 0x0a095103,
      44,   15, 0x0a095103,
      55,   15, 0x0a095103,
      66,   15, 0x0a095103,
      74,   15, 0x0a095103,
      83,   15, 0x0a095103,
      90,   15, 0x0a095103,
      95,   15, 0x0a095103,
     103,   15, 0x0a095103,
     112,   15, 0x0a095103,
     125,   15, 0x0a095103,
     131,   15, 0x0a095103,
     136,   15, 0x0a095103,
     144,   15, 0x0a095103,
     150,   15, 0x0a095103,
     155,   15, 0x0a095103,
     161,   15, 0x0a095103,
     168,   15, 0x0a095103,
     178,   15, 0x0a095103,
     191,   15, 0x0a095103,
     204,   15, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetParameter[] = {
    "SafetParameter\0QString\0type\0mandatory\0"
    "title\0primarykey\0validation\0options\0"
    "function\0format\0desc\0literal\0sequence\0"
    "typesequence\0input\0path\0visible\0order\0"
    "icon\0index\0filter\0repetible\0configurekey\0"
    "defaultvalue\0changefor\0"
};

void SafetParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SafetParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SafetParameter::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetParameter,
      qt_meta_data_SafetParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SafetParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SafetParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SafetParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetParameter))
        return static_cast<void*>(const_cast< SafetParameter*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = type(); break;
        case 1: *reinterpret_cast< QString*>(_v) = mandatory(); break;
        case 2: *reinterpret_cast< QString*>(_v) = title(); break;
        case 3: *reinterpret_cast< QString*>(_v) = primarykey(); break;
        case 4: *reinterpret_cast< QString*>(_v) = validation(); break;
        case 5: *reinterpret_cast< QString*>(_v) = options(); break;
        case 6: *reinterpret_cast< QString*>(_v) = function(); break;
        case 7: *reinterpret_cast< QString*>(_v) = format(); break;
        case 8: *reinterpret_cast< QString*>(_v) = desc(); break;
        case 9: *reinterpret_cast< QString*>(_v) = literal(); break;
        case 10: *reinterpret_cast< QString*>(_v) = sequence(); break;
        case 11: *reinterpret_cast< QString*>(_v) = typesequence(); break;
        case 12: *reinterpret_cast< QString*>(_v) = input(); break;
        case 13: *reinterpret_cast< QString*>(_v) = path(); break;
        case 14: *reinterpret_cast< QString*>(_v) = visible(); break;
        case 15: *reinterpret_cast< QString*>(_v) = order(); break;
        case 16: *reinterpret_cast< QString*>(_v) = icon(); break;
        case 17: *reinterpret_cast< QString*>(_v) = index(); break;
        case 18: *reinterpret_cast< QString*>(_v) = filter(); break;
        case 19: *reinterpret_cast< QString*>(_v) = repetible(); break;
        case 20: *reinterpret_cast< QString*>(_v) = configurekey(); break;
        case 21: *reinterpret_cast< QString*>(_v) = defaultvalue(); break;
        case 22: *reinterpret_cast< QString*>(_v) = defaultvalue(); break;
        }
        _id -= 23;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< QString*>(_v)); break;
        case 1: setMandatory(*reinterpret_cast< QString*>(_v)); break;
        case 2: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPrimarykey(*reinterpret_cast< QString*>(_v)); break;
        case 4: setValidation(*reinterpret_cast< QString*>(_v)); break;
        case 5: setOptions(*reinterpret_cast< QString*>(_v)); break;
        case 6: setFunction(*reinterpret_cast< QString*>(_v)); break;
        case 7: setFormat(*reinterpret_cast< QString*>(_v)); break;
        case 8: setDesc(*reinterpret_cast< QString*>(_v)); break;
        case 9: setLiteral(*reinterpret_cast< QString*>(_v)); break;
        case 10: setSequence(*reinterpret_cast< QString*>(_v)); break;
        case 11: setTypesequence(*reinterpret_cast< QString*>(_v)); break;
        case 12: setInput(*reinterpret_cast< QString*>(_v)); break;
        case 13: setPath(*reinterpret_cast< QString*>(_v)); break;
        case 14: setVisible(*reinterpret_cast< QString*>(_v)); break;
        case 15: setOrder(*reinterpret_cast< QString*>(_v)); break;
        case 16: setIcon(*reinterpret_cast< QString*>(_v)); break;
        case 17: setIndex(*reinterpret_cast< QString*>(_v)); break;
        case 18: setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 19: setRepetible(*reinterpret_cast< QString*>(_v)); break;
        case 20: setConfigurekey(*reinterpret_cast< QString*>(_v)); break;
        case 21: setDefaultvalue(*reinterpret_cast< QString*>(_v)); break;
        case 22: setChangefor(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 23;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
