/****************************************************************************
** Meta object code from reading C++ file 'webview.h'
**
** Created: Fri Aug 2 00:23:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webview.h"
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
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      18,    8,    8,    8, 0x0a,
      28,    8,    8,    8, 0x0a,
      49,   40,    8,    8, 0x08,
      66,    8,    8,    8, 0x08,
      88,   81,    8,    8, 0x08,
     122,  114,    8,    8, 0x08,
     157,    8,    8,    8, 0x08,
     168,    8,    8,    8, 0x08,
     187,    8,    8,    8, 0x08,
     209,    8,    8,    8, 0x08,
     230,    8,    8,    8, 0x08,
     252,    8,    8,    8, 0x08,
     272,    8,    8,    8, 0x08,
     295,    8,    8,    8, 0x08,
     317,    8,    8,    8, 0x08,
     340,    8,    8,    8, 0x08,
     371,    8,    8,    8, 0x08,
     398,  386,    8,    8, 0x08,
     434,  421,    8,    8, 0x08,
     464,    8,    8,    8, 0x08,
     478,   40,    8,    8, 0x08,
     499,  496,    8,    8, 0x08,
     541,  518,    8,    8, 0x08,
     583,  578,    8,    8, 0x08,
     614,  609,    8,    8, 0x08,
     645,    8,    8,    8, 0x08,
     676,  668,    8,    8, 0x08,
     715,  668,    8,    8, 0x08,
     756,  668,    8,    8, 0x08,
     801,  795,    8,    8, 0x08,
     823,    8,    8,    8, 0x08,
     841,  837,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebView[] = {
    "WebView\0\0zoomIn()\0zoomOut()\0resetZoom()\0"
    "progress\0setProgress(int)\0loadFinished()\0"
    "string\0setStatusBarText(QString)\0"
    "request\0downloadRequested(QNetworkRequest)\0"
    "openLink()\0openLinkInNewTab()\0"
    "openLinkInNewWindow()\0downloadLinkToDisk()\0"
    "copyLinkToClipboard()\0openImageInNewTab()\0"
    "openImageInNewWindow()\0downloadImageToDisk()\0"
    "copyImageToClipboard()\0"
    "copyImageLocationToClipboard()\0"
    "bookmarkLink()\0uid,content\0"
    "setUrl(int,QByteArray)\0type,content\0"
    "slotWebAppMsg(int,QByteArray)\0"
    "loadStarted()\0loadProgress(int)\0ok\0"
    "loadFinished(bool)\0link,title,textContent\0"
    "linkHovered(QString,QString,QString)\0"
    "text\0statusBarMessage(QString)\0geom\0"
    "geometryChangeRequested(QRect)\0"
    "windowCloseRequested()\0visible\0"
    "toolBarVisibilityChangeRequested(bool)\0"
    "statusBarVisibilityChangeRequested(bool)\0"
    "menuBarVisibilityChangeRequested(bool)\0"
    "title\0titleChanged(QString)\0iconChanged()\0"
    "url\0urlChanged(QUrl)\0"
};

void WebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebView *_t = static_cast<WebView *>(_o);
        switch (_id) {
        case 0: _t->zoomIn(); break;
        case 1: _t->zoomOut(); break;
        case 2: _t->resetZoom(); break;
        case 3: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->loadFinished(); break;
        case 5: _t->setStatusBarText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->downloadRequested((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 7: _t->openLink(); break;
        case 8: _t->openLinkInNewTab(); break;
        case 9: _t->openLinkInNewWindow(); break;
        case 10: _t->downloadLinkToDisk(); break;
        case 11: _t->copyLinkToClipboard(); break;
        case 12: _t->openImageInNewTab(); break;
        case 13: _t->openImageInNewWindow(); break;
        case 14: _t->downloadImageToDisk(); break;
        case 15: _t->copyImageToClipboard(); break;
        case 16: _t->copyImageLocationToClipboard(); break;
        case 17: _t->bookmarkLink(); break;
        case 18: _t->setUrl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 19: _t->slotWebAppMsg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 20: _t->loadStarted(); break;
        case 21: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 24: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 26: _t->windowCloseRequested(); break;
        case 27: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->iconChanged(); break;
        case 32: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_WebView,
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
    return QWebView::qt_metacast(_clname);
}

int WebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
