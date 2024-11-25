/****************************************************************************
** Meta object code from reading C++ file 'broadcast.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../broadcast.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'broadcast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbroadcastENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbroadcastENDCLASS = QtMocHelpers::stringData(
    "broadcast",
    "on_pushButton_clicked",
    "",
    "on_uploadImageButton_clicked",
    "updateDisplayLabel",
    "adjustFontSize",
    "QLabel*",
    "label",
    "text",
    "fontSize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbroadcastENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    3,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::Int,    7,    8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject broadcast::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSbroadcastENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbroadcastENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbroadcastENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<broadcast, std::true_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uploadImageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDisplayLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'adjustFontSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void broadcast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<broadcast *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_uploadImageButton_clicked(); break;
        case 2: _t->updateDisplayLabel(); break;
        case 3: _t->adjustFontSize((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *broadcast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *broadcast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbroadcastENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int broadcast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
