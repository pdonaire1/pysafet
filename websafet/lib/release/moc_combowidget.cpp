/****************************************************************************
** Meta object code from reading C++ file 'combowidget.h'
**
** Created: Tue Apr 10 10:54:24 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inflow/combowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'combowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComboWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

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
     656,   12,  645,   12, 0x0a,
     666,  664,   13,   12, 0x0a,

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
    "QComboBox*\0combo()\0k\0findkeyvalue(QString)\0"
};

const QMetaObject ComboWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_ComboWidget,
      qt_meta_data_ComboWidget, 0 }
};

const QMetaObject *ComboWidget::metaObject() const
{
    return &staticMetaObject;
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
        switch (_id) {
        case 0: { QString _r = text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: updateCombo(); break;
        case 3: updateComboVariableSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: updateComboVariableSafet(); break;
        case 5: updateComboAutofilterSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: updateComboAutofilterSafet(); break;
        case 7: updateComboRecursivefilterSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: updateComboRecursivefilterSafet(); break;
        case 9: updateComboListTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: updateComboListTable(); break;
        case 11: updateComboListLiteral(); break;
        case 12: updateVarGlobal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: updateComboFlow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: updateComboFlow(); break;
        case 15: updateComboConffileSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: updateComboConffileSafet(); break;
        case 17: updateComboColorSafet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: updateComboColorSafet(); break;
        case 19: viewdoc(); break;
        case 20: selColor(); break;
        case 21: insertAndClose(); break;
        case 22: { QString _r = getRealValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = getVarValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: itemsValueList(); break;
        case 25: itemsRealValueList(); break;
        case 26: { QComboBox* _r = combo();
            if (_a[0]) *reinterpret_cast< QComboBox**>(_a[0]) = _r; }  break;
        case 27: { QString _r = findkeyvalue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
