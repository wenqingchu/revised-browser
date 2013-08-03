/****************************************************************************
** Meta object code from reading C++ file 'tabbar.h'
**
** Created: Sun Jul 28 19:46:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tabbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      23,   17,    7,    7, 0x05,
      37,   17,    7,    7, 0x05,
      51,   17,    7,    7, 0x05,
      71,   17,    7,    7, 0x05,
      86,    7,    7,    7, 0x05,
     111,  102,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     140,    7,    7,    7, 0x08,
     158,    7,    7,    7, 0x08,
     169,    7,    7,    7, 0x08,
     180,    7,    7,    7, 0x08,
     197,    7,    7,    7, 0x08,
     218,  209,    7,    7, 0x08,
     247,    7,    7,    7, 0x08,
     273,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabBar[] = {
    "TabBar\0\0newTab()\0index\0cloneTab(int)\0"
    "closeTab(int)\0closeOtherTabs(int)\0"
    "reloadTab(int)\0reloadAllTabs()\0url,type\0"
    "loadUrl(QUrl,TabWidget::Tab)\0"
    "selectTabAction()\0cloneTab()\0closeTab()\0"
    "closeOtherTabs()\0reloadTab()\0position\0"
    "contextMenuRequested(QPoint)\0"
    "updateViewToolBarAction()\0viewTabBar()\0"
};

void TabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabBar *_t = static_cast<TabBar *>(_o);
        switch (_id) {
        case 0: _t->newTab(); break;
        case 1: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->reloadAllTabs(); break;
        case 6: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2]))); break;
        case 7: _t->selectTabAction(); break;
        case 8: _t->cloneTab(); break;
        case 9: _t->closeTab(); break;
        case 10: _t->closeOtherTabs(); break;
        case 11: _t->reloadTab(); break;
        case 12: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->updateViewToolBarAction(); break;
        case 14: _t->viewTabBar(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_TabBar,
      qt_meta_data_TabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabBar))
        return static_cast<void*>(const_cast< TabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int TabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void TabBar::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TabBar::cloneTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabBar::closeTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabBar::closeOtherTabs(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TabBar::reloadTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabBar::reloadAllTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void TabBar::loadUrl(const QUrl & _t1, TabWidget::Tab _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_TabShortcut[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_TabShortcut[] = {
    "TabShortcut\0"
};

void TabShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TabShortcut::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabShortcut::staticMetaObject = {
    { &QShortcut::staticMetaObject, qt_meta_stringdata_TabShortcut,
      qt_meta_data_TabShortcut, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabShortcut::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabShortcut))
        return static_cast<void*>(const_cast< TabShortcut*>(this));
    return QShortcut::qt_metacast(_clname);
}

int TabShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QShortcut::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
