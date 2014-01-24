/****************************************************************************
** Meta object code from reading C++ file 'inflowfirmadoc.h'
**
** Created: Thu Feb 7 11:41:08 2013
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/inflowfirmadoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inflowfirmadoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InflowFirmaDoc[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      26,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InflowFirmaDoc[] = {
    "InflowFirmaDoc\0\0doPrint()\0viewpdf()\0"
};

const QMetaObject InflowFirmaDoc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InflowFirmaDoc,
      qt_meta_data_InflowFirmaDoc, 0 }
};

const QMetaObject *InflowFirmaDoc::metaObject() const
{
    return &staticMetaObject;
}

void *InflowFirmaDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InflowFirmaDoc))
        return static_cast<void*>(const_cast< InflowFirmaDoc*>(this));
    return QObject::qt_metacast(_clname);
}

int InflowFirmaDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doPrint(); break;
        case 1: viewpdf(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
