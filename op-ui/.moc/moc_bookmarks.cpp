/****************************************************************************
** Meta object code from reading C++ file 'bookmarks.h'
**
** Created: Sun Jul 28 19:45:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bookmarks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarksManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x05,
      65,   49,   17,   17, 0x05,
     111,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     139,   17,   17,   17, 0x0a,
     157,   17,   17,   17, 0x0a,
     175,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarksManager[] = {
    "BookmarksManager\0\0item\0entryAdded(BookmarkNode*)\0"
    "parent,row,item\0"
    "entryRemoved(BookmarkNode*,int,BookmarkNode*)\0"
    "entryChanged(BookmarkNode*)\0"
    "importBookmarks()\0exportBookmarks()\0"
    "save()\0"
};

void BookmarksManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarksManager *_t = static_cast<BookmarksManager *>(_o);
        switch (_id) {
        case 0: _t->entryAdded((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        case 1: _t->entryRemoved((*reinterpret_cast< BookmarkNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< BookmarkNode*(*)>(_a[3]))); break;
        case 2: _t->entryChanged((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        case 3: _t->importBookmarks(); break;
        case 4: _t->exportBookmarks(); break;
        case 5: _t->save(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarksManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarksManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarksManager,
      qt_meta_data_BookmarksManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarksManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarksManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarksManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksManager))
        return static_cast<void*>(const_cast< BookmarksManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BookmarksManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BookmarksManager::entryAdded(BookmarkNode * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BookmarksManager::entryRemoved(BookmarkNode * _t1, int _t2, BookmarkNode * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarksManager::entryChanged(BookmarkNode * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_BookmarksModel[] = {

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
      21,   16,   15,   15, 0x0a,
      63,   47,   15,   15, 0x0a,
     109,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BookmarksModel[] = {
    "BookmarksModel\0\0item\0entryAdded(BookmarkNode*)\0"
    "parent,row,item\0"
    "entryRemoved(BookmarkNode*,int,BookmarkNode*)\0"
    "entryChanged(BookmarkNode*)\0"
};

void BookmarksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarksModel *_t = static_cast<BookmarksModel *>(_o);
        switch (_id) {
        case 0: _t->entryAdded((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        case 1: _t->entryRemoved((*reinterpret_cast< BookmarkNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< BookmarkNode*(*)>(_a[3]))); break;
        case 2: _t->entryChanged((*reinterpret_cast< BookmarkNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarksModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarksModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_BookmarksModel,
      qt_meta_data_BookmarksModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarksModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksModel))
        return static_cast<void*>(const_cast< BookmarksModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int BookmarksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_BookmarksMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   67,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarksMenu[] = {
    "BookmarksMenu\0\0url,type,title\0"
    "openUrl(QUrl,TabWidget::Tab,QString)\0"
    "index\0activated(QModelIndex)\0"
};

void BookmarksMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarksMenu *_t = static_cast<BookmarksMenu *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarksMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarksMenu::staticMetaObject = {
    { &ModelMenu::staticMetaObject, qt_meta_stringdata_BookmarksMenu,
      qt_meta_data_BookmarksMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarksMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarksMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarksMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksMenu))
        return static_cast<void*>(const_cast< BookmarksMenu*>(this));
    return ModelMenu::qt_metacast(_clname);
}

int BookmarksMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BookmarksMenu::openUrl(const QUrl & _t1, TabWidget::Tab _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_AddBookmarkProxyModel[] = {

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

static const char qt_meta_stringdata_AddBookmarkProxyModel[] = {
    "AddBookmarkProxyModel\0"
};

void AddBookmarkProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddBookmarkProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddBookmarkProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_AddBookmarkProxyModel,
      qt_meta_data_AddBookmarkProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddBookmarkProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddBookmarkProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddBookmarkProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddBookmarkProxyModel))
        return static_cast<void*>(const_cast< AddBookmarkProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AddBookmarkProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AddBookmarkDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddBookmarkDialog[] = {
    "AddBookmarkDialog\0\0accept()\0"
};

void AddBookmarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddBookmarkDialog *_t = static_cast<AddBookmarkDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddBookmarkDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddBookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddBookmarkDialog,
      qt_meta_data_AddBookmarkDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddBookmarkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddBookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddBookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddBookmarkDialog))
        return static_cast<void*>(const_cast< AddBookmarkDialog*>(this));
    if (!strcmp(_clname, "Ui_AddBookmarkDialog"))
        return static_cast< Ui_AddBookmarkDialog*>(const_cast< AddBookmarkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddBookmarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_BookmarksDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   65,   16,   16, 0x08,
     108,  104,   16,   16, 0x08,
     129,   16,   16,   16, 0x08,
     144,   16,   16,   16, 0x08,
     163,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarksDialog[] = {
    "BookmarksDialog\0\0url,,title\0"
    "openUrl(QUrl,TabWidget::Tab,QString)\0"
    "pos\0customContextMenuRequested(QPoint)\0"
    "tab\0open(TabWidget::Tab)\0openInNewTab()\0"
    "openInCurrentTab()\0newFolder()\0"
};

void BookmarksDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarksDialog *_t = static_cast<BookmarksDialog *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->open((*reinterpret_cast< TabWidget::Tab(*)>(_a[1]))); break;
        case 3: _t->openInNewTab(); break;
        case 4: _t->openInCurrentTab(); break;
        case 5: _t->newFolder(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarksDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarksDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BookmarksDialog,
      qt_meta_data_BookmarksDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarksDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksDialog))
        return static_cast<void*>(const_cast< BookmarksDialog*>(this));
    if (!strcmp(_clname, "Ui_BookmarksDialog"))
        return static_cast< Ui_BookmarksDialog*>(const_cast< BookmarksDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BookmarksDialog::openUrl(const QUrl & _t1, TabWidget::Tab _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_BookmarkToolButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   20,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkToolButton[] = {
    "BookmarkToolButton\0\0url,tab,title\0"
    "openBookmark(QUrl,TabWidget::Tab,QString)\0"
};

void BookmarkToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkToolButton *_t = static_cast<BookmarkToolButton *>(_o);
        switch (_id) {
        case 0: _t->openBookmark((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_BookmarkToolButton,
      qt_meta_data_BookmarkToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkToolButton))
        return static_cast<void*>(const_cast< BookmarkToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int BookmarkToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void BookmarkToolButton::openBookmark(const QUrl & _t1, TabWidget::Tab _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_BookmarksToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BookmarksToolBar[] = {
    "BookmarksToolBar\0\0url,tab,title\0"
    "openUrl(QUrl,TabWidget::Tab,QString)\0"
    "build()\0"
};

void BookmarksToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarksToolBar *_t = static_cast<BookmarksToolBar *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< TabWidget::Tab(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->build(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarksToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarksToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_BookmarksToolBar,
      qt_meta_data_BookmarksToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarksToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarksToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarksToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksToolBar))
        return static_cast<void*>(const_cast< BookmarksToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int BookmarksToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BookmarksToolBar::openUrl(const QUrl & _t1, TabWidget::Tab _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
