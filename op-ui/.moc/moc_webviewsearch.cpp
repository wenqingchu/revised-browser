/****************************************************************************
** Meta object code from reading C++ file 'webviewsearch.h'
**
** Created: Sun Jul 28 19:46:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../webviewsearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webviewsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebViewSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,
      37,   14,   14,   14, 0x0a,
      48,   14,   14,   14, 0x0a,
      59,   14,   14,   14, 0x0a,
      80,   74,   14,   14, 0x08,
     104,   98,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebViewSearch[] = {
    "WebViewSearch\0\0animateHide()\0clear()\0"
    "showFind()\0findNext()\0findPrevious()\0"
    "frame\0frameChanged(int)\0flags\0"
    "find(WebView::FindFlags)\0"
};

void WebViewSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebViewSearch *_t = static_cast<WebViewSearch *>(_o);
        switch (_id) {
        case 0: _t->animateHide(); break;
        case 1: _t->clear(); break;
        case 2: _t->showFind(); break;
        case 3: _t->findNext(); break;
        case 4: _t->findPrevious(); break;
        case 5: _t->frameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->find((*reinterpret_cast< WebView::FindFlags(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebViewSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebViewSearch::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WebViewSearch,
      qt_meta_data_WebViewSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebViewSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebViewSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebViewSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebViewSearch))
        return static_cast<void*>(const_cast< WebViewSearch*>(this));
    return QWidget::qt_metacast(_clname);
}

int WebViewSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_WebViewWithSearch[] = {

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

static const char qt_meta_stringdata_WebViewWithSearch[] = {
    "WebViewWithSearch\0"
};

void WebViewWithSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebViewWithSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebViewWithSearch::staticMetaObject = {
    { &WebView::staticMetaObject, qt_meta_stringdata_WebViewWithSearch,
      qt_meta_data_WebViewWithSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebViewWithSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebViewWithSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebViewWithSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebViewWithSearch))
        return static_cast<void*>(const_cast< WebViewWithSearch*>(this));
    return WebView::qt_metacast(_clname);
}

int WebViewWithSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
