/****************************************************************************
** Meta object code from reading C++ file 'SafetNode.h'
**
** Created: Tue Apr 10 10:53:48 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SafetNode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafetNode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafetNode[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   10, // properties
       0,    0, // enums/sets

 // properties: name, type, flags
      18,   10, 0x0a095103,
      24,   10, 0x0a095103,
      31,   10, 0x0a095103,
      43,   10, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_SafetNode[] = {
    "SafetNode\0QString\0title\0report\0"
    "numericinfo\0textualinfo\0"
};

const QMetaObject SafetNode::staticMetaObject = {
    { &SafetXmlObject::staticMetaObject, qt_meta_stringdata_SafetNode,
      qt_meta_data_SafetNode, 0 }
};

const QMetaObject *SafetNode::metaObject() const
{
    return &staticMetaObject;
}

void *SafetNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafetNode))
        return static_cast<void*>(const_cast< SafetNode*>(this));
    return SafetXmlObject::qt_metacast(_clname);
}

int SafetNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SafetXmlObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = report(); break;
        case 2: *reinterpret_cast< QString*>(_v) = numericinfo(); break;
        case 3: *reinterpret_cast< QString*>(_v) = textualinfo(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setReport(*reinterpret_cast< QString*>(_v)); break;
        case 2: setNumericinfo(*reinterpret_cast< QString*>(_v)); break;
        case 3: setTextualinfo(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
