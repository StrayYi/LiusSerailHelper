/****************************************************************************
** Meta object code from reading C++ file 'windowserial.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../windowserial.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowserial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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
struct qt_meta_stringdata_CLASSwindowSerialENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSwindowSerialENDCLASS = QtMocHelpers::stringData(
    "windowSerial",
    "evButtonTurnOnOff",
    "",
    "evButtonClearAll",
    "evButtonSend",
    "evButtonUpdatePorts",
    "serialReceiveData",
    "autoRefrePortTimerTimeOut",
    "autoSendTimerTimeOut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSwindowSerialENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   59,    2, 0x0a,    4 /* Public */,
       6,    0,   60,    2, 0x0a,    5 /* Public */,
       7,    0,   61,    2, 0x0a,    6 /* Public */,
       8,    0,   62,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject windowSerial::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSwindowSerialENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSwindowSerialENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSwindowSerialENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<windowSerial, std::true_type>,
        // method 'evButtonTurnOnOff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'evButtonClearAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'evButtonSend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'evButtonUpdatePorts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serialReceiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoRefrePortTimerTimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoSendTimerTimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void windowSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<windowSerial *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->evButtonTurnOnOff(); break;
        case 1: _t->evButtonClearAll(); break;
        case 2: _t->evButtonSend(); break;
        case 3: _t->evButtonUpdatePorts(); break;
        case 4: _t->serialReceiveData(); break;
        case 5: _t->autoRefrePortTimerTimeOut(); break;
        case 6: _t->autoSendTimerTimeOut(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *windowSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSwindowSerialENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int windowSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
