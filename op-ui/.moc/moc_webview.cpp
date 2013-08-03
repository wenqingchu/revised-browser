/****************************************************************************
** Meta object code from reading C++ file 'webview.h'
**
** Created: Sun Jul 28 19:46:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../webview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      32,   23,    8,    8, 0x05,
      53,   50,    8,    8, 0x05,
      95,   72,    8,    8, 0x05,
     137,  132,    8,    8, 0x05,
     168,  163,    8,    8, 0x05,
     199,    8,    8,    8, 0x05,
     230,  222,    8,    8, 0x05,
     269,  222,    8,    8, 0x05,
     310,  222,    8,    8, 0x05,
     355,  349,    8,    8, 0x05,
     377,    8,    8,    8, 0x05,
     395,  391,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     412,    8,    8,    8, 0x09,
     431,    8,    8,    8, 0x09,
     453,    8,    8,    8, 0x09,
     475,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_WebView[] = {
    "WebView\0\0loadStarted()\0progress\0"
    "loadProgress(int)\0ok\0loadFinished(bool)\0"
    "link,title,textContent\0"
    "linkHovered(QString,QString,QString)\0"
    "text\0statusBarMessage(QString)\0geom\0"
    "geometryChangeRequested(QRect)\0"
    "windowCloseRequested()\0visible\0"
    "toolBarVisibilityChangeRequested(bool)\0"
    "statusBarVisibilityChangeRequested(bool)\0"
    "menuBarVisibilityChangeRequested(bool)\0"
    "title\0titleChanged(QString)\0iconChanged()\0"
    "url\0urlChanged(QUrl)\0slotClientClosed()\0"
    "slotClientIsEmbeded()\0actionTriggered(bool)\0"
    "reEmbedClient()\0"
};

void WebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebView *_t = static_cast<WebView *>(_o);
        switch (_id) {
        case 0: _t->loadStarted(); break;
        case 1: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 6: _t->windowCloseRequested(); break;
        case 7: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->iconChanged(); break;
        case 12: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 13: _t->slotClientClosed(); break;
        case 14: _t->slotClientIsEmbeded(); break;
        case 15: _t->actionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->reEmbedClient(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebView::staticMetaObject = {
    { &QX11EmbedContainer::staticMetaObject, qt_meta_stringdata_WebView,
      qt_meta_data_WebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebView))
        return static_cast<void*>(const_cast< WebView*>(this));
    return QX11EmbedContainer::qt_metacast(_clname);
}

int WebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QX11EmbedContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void WebView::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WebView::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebView::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebView::linkHovered(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WebView::statusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WebView::geometryChangeRequested(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WebView::windowCloseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void WebView::toolBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WebView::statusBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WebView::menuBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WebView::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WebView::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void WebView::urlChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
