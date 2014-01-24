/****************************************************************************
** Meta object code from reading C++ file 'texteditwidget.h'
**
** Created: Tue Apr 10 10:54:30 2012
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inflow/texteditwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texteditwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextEditWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x0a,
      41,   15,   15,   15, 0x0a,
      51,   15,   15,   15, 0x0a,
      63,   15,   15,   15, 0x0a,
      74,   15,   15,   15, 0x0a,
      98,   91,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextEditWidget[] = {
    "TextEditWidget\0\0newText\0setText(QString)\0"
    "setBold()\0setItalic()\0setUnder()\0"
    "insertAndClose()\0format\0"
    "currentCharFormatChanged(QTextCharFormat)\0"
};

const QMetaObject TextEditWidget::staticMetaObject = {
    { &CmdWidget::staticMetaObject, qt_meta_stringdata_TextEditWidget,
      qt_meta_data_TextEditWidget, 0 }
};

const QMetaObject *TextEditWidget::metaObject() const
{
    return &staticMetaObject;
}

void *TextEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEditWidget))
        return static_cast<void*>(const_cast< TextEditWidget*>(this));
    return CmdWidget::qt_metacast(_clname);
}

int TextEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CmdWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: setBold(); break;
        case 2: setItalic(); break;
        case 3: setUnder(); break;
        case 4: insertAndClose(); break;
        case 5: currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
