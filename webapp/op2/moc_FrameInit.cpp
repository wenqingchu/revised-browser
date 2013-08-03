/****************************************************************************
** Meta object code from reading C++ file 'FrameInit.h'
**
** Created: Fri Aug 2 00:24:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FrameInit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameInit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrameInit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x08,
      38,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FrameInit[] = {
    "FrameInit\0\0url\0handleUrlChanged(QUrl)\0"
    "handleFrameLayoutComplete()\0"
};

void FrameInit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FrameInit *_t = static_cast<FrameInit *>(_o);
        switch (_id) {
        case 0: _t->handleUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->handleFrameLayoutComplete(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FrameInit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FrameInit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FrameInit,
      qt_meta_data_FrameInit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrameInit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrameInit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrameInit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrameInit))
        return static_cast<void*>(const_cast< FrameInit*>(this));
    return QObject::qt_metacast(_clname);
}

int FrameInit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
