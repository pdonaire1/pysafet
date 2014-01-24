/****************************************************************************
** Meta object code from reading C++ file 'cmdwidget.h'
**
** Created: Mon Nov 18 10:39:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/cmdwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmdwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CmdWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x0a,
      36,   10,   10,   10, 0x0a,
      53,   10,   10,   10, 0x0a,
      70,   10,   10,   10, 0x0a,
      86,   10,   81,   10, 0x0a,
     104,   99,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CmdWidget[] = {
    "CmdWidget\0\0newText\0setText(QString)\0"
    "insertAndClose()\0cancelAndClose()\0"
    "doReturn()\0bool\0isPassword()\0text\0"
    "changeLblValidator(QString)\0"
};

void CmdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CmdWidget *_t = static_cast<CmdWidget *>(_o);
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->insertAndClose(); break;
        case 2: _t->cancelAndClose(); break;
        case 3: _t->doReturn(); break;
        case 4: { bool _r = _t->isPassword();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->changeLblValidator((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CmdWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CmdWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CmdWidget,
      qt_meta_data_CmdWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CmdWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CmdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CmdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CmdWidget))
        return static_cast<void*>(const_cast< CmdWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int CmdWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
