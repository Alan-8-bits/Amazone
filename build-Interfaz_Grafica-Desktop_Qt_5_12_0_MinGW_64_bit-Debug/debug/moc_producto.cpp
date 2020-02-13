/****************************************************************************
** Meta object code from reading C++ file 'producto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Interfaz_Grafica/producto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'producto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Producto_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Producto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Producto_t qt_meta_stringdata_Producto = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Producto"
QT_MOC_LITERAL(1, 9, 5), // "getId"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "setId"
QT_MOC_LITERAL(4, 22, 5), // "value"
QT_MOC_LITERAL(5, 28, 9), // "getNombre"
QT_MOC_LITERAL(6, 38, 9), // "setNombre"
QT_MOC_LITERAL(7, 48, 9), // "getPrecio"
QT_MOC_LITERAL(8, 58, 9), // "setPrecio"
QT_MOC_LITERAL(9, 68, 12), // "getComprados"
QT_MOC_LITERAL(10, 81, 12) // "setComprados"

    },
    "Producto\0getId\0\0setId\0value\0getNombre\0"
    "setNombre\0getPrecio\0setPrecio\0"
    "getComprados\0setComprados"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Producto[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void Producto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Producto *_t = static_cast<Producto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->getNombre();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setNombre((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { double _r = _t->getPrecio();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setPrecio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: { int _r = _t->getComprados();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setComprados((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Producto::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Producto.data,
    qt_meta_data_Producto,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Producto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Producto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Producto.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Producto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
