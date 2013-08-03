/****************************************************************************
** Meta object code from reading C++ file 'tabwidget.h'
**
** Created: Sun Jul 28 19:46:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tabwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      33,   10,   10,   10, 0x05,
      47,   10,   10,   10, 0x05,
      63,   11,   10,   10, 0x05,
      96,   88,   10,   10, 0x05,
     131,  126,   10,   10, 0x05,
     161,  152,   10,   10, 0x05,
     188,  179,   10,   10, 0x05,
     227,  219,   10,   10, 0x05,
     266,  219,   10,   10, 0x05,
     307,  219,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     361,  346,   10,   10, 0x0a,
     407,  398,   10,   10, 0x2a,
     436,   11,   10,   10, 0x2a,
     450,   10,   10,   10, 0x0a,
     465,  459,   10,   10, 0x0a,
     479,   10,   10,   10, 0x2a,
     490,  459,   10,   10, 0x0a,
     504,   10,   10,   10, 0x2a,
     515,  459,   10,   10, 0x0a,
     535,  459,   10,   10, 0x0a,
     550,   10,   10,   10, 0x2a,
     562,   10,   10,   10, 0x0a,
     578,   10,   10,   10, 0x0a,
     588,   10,   10,   10, 0x0a,
     602,  459,   10,   10, 0x08,
     622,   10,   10,   10, 0x08,
     636,   10,   10,   10, 0x08,
     671,  664,   10,   10, 0x08,
     714,   10,   10,   10, 0x08,
     735,   10,   10,   10, 0x08,
     757,   10,   10,   10, 0x08,
     784,  778,   10,   10, 0x08,
     813,   11,   10,   10, 0x08,
     837,   10,   10,   10, 0x08,
     861,   10,   10,   10, 0x08,
     902,  884,   10,   10, 0x08,
     919,  179,   10,   10, 0x08,
     955,  219,   10,   10, 0x08,
     999,  219,   10,   10, 0x08,
    1045,  219,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabWidget[] = {
    "TabWidget\0\0url\0loadPage(QString)\0"
    "tabsChanged()\0lastTabClosed()\0"
    "setCurrentTitle(QString)\0message\0"
    "showStatusBarMessage(QString)\0link\0"
    "linkHovered(QString)\0progress\0"
    "loadProgress(int)\0geometry\0"
    "geometryChangeRequested(QRect)\0visible\0"
    "menuBarVisibilityChangeRequested(bool)\0"
    "statusBarVisibilityChangeRequested(bool)\0"
    "toolBarVisibilityChangeRequested(bool)\0"
    "url,type,title\0loadUrl(QUrl,TabWidget::Tab,QString)\0"
    "url,type\0loadUrl(QUrl,TabWidget::Tab)\0"
    "loadUrl(QUrl)\0newTab()\0index\0cloneTab(int)\0"
    "cloneTab()\0closeTab(int)\0closeTab()\0"
    "closeOtherTabs(int)\0reloadTab(int)\0"
    "reloadTab()\0reloadAllTabs()\0nextTab()\0"
    "previousTab()\0currentChanged(int)\0"
    "openLastTab()\0aboutToShowRecentTabsMenu()\0"
    "action\0aboutToShowRecentTriggeredAction(QAction*)\0"
    "webViewLoadStarted()\0webViewLoadFinished()\0"
    "webViewIconChanged()\0title\0"
    "webViewTitleChanged(QString)\0"
    "webViewUrlChanged(QUrl)\0lineEditReturnPressed()\0"
    "windowCloseRequested()\0fromIndex,toIndex\0"
    "moveTab(int,int)\0geometryChangeRequestedCheck(QRect)\0"
    "menuBarVisibilityChangeRequestedCheck(bool)\0"
    "statusBarVisibilityChangeRequestedCheck(bool)\0"
    "toolBarVisibilityChangeRequestedCheck(bool)\0"
};

void TabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabWidget *_t = static_cast<TabWidget *>(_o);
        switch (_id) {
        case 0: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tabsChanged(); break;
        case 2: _t->lastTabClosed(); break;
        case 3: _t->setCurrentTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->showStatusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 8: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2]))); break;
        case 13: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 14: _t->newTab(); break;
        case 15: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->cloneTab(); break;
        case 17: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->closeTab(); break;
        case 19: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->reloadTab(); break;
        case 22: _t->reloadAllTabs(); break;
        case 23: _t->nextTab(); break;
        case 24: _t->previousTab(); break;
        case 25: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->openLastTab(); break;
        case 27: _t->aboutToShowRecentTabsMenu(); break;
        case 28: _t->aboutToShowRecentTriggeredAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 29: _t->webViewLoadStarted(); break;
        case 30: _t->webViewLoadFinished(); break;
        case 31: _t->webViewIconChanged(); break;
        case 32: _t->webViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->webViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 34: _t->lineEditReturnPressed(); break;
        case 35: _t->windowCloseRequested(); break;
        case 36: _t->moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->geometryChangeRequestedCheck((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 38: _t->menuBarVisibilityChangeRequestedCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->statusBarVisibilityChangeRequestedCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->toolBarVisibilityChangeRequestedCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_TabWidget,
      qt_meta_data_TabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabWidget))
        return static_cast<void*>(const_cast< TabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int TabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void TabWidget::loadPage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabWidget::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void TabWidget::lastTabClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void TabWidget::setCurrentTitle(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TabWidget::showStatusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabWidget::linkHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TabWidget::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TabWidget::geometryChangeRequested(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TabWidget::menuBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TabWidget::statusBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TabWidget::toolBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
