/****************************************************************************
** Meta object code from reading C++ file 'googlesuggest.h'
**
** Created: Thu Feb 7 11:41:03 2013
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inflow/googlesuggest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googlesuggest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GSuggestCompletion[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      37,   19,   19,   19, 0x0a,
      54,   19,   19,   19, 0x0a,
      81,   68,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GSuggestCompletion[] = {
    "GSuggestCompletion\0\0doneCompletion()\0"
    "preventSuggest()\0autoSuggest()\0"
    "networkReply\0handleNetworkData(QNetworkReply*)\0"
};

const QMetaObject GSuggestCompletion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GSuggestCompletion,
      qt_meta_data_GSuggestCompletion, 0 }
};

const QMetaObject *GSuggestCompletion::metaObject() const
{
    return &staticMetaObject;
}

void *GSuggestCompletion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GSuggestCompletion))
        return static_cast<void*>(const_cast< GSuggestCompletion*>(this));
    return QObject::qt_metacast(_clname);
}

int GSuggestCompletion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doneCompletion(); break;
        case 1: preventSuggest(); break;
        case 2: autoSuggest(); break;
        case 3: handleNetworkData((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
