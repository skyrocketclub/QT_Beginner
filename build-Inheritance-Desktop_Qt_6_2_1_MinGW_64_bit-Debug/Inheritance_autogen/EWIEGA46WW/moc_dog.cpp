/****************************************************************************
** Meta object code from reading C++ file 'dog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Inheritance/dog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dog_t {
    const uint offsetsAndSize[2];
    char stringdata0[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dog_t qt_meta_stringdata_Dog = {
    {
QT_MOC_LITERAL(0, 3) // "Dog"

    },
    "Dog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Dog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject Dog::staticMetaObject = { {
    QMetaObject::SuperData::link<Mammal::staticMetaObject>(),
    qt_meta_stringdata_Dog.offsetsAndSize,
    qt_meta_data_Dog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dog_t
, QtPrivate::TypeAndForceComplete<Dog, std::true_type>



>,
    nullptr
} };


const QMetaObject *Dog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dog.stringdata0))
        return static_cast<void*>(this);
    return Mammal::qt_metacast(_clname);
}

int Dog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mammal::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
