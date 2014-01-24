/****************************************************************************
** Meta object code from reading C++ file 'numberwidget.h'
**
** Created: Tue Apr 10 10:54:39 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inflow/numberwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numberwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NumberWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NumberWidget[] = {
    "NumberWidget\0\0newText\0setText(QString)\0"
};

const QMetaObject NumberWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_NumberWidget,
      qt_meta_data_NumberWidget, 0 }
};

const QMetaObject *NumberWidget::metaObject() const
{
    return &staticMetaObject;
}

void *NumberWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NumberWidget))
        return static_cast<void*>(const_cast< NumberWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int NumberWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CmdWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
