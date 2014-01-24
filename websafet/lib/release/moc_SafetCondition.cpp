/****************************************************************************
** Meta object code from reading C++ file 'SafetCondition.h'
**
** Created: Tue Apr 10 10:53:52 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SafetCondition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetCondition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetCondition[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   10, // properties
       0,    0, // enums/sets

 // properties: name, type, flags
      23,   15, 0x0a095103,
      26,   15, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetCondition[] = {
    "SafetCondition\0QString\0id\0type\0"
};

const QMetaObject SafetCondition::staticMetaObject = {
    { &SafetNode::staticMetaObject, qt_meta_stringdata_SafetCondition,
      qt_meta_data_SafetCondition, 0 }
};

const QMetaObject *SafetCondition::metaObject() const
{
    return &staticMetaObject;
}

void *SafetCondition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetCondition))
        return static_cast<void*>(const_cast< SafetCondition*>(this));
    return SafetNode::qt_metacast(_clname);
}

int SafetCondition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = type(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setType(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
