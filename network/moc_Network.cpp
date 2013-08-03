/****************************************************************************
** Meta object code from reading C++ file 'Network.h'
**
** Created: Sun Jul 28 19:47:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Network.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      25,   15,   15,   15, 0x08,
      48,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetworkRequest[] = {
    "NetworkRequest\0\0finish()\0"
    "sendMetaDataIfNeeded()\0forwardData()\0"
};

void NetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkRequest *_t = static_cast<NetworkRequest *>(_o);
        switch (_id) {
        case 0: _t->finish(); break;
        case 1: _t->sendMetaDataIfNeeded(); break;
        case 2: _t->forwardData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NetworkRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkRequest,
      qt_meta_data_NetworkRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkRequest))
        return static_cast<void*>(const_cast< NetworkRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int NetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
