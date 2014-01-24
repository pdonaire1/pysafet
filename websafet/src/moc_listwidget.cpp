/****************************************************************************
** Meta object code from reading C++ file 'listwidget.h'
**
** Created: Thu Feb 7 11:41:06 2013
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/listwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ListWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   11,   12,   11, 0x0a,
      35,   27,   11,   11, 0x0a,
      52,   11,   11,   11, 0x0a,
      75,   66,   11,   11, 0x0a,
     106,   11,   11,   11, 0x2a,
     133,   66,   11,   11, 0x0a,
     166,   11,   11,   11, 0x2a,
     195,   66,   11,   11, 0x0a,
     233,   11,   11,   11, 0x2a,
     267,   66,   11,   11, 0x0a,
     294,   11,   11,   11, 0x2a,
     317,   11,   11,   11, 0x0a,
     348,  342,   11,   11, 0x0a,
     373,   66,   11,   11, 0x0a,
     395,   11,   11,   11, 0x2a,
     413,   66,   11,   11, 0x0a,
     444,   11,   11,   11, 0x2a,
     471,   11,   11,   11, 0x0a,
     481,   11,   11,   11, 0x0a,
     500,  498,   12,   11, 0x0a,
     522,  498,   12,   11, 0x0a,
     543,   11,   11,   11, 0x0a,
     560,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ListWidget[] = {
    "ListWidget\0\0QString\0text()\0newText\0"
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
    "updateComboConffileSafet()\0viewdoc()\0"
    "insertAndClose()\0s\0getRealValue(QString)\0"
    "getVarValue(QString)\0itemsValueList()\0"
    "itemsRealValueList()\0"
};

const QMetaObject ListWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_ListWidget,
      qt_meta_data_ListWidget, 0 }
};

const QMetaObject *ListWidget::metaObject() const
{
    return &staticMetaObject;
}

void *ListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListWidget))
        return static_cast<void*>(const_cast< ListWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int ListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 17: viewdoc(); break;
        case 18: insertAndClose(); break;
        case 19: { QString _r = getRealValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QString _r = getVarValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: itemsValueList(); break;
        case 22: itemsRealValueList(); break;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
