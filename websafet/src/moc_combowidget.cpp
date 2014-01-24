/****************************************************************************
** Meta object code from reading C++ file 'combowidget.h'
**
** Created: Mon Nov 18 10:39:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/combowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'combowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComboWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   13,   12, 0x0a,
      36,   28,   12,   12, 0x0a,
      53,   12,   12,   12, 0x0a,
      76,   67,   12,   12, 0x0a,
     107,   12,   12,   12, 0x2a,
     134,   67,   12,   12, 0x0a,
     167,   12,   12,   12, 0x2a,
     196,   67,   12,   12, 0x0a,
     234,   12,   12,   12, 0x2a,
     268,   67,   12,   12, 0x0a,
     295,   12,   12,   12, 0x2a,
     318,   12,   12,   12, 0x0a,
     349,  343,   12,   12, 0x0a,
     374,   67,   12,   12, 0x0a,
     396,   12,   12,   12, 0x2a,
     414,   67,   12,   12, 0x0a,
     445,   12,   12,   12, 0x2a,
     472,   67,   12,   12, 0x0a,
     500,   12,   12,   12, 0x2a,
     524,   12,   12,   12, 0x0a,
     534,   12,   12,   12, 0x0a,
     545,   12,   12,   12, 0x0a,
     564,  562,   13,   12, 0x0a,
     586,  562,   13,   12, 0x0a,
     607,   12,   12,   12, 0x0a,
     624,   12,   12,   12, 0x0a,
     647,  645,   13,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ComboWidget[] = {
    "ComboWidget\0\0QString\0text()\0newText\0"
    "setText(QString)\0updateCombo()\0inwidget\0"
    "updateComboVariableSafet(bool)\0"
    "updateComboVariableSafet()\0"
    "updateComboAutofilterSafet(bool)\0"
    "updateComboAutofilterSafet()\0"
    "updateComboRecursivefilterSafet(bool)\0"
    "updateComboRecursivefilterSafet()\0"
    "updateComboListTable(bool)\0"
    "updateComboListTable()\0updateComboListLiteral()\0"
    "value\0updateVarGlobal(QString)\0"
    "updateComboFlow(bool)\0updateComboFlow()\0"
    "updateComboConffileSafet(bool)\0"
    "updateComboConffileSafet()\0"
    "updateComboColorSafet(bool)\0"
    "updateComboColorSafet()\0viewdoc()\0"
    "selColor()\0insertAndClose()\0s\0"
    "getRealValue(QString)\0getVarValue(QString)\0"
    "itemsValueList()\0itemsRealValueList()\0"
    "k\0findkeyvalue(QString)\0"
};

void ComboWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComboWidget *_t = static_cast<ComboWidget *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateCombo(); break;
        case 3: _t->updateComboVariableSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateComboVariableSafet(); break;
        case 5: _t->updateComboAutofilterSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateComboAutofilterSafet(); break;
        case 7: _t->updateComboRecursivefilterSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateComboRecursivefilterSafet(); break;
        case 9: _t->updateComboListTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateComboListTable(); break;
        case 11: _t->updateComboListLiteral(); break;
        case 12: _t->updateVarGlobal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->updateComboFlow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updateComboFlow(); break;
        case 15: _t->updateComboConffileSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->updateComboConffileSafet(); break;
        case 17: _t->updateComboColorSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->updateComboColorSafet(); break;
        case 19: _t->viewdoc(); break;
        case 20: _t->selColor(); break;
        case 21: _t->insertAndClose(); break;
        case 22: { QString _r = _t->getRealValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->getVarValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: _t->itemsValueList(); break;
        case 25: _t->itemsRealValueList(); break;
        case 26: { QString _r = _t->findkeyvalue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ComboWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComboWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_ComboWidget,
      qt_meta_data_ComboWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComboWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComboWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComboWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComboWidget))
        return static_cast<void*>(const_cast< ComboWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int ComboWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CmdWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
