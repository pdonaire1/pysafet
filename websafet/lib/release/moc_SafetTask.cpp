/****************************************************************************
** Meta object code from reading C++ file 'SafetTask.h'
**
** Created: Tue Apr 10 10:53:54 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SafetTask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetTask[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   10, // properties
       0,    0, // enums/sets

 // properties: name, type, flags
      18,   10, 0x0a095103,
      21,   10, 0x0a095103,
      34,   10, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetTask[] = {
    "SafetTask\0QString\0id\0multiplicity\0"
    "type\0"
};

const QMetaObject SafetTask::staticMetaObject = {
    { &SafetNode::staticMetaObject, qt_meta_stringdata_SafetTask,
      qt_meta_data_SafetTask, 0 }
};

const QMetaObject *SafetTask::metaObject() const
{
    return &staticMetaObject;
}

void *SafetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetTask))
        return static_cast<void*>(const_cast< SafetTask*>(this));
    return SafetNode::qt_metacast(_clname);
}

int SafetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = multiplicity(); break;
        case 2: *reinterpret_cast< QString*>(_v) = type(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setMultiplicity(*reinterpret_cast< QString*>(_v)); break;
        case 2: setType(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
