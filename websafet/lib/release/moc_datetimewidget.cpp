/****************************************************************************
** Meta object code from reading C++ file 'datetimewidget.h'
**
** Created: Tue Apr 10 10:54:27 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inflow/datetimewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datetimewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DateTimeWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DateTimeWidget[] = {
    "DateTimeWidget\0\0newText\0setText(QString)\0"
};

const QMetaObject DateTimeWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_DateTimeWidget,
      qt_meta_data_DateTimeWidget, 0 }
};

const QMetaObject *DateTimeWidget::metaObject() const
{
    return &staticMetaObject;
}

void *DateTimeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DateTimeWidget))
        return static_cast<void*>(const_cast< DateTimeWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int DateTimeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
