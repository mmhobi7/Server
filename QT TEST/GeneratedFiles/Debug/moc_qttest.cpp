/****************************************************************************
** Meta object code from reading C++ file 'qttest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qttest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTTEST_t {
    QByteArrayData data[11];
    char stringdata[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTTEST_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTTEST_t qt_meta_stringdata_QTTEST = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 21),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 25),
QT_MOC_LITERAL(4, 56, 26),
QT_MOC_LITERAL(5, 83, 21),
QT_MOC_LITERAL(6, 105, 20),
QT_MOC_LITERAL(7, 126, 24),
QT_MOC_LITERAL(8, 151, 34),
QT_MOC_LITERAL(9, 186, 25),
QT_MOC_LITERAL(10, 212, 29)
    },
    "QTTEST\0on_sendButton_clicked\0\0"
    "on_sendEdit_returnPressed\0"
    "on_open_trayButton_clicked\0"
    "on_beepButton_clicked\0on_cmdButton_clicked\0"
    "on_cmdEdit_returnPressed\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_generateButton_clicked\0"
    "on_generateEdit_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTTEST[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
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

void QTTEST::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTTEST *_t = static_cast<QTTEST *>(_o);
        switch (_id) {
        case 0: _t->on_sendButton_clicked(); break;
        case 1: _t->on_sendEdit_returnPressed(); break;
        case 2: _t->on_open_trayButton_clicked(); break;
        case 3: _t->on_beepButton_clicked(); break;
        case 4: _t->on_cmdButton_clicked(); break;
        case 5: _t->on_cmdEdit_returnPressed(); break;
        case 6: _t->on_listWidget_itemSelectionChanged(); break;
        case 7: _t->on_generateButton_clicked(); break;
        case 8: _t->on_generateEdit_returnPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QTTEST::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QTTEST.data,
      qt_meta_data_QTTEST,  qt_static_metacall, 0, 0}
};


const QMetaObject *QTTEST::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTTEST::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTTEST.stringdata))
        return static_cast<void*>(const_cast< QTTEST*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QTTEST::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
