/****************************************************************************
** Meta object code from reading C++ file 'colorslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../colorslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorSlider_t {
    QByteArrayData data[6];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorSlider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorSlider_t qt_meta_stringdata_ColorSlider = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorSlider"
QT_MOC_LITERAL(1, 12, 17), // "startColorChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "endColorChanged"
QT_MOC_LITERAL(4, 47, 10), // "startColor"
QT_MOC_LITERAL(5, 58, 8) // "endColor"

    },
    "ColorSlider\0startColorChanged\0\0"
    "endColorChanged\0startColor\0endColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QColor, 0x00495103,
       5, QMetaType::QColor, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ColorSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorSlider *_t = static_cast<ColorSlider *>(_o);
        switch (_id) {
        case 0: _t->startColorChanged(); break;
        case 1: _t->endColorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColorSlider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorSlider::startColorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ColorSlider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorSlider::endColorChanged)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ColorSlider::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_ColorSlider.data,
      qt_meta_data_ColorSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorSlider.stringdata))
        return static_cast<void*>(const_cast< ColorSlider*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int ColorSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = startColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = endColor(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStartColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setStartColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColorSlider::startColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ColorSlider::endColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE