/****************************************************************************
** Meta object code from reading C++ file 'browserapplication.h'
**
** Created: Sun Jul 28 19:45:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../browserapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BrowserApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   19,   20,   19, 0x0a,
      60,   19,   55,   19, 0x0a,
      81,   19,   19,   19, 0x08,
      98,   94,   19,   19, 0x08,
     119,  112,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BrowserApplication[] = {
    "BrowserApplication\0\0BrowserMainWindow*\0"
    "newMainWindow()\0bool\0restoreLastSession()\0"
    "postLaunch()\0url\0openUrl(QUrl)\0socket\0"
    "dispatch(int)\0"
};

void BrowserApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BrowserApplication *_t = static_cast<BrowserApplication *>(_o);
        switch (_id) {
        case 0: { BrowserMainWindow* _r = _t->newMainWindow();
            if (_a[0]) *reinterpret_cast< BrowserMainWindow**>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->restoreLastSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->postLaunch(); break;
        case 3: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->dispatch((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BrowserApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BrowserApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_BrowserApplication,
      qt_meta_data_BrowserApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrowserApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrowserApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrowserApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserApplication))
        return static_cast<void*>(const_cast< BrowserApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int BrowserApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
