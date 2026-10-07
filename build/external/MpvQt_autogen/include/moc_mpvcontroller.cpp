/****************************************************************************
** Meta object code from reading C++ file 'mpvcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../external/mpvqt/src/mpvcontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpvcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
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
struct qt_meta_tag_ZN13MpvControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto MpvController::qt_create_metaobjectdata<qt_meta_tag_ZN13MpvControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MpvController",
        "propertyChanged",
        "",
        "property",
        "QVariant",
        "value",
        "asyncReply",
        "data",
        "mpv_event",
        "event",
        "fileStarted",
        "fileLoaded",
        "endFile",
        "reason",
        "videoReconfig",
        "init",
        "observeProperty",
        "mpv_format",
        "format",
        "uint64_t",
        "id",
        "unobserveProperty",
        "setProperty",
        "setPropertyAsync",
        "getProperty",
        "getPropertyAsync",
        "command",
        "params",
        "commandAsync"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(const QString &, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'asyncReply'
        QtMocHelpers::SignalData<void(const QVariant &, mpv_event)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'fileStarted'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileLoaded'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'endFile'
        QtMocHelpers::SignalData<void(QString)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'videoReconfig'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'init'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'observeProperty'
        QtMocHelpers::SlotData<void(const QString &, mpv_format, uint64_t)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 17, 18 }, { 0x80000000 | 19, 20 },
        }}),
        // Slot 'observeProperty'
        QtMocHelpers::SlotData<void(const QString &, mpv_format)>(16, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 17, 18 },
        }}),
        // Slot 'unobserveProperty'
        QtMocHelpers::SlotData<int(uint64_t)>(21, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'setProperty'
        QtMocHelpers::SlotData<int(const QString &, const QVariant &)>(22, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'setPropertyAsync'
        QtMocHelpers::SlotData<int(const QString &, const QVariant &, int)>(23, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'setPropertyAsync'
        QtMocHelpers::SlotData<int(const QString &, const QVariant &)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Int, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'getProperty'
        QtMocHelpers::SlotData<QVariant(const QString &)>(24, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'getPropertyAsync'
        QtMocHelpers::SlotData<int(const QString &, int)>(25, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 3 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'getPropertyAsync'
        QtMocHelpers::SlotData<int(const QString &)>(25, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Int, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'command'
        QtMocHelpers::SlotData<QVariant(const QVariant &)>(26, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { 0x80000000 | 4, 27 },
        }}),
        // Slot 'commandAsync'
        QtMocHelpers::SlotData<int(const QVariant &, int)>(28, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 4, 27 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'commandAsync'
        QtMocHelpers::SlotData<int(const QVariant &)>(28, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Int, {{
            { 0x80000000 | 4, 27 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MpvController, qt_meta_tag_ZN13MpvControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MpvController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MpvControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MpvControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13MpvControllerE_t>.metaTypes,
    nullptr
} };

void MpvController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MpvController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->asyncReply((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<mpv_event>>(_a[2]))); break;
        case 2: _t->fileStarted(); break;
        case 3: _t->fileLoaded(); break;
        case 4: _t->endFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->videoReconfig(); break;
        case 6: _t->init(); break;
        case 7: _t->observeProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<mpv_format>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint64_t>>(_a[3]))); break;
        case 8: _t->observeProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<mpv_format>>(_a[2]))); break;
        case 9: { int _r = _t->unobserveProperty((*reinterpret_cast<std::add_pointer_t<uint64_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->setProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->setPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->setPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 13: { QVariant _r = _t->getProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->getPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->getPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVariant _r = _t->command((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->commandAsync((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->commandAsync((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mpv_event >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MpvController::*)(const QString & , const QVariant & )>(_a, &MpvController::propertyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvController::*)(const QVariant & , mpv_event )>(_a, &MpvController::asyncReply, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvController::*)()>(_a, &MpvController::fileStarted, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvController::*)()>(_a, &MpvController::fileLoaded, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvController::*)(QString )>(_a, &MpvController::endFile, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvController::*)()>(_a, &MpvController::videoReconfig, 5))
            return;
    }
}

const QMetaObject *MpvController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpvController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MpvControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MpvController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MpvController::propertyChanged(const QString & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void MpvController::asyncReply(const QVariant & _t1, mpv_event _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void MpvController::fileStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MpvController::fileLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MpvController::endFile(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MpvController::videoReconfig()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
