/****************************************************************************
** Meta object code from reading C++ file 'entrydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../entrydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'entrydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EntryDialog_t {
    QByteArrayData data[8];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntryDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntryDialog_t qt_meta_stringdata_EntryDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EntryDialog"
QT_MOC_LITERAL(1, 12, 13), // "updateEndDate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "startDate"
QT_MOC_LITERAL(4, 37, 14), // "disableEditing"
QT_MOC_LITERAL(5, 52, 7), // "disable"
QT_MOC_LITERAL(6, 60, 11), // "typeChanged"
QT_MOC_LITERAL(7, 72, 5) // "index"

    },
    "EntryDialog\0updateEndDate\0\0startDate\0"
    "disableEditing\0disable\0typeChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntryDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void EntryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntryDialog *_t = static_cast<EntryDialog *>(_o);
        switch (_id) {
        case 0: _t->updateEndDate((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->disableEditing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EntryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EntryDialog.data,
      qt_meta_data_EntryDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EntryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EntryDialog.stringdata))
        return static_cast<void*>(const_cast< EntryDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EntryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE