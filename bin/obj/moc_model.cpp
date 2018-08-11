/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/modules/connections-tree/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QWeakPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionsTree__Model_t {
    QByteArrayData data[26];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionsTree__Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionsTree__Model_t qt_meta_stringdata_ConnectionsTree__Model = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ConnectionsTree::Model"
QT_MOC_LITERAL(1, 23, 6), // "expand"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 5), // "error"
QT_MOC_LITERAL(6, 55, 3), // "err"
QT_MOC_LITERAL(7, 59, 11), // "itemChanged"
QT_MOC_LITERAL(8, 71, 22), // "QWeakPointer<TreeItem>"
QT_MOC_LITERAL(9, 94, 4), // "item"
QT_MOC_LITERAL(10, 99, 16), // "itemChildsLoaded"
QT_MOC_LITERAL(11, 116, 18), // "itemChildsUnloaded"
QT_MOC_LITERAL(12, 135, 10), // "expandItem"
QT_MOC_LITERAL(13, 146, 13), // "onItemChanged"
QT_MOC_LITERAL(14, 160, 18), // "onItemChildsLoaded"
QT_MOC_LITERAL(15, 179, 20), // "onItemChildsUnloaded"
QT_MOC_LITERAL(16, 200, 12), // "onExpandItem"
QT_MOC_LITERAL(17, 213, 11), // "getMetadata"
QT_MOC_LITERAL(18, 225, 7), // "metaKey"
QT_MOC_LITERAL(19, 233, 11), // "setMetadata"
QT_MOC_LITERAL(20, 245, 5), // "value"
QT_MOC_LITERAL(21, 251, 9), // "sendEvent"
QT_MOC_LITERAL(22, 261, 5), // "event"
QT_MOC_LITERAL(23, 267, 4), // "size"
QT_MOC_LITERAL(24, 272, 11), // "setExpanded"
QT_MOC_LITERAL(25, 284, 12) // "setCollapsed"

    },
    "ConnectionsTree::Model\0expand\0\0"
    "QModelIndex\0index\0error\0err\0itemChanged\0"
    "QWeakPointer<TreeItem>\0item\0"
    "itemChildsLoaded\0itemChildsUnloaded\0"
    "expandItem\0onItemChanged\0onItemChildsLoaded\0"
    "onItemChildsUnloaded\0onExpandItem\0"
    "getMetadata\0metaKey\0setMetadata\0value\0"
    "sendEvent\0event\0size\0setExpanded\0"
    "setCollapsed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionsTree__Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       7,    1,  100,    2, 0x06 /* Public */,
      10,    1,  103,    2, 0x06 /* Public */,
      11,    1,  106,    2, 0x06 /* Public */,
      12,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  112,    2, 0x09 /* Protected */,
      14,    1,  115,    2, 0x09 /* Protected */,
      15,    1,  118,    2, 0x09 /* Protected */,
      16,    1,  121,    2, 0x09 /* Protected */,
      17,    2,  124,    2, 0x0a /* Public */,
      19,    3,  129,    2, 0x0a /* Public */,
      21,    2,  136,    2, 0x0a /* Public */,
      23,    0,  141,    2, 0x0a /* Public */,
      24,    1,  142,    2, 0x0a /* Public */,
      25,    1,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::QVariant, 0x80000000 | 3, QMetaType::QString,    4,   18,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    4,   18,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   22,
    QMetaType::UInt,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ConnectionsTree::Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->itemChanged((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 3: _t->itemChildsLoaded((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 4: _t->itemChildsUnloaded((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 5: _t->expandItem((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 6: _t->onItemChanged((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 7: _t->onItemChildsLoaded((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 8: _t->onItemChildsUnloaded((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 9: _t->onExpandItem((*reinterpret_cast< QWeakPointer<TreeItem>(*)>(_a[1]))); break;
        case 10: { QVariant _r = _t->getMetadata((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setMetadata((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 12: _t->sendEvent((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: { uint _r = _t->size();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->setCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::expand)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)(QWeakPointer<TreeItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::itemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Model::*)(QWeakPointer<TreeItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::itemChildsLoaded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Model::*)(QWeakPointer<TreeItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::itemChildsUnloaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Model::*)(QWeakPointer<TreeItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::expandItem)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConnectionsTree::Model::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_ConnectionsTree__Model.data,
      qt_meta_data_ConnectionsTree__Model,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConnectionsTree::Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionsTree::Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionsTree__Model.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int ConnectionsTree::Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ConnectionsTree::Model::expand(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectionsTree::Model::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConnectionsTree::Model::itemChanged(QWeakPointer<TreeItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConnectionsTree::Model::itemChildsLoaded(QWeakPointer<TreeItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConnectionsTree::Model::itemChildsUnloaded(QWeakPointer<TreeItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConnectionsTree::Model::expandItem(QWeakPointer<TreeItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
