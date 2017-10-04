/****************************************************************************
** Meta object code from reading C++ file 'kohonenwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Kohonen-map-MyoArmband/kohonenwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kohonenwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KohonenWidget_t {
    QByteArrayData data[19];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KohonenWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KohonenWidget_t qt_meta_stringdata_KohonenWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KohonenWidget"
QT_MOC_LITERAL(1, 14, 11), // "pushStringS"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "corSignal"
QT_MOC_LITERAL(4, 37, 7), // "drawing"
QT_MOC_LITERAL(5, 45, 7), // "refresh"
QT_MOC_LITERAL(6, 53, 18), // "std::vector<float>"
QT_MOC_LITERAL(7, 72, 10), // "learning_1"
QT_MOC_LITERAL(8, 83, 10), // "learning_2"
QT_MOC_LITERAL(9, 94, 3), // "rst"
QT_MOC_LITERAL(10, 98, 10), // "learning_3"
QT_MOC_LITERAL(11, 109, 10), // "learning_4"
QT_MOC_LITERAL(12, 120, 10), // "learning_5"
QT_MOC_LITERAL(13, 131, 10), // "learning_6"
QT_MOC_LITERAL(14, 142, 10), // "learning_7"
QT_MOC_LITERAL(15, 153, 10), // "learning_8"
QT_MOC_LITERAL(16, 164, 10), // "pushString"
QT_MOC_LITERAL(17, 175, 6), // "getCor"
QT_MOC_LITERAL(18, 182, 6) // "getRad"

    },
    "KohonenWidget\0pushStringS\0\0corSignal\0"
    "drawing\0refresh\0std::vector<float>\0"
    "learning_1\0learning_2\0rst\0learning_3\0"
    "learning_4\0learning_5\0learning_6\0"
    "learning_7\0learning_8\0pushString\0"
    "getCor\0getRad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KohonenWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   98,    2, 0x0a /* Public */,
       5,    1,   99,    2, 0x0a /* Public */,
       7,    0,  102,    2, 0x0a /* Public */,
       8,    0,  103,    2, 0x0a /* Public */,
       9,    0,  104,    2, 0x0a /* Public */,
      10,    0,  105,    2, 0x0a /* Public */,
      11,    0,  106,    2, 0x0a /* Public */,
      12,    0,  107,    2, 0x0a /* Public */,
      13,    0,  108,    2, 0x0a /* Public */,
      14,    0,  109,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      16,    0,  111,    2, 0x0a /* Public */,
      17,    0,  112,    2, 0x0a /* Public */,
      18,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KohonenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KohonenWidget *_t = static_cast<KohonenWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->pushStringS((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->corSignal();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->drawing(); break;
        case 3: _t->refresh((*reinterpret_cast< std::vector<float>(*)>(_a[1]))); break;
        case 4: _t->learning_1(); break;
        case 5: _t->learning_2(); break;
        case 6: _t->rst(); break;
        case 7: _t->learning_3(); break;
        case 8: _t->learning_4(); break;
        case 9: _t->learning_5(); break;
        case 10: _t->learning_6(); break;
        case 11: _t->learning_7(); break;
        case 12: _t->learning_8(); break;
        case 13: _t->pushString(); break;
        case 14: _t->getCor(); break;
        case 15: _t->getRad(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (KohonenWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KohonenWidget::pushStringS)) {
                *result = 0;
            }
        }
        {
            typedef int (KohonenWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KohonenWidget::corSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject KohonenWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KohonenWidget.data,
      qt_meta_data_KohonenWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KohonenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KohonenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KohonenWidget.stringdata0))
        return static_cast<void*>(const_cast< KohonenWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KohonenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
int KohonenWidget::pushStringS(QString _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int KohonenWidget::corSignal()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
