/****************************************************************************
** Meta object code from reading C++ file 'graphicimageeffectelementpropertydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicimageeffectelementpropertydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicimageeffectelementpropertydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphicImageEffectElementPropertyDialog_t {
    QByteArrayData data[4];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicImageEffectElementPropertyDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicImageEffectElementPropertyDialog_t qt_meta_stringdata_GraphicImageEffectElementPropertyDialog = {
    {
QT_MOC_LITERAL(0, 0, 39), // "GraphicImageEffectElementProp..."
QT_MOC_LITERAL(1, 40, 30), // "on_lwEffects_currentRowChanged"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 10) // "currentRow"

    },
    "GraphicImageEffectElementPropertyDialog\0"
    "on_lwEffects_currentRowChanged\0\0"
    "currentRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicImageEffectElementPropertyDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void GraphicImageEffectElementPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicImageEffectElementPropertyDialog *_t = static_cast<GraphicImageEffectElementPropertyDialog *>(_o);
        switch (_id) {
        case 0: _t->on_lwEffects_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GraphicImageEffectElementPropertyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GraphicImageEffectElementPropertyDialog.data,
      qt_meta_data_GraphicImageEffectElementPropertyDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicImageEffectElementPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicImageEffectElementPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicImageEffectElementPropertyDialog.stringdata))
        return static_cast<void*>(const_cast< GraphicImageEffectElementPropertyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GraphicImageEffectElementPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE