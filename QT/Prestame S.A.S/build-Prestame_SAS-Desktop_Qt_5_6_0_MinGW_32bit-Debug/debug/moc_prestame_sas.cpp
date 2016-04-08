/****************************************************************************
** Meta object code from reading C++ file 'prestame_sas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Prestame_SAS/prestame_sas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prestame_sas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Prestame_SAS_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prestame_SAS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prestame_SAS_t qt_meta_stringdata_Prestame_SAS = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Prestame_SAS"
QT_MOC_LITERAL(1, 13, 38), // "on_pushButton_1IngresarUsuari..."
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "Prestame_SAS\0on_pushButton_1IngresarUsuario_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prestame_SAS[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Prestame_SAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prestame_SAS *_t = static_cast<Prestame_SAS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_1IngresarUsuario_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Prestame_SAS::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Prestame_SAS.data,
      qt_meta_data_Prestame_SAS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Prestame_SAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prestame_SAS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Prestame_SAS.stringdata0))
        return static_cast<void*>(const_cast< Prestame_SAS*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Prestame_SAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
