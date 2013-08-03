/****************************************************************************
** Meta object code from reading C++ file 'browsermainwindow.h'
**
** Created: Sun Jul 28 19:45:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../browsermainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browsermainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BrowserMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   19,   18,   18, 0x0a,
      41,   18,   18,   18, 0x0a,
      52,   18,   18,   18, 0x08,
      59,   18,   18,   18, 0x08,
      88,   81,   18,   18, 0x08,
     123,  117,   18,   18, 0x08,
     154,   18,   18,   18, 0x28,
     178,   18,   18,   18, 0x08,
     196,   18,   18,   18, 0x08,
     210,   18,   18,   18, 0x08,
     225,   18,   18,   18, 0x08,
     248,   18,   18,   18, 0x08,
     264,   18,   18,   18, 0x08,
     286,   18,   18,   18, 0x08,
     303,   18,   18,   18, 0x08,
     318,   18,   18,   18, 0x08,
     337,   18,   18,   18, 0x08,
     360,   18,   18,   18, 0x08,
     386,   18,   18,   18, 0x08,
     404,   18,   18,   18, 0x08,
     425,   18,   18,   18, 0x08,
     446,   18,   18,   18, 0x08,
     468,   18,   18,   18, 0x08,
     486,   18,   18,   18, 0x08,
     509,   18,   18,   18, 0x08,
     529,   18,   18,   18, 0x08,
     557,  550,   18,   18, 0x08,
     582,   18,   18,   18, 0x08,
     598,   18,   18,   18, 0x08,
     621,   18,   18,   18, 0x08,
     636,  550,   18,   18, 0x08,
     662,   18,   18,   18, 0x08,
     685,   18,   18,   18, 0x08,
     707,   18,   18,   18, 0x08,
     728,   18,   18,   18, 0x08,
     754,   18,   18,   18, 0x08,
     783,   18,   18,   18, 0x08,
     818,  811,   18,   18, 0x08,
     846,   18,   18,   18, 0x08,
     863,   18,   18,   18, 0x08,
     884,  879,   18,   18, 0x08,
     918,  909,   18,   18, 0x08,
     957,  949,   18,   18, 0x08,
     987,  949,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BrowserMainWindow[] = {
    "BrowserMainWindow\0\0url\0loadPage(QString)\0"
    "slotHome()\0save()\0slotLoadProgress(int)\0"
    "string\0slotUpdateStatusbar(QString)\0"
    "title\0slotUpdateWindowTitle(QString)\0"
    "slotUpdateWindowTitle()\0slotPreferences()\0"
    "slotFileNew()\0slotFileOpen()\0"
    "slotFilePrintPreview()\0slotFilePrint()\0"
    "slotPrivateBrowsing()\0slotFileSaveAs()\0"
    "slotEditFind()\0slotEditFindNext()\0"
    "slotEditFindPrevious()\0slotShowBookmarksDialog()\0"
    "slotAddBookmark()\0slotViewTextBigger()\0"
    "slotViewTextNormal()\0slotViewTextSmaller()\0"
    "slotViewToolbar()\0slotViewBookmarksBar()\0"
    "slotViewStatusbar()\0slotViewPageSource()\0"
    "enable\0slotViewFullScreen(bool)\0"
    "slotWebSearch()\0slotClearPrivateData()\0"
    "slotSnapShot()\0slotToggleInspector(bool)\0"
    "slotAboutApplication()\0slotDownloadManager()\0"
    "slotSelectLineEdit()\0slotAboutToShowBackMenu()\0"
    "slotAboutToShowForwardMenu()\0"
    "slotAboutToShowWindowMenu()\0action\0"
    "slotOpenActionUrl(QAction*)\0"
    "slotShowWindow()\0slotSwapFocus()\0view\0"
    "printRequested(WebView*)\0geometry\0"
    "geometryChangeRequested(QRect)\0visible\0"
    "updateToolbarActionText(bool)\0"
    "updateBookmarksToolbarActionText(bool)\0"
};

void BrowserMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BrowserMainWindow *_t = static_cast<BrowserMainWindow *>(_o);
        switch (_id) {
        case 0: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotHome(); break;
        case 2: _t->save(); break;
        case 3: _t->slotLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotUpdateStatusbar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotUpdateWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotUpdateWindowTitle(); break;
        case 7: _t->slotPreferences(); break;
        case 8: _t->slotFileNew(); break;
        case 9: _t->slotFileOpen(); break;
        case 10: _t->slotFilePrintPreview(); break;
        case 11: _t->slotFilePrint(); break;
        case 12: _t->slotPrivateBrowsing(); break;
        case 13: _t->slotFileSaveAs(); break;
        case 14: _t->slotEditFind(); break;
        case 15: _t->slotEditFindNext(); break;
        case 16: _t->slotEditFindPrevious(); break;
        case 17: _t->slotShowBookmarksDialog(); break;
        case 18: _t->slotAddBookmark(); break;
        case 19: _t->slotViewTextBigger(); break;
        case 20: _t->slotViewTextNormal(); break;
        case 21: _t->slotViewTextSmaller(); break;
        case 22: _t->slotViewToolbar(); break;
        case 23: _t->slotViewBookmarksBar(); break;
        case 24: _t->slotViewStatusbar(); break;
        case 25: _t->slotViewPageSource(); break;
        case 26: _t->slotViewFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->slotWebSearch(); break;
        case 28: _t->slotClearPrivateData(); break;
        case 29: _t->slotSnapShot(); break;
        case 30: _t->slotToggleInspector((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->slotAboutApplication(); break;
        case 32: _t->slotDownloadManager(); break;
        case 33: _t->slotSelectLineEdit(); break;
        case 34: _t->slotAboutToShowBackMenu(); break;
        case 35: _t->slotAboutToShowForwardMenu(); break;
        case 36: _t->slotAboutToShowWindowMenu(); break;
        case 37: _t->slotOpenActionUrl((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 38: _t->slotShowWindow(); break;
        case 39: _t->slotSwapFocus(); break;
        case 40: _t->printRequested((*reinterpret_cast< WebView*(*)>(_a[1]))); break;
        case 41: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 42: _t->updateToolbarActionText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->updateBookmarksToolbarActionText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BrowserMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BrowserMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BrowserMainWindow,
      qt_meta_data_BrowserMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrowserMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrowserMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrowserMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserMainWindow))
        return static_cast<void*>(const_cast< BrowserMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BrowserMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
