/****************************************************************************
** Meta object code from reading C++ file 'outputwidget.h'
**
** Created: Mon Nov 18 10:41:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/outputwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutputWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OutputWidget[] = {
    "OutputWidget\0\0newText\0setText(QString)\0"
};

void OutputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OutputWidget *_t = static_cast<OutputWidget *>(_o);
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OutputWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OutputWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_OutputWidget,
      qt_meta_data_OutputWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputWidget))
        return static_cast<void*>(const_cast< OutputWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int OutputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CmdWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
