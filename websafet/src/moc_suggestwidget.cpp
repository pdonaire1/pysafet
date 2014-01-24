/****************************************************************************
** Meta object code from reading C++ file 'suggestwidget.h'
**
** Created: Thu Feb 7 11:41:01 2013
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/suggestwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'suggestwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SuggestWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      40,   32,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SuggestWidget[] = {
    "SuggestWidget\0\0insertAndClose()\0newText\0"
    "setText(QString)\0"
};

const QMetaObject SuggestWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_SuggestWidget,
      qt_meta_data_SuggestWidget, 0 }
};

const QMetaObject *SuggestWidget::metaObject() const
{
    return &staticMetaObject;
}

void *SuggestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SuggestWidget))
        return static_cast<void*>(const_cast< SuggestWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int SuggestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CmdWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: insertAndClose(); break;
        case 1: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
