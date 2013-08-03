/****************************************************************************
** Meta object code from reading C++ file 'OpNetwork.h'
**
** Created: Fri Aug 2 00:23:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OpNetwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OpNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OPNET__OpNetwork[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   18,   17,   17, 0x05,
      68,   55,   17,   17, 0x05,
      94,   55,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     124,  121,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OPNET__OpNetwork[] = {
    "OPNET::OpNetwork\0\0winId,content\0"
    "newUrl(int,QByteArray)\0type,content\0"
    "webAppMsg(int,QByteArray)\0"
    "userAction(int,QByteArray)\0fd\0"
    "activated(int)\0"
};

void OPNET::OpNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpNetwork *_t = static_cast<OpNetwork *>(_o);
        switch (_id) {
        case 0: _t->newUrl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->webAppMsg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->userAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OPNET::OpNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OPNET::OpNetwork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OPNET__OpNetwork,
      qt_meta_data_OPNET__OpNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OPNET::OpNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OPNET::OpNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OPNET::OpNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OPNET__OpNetwork))
        return static_cast<void*>(const_cast< OpNetwork*>(this));
    return QObject::qt_metacast(_clname);
}

int OPNET::OpNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OPNET::OpNetwork::newUrl(int _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OPNET::OpNetwork::webAppMsg(int _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OPNET::OpNetwork::userAction(int _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
