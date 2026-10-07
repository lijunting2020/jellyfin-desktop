/****************************************************************************
** Meta object code from reading C++ file 'mpvabstractitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../external/mpvqt/src/mpvabstractitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpvabstractitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15MpvAbstractItemE_t {};
} // unnamed namespace

template <> constexpr inline auto MpvAbstractItem::qt_create_metaobjectdata<qt_meta_tag_ZN15MpvAbstractItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MpvAbstractItem",
        "ready",
        "",
        "observeProperty",
        "property",
        "mpv_format",
        "format",
        "uint64_t",
        "id",
        "setProperty",
        "QVariant",
        "value",
        "command",
        "params",
        "setPropertyBlocking",
        "setPropertyAsync",
        "getProperty",
        "getPropertyAsync",
        "commandBlocking",
        "commandAsync",
        "expandText",
        "text",
        "unobserveProperty"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ready'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'observeProperty'
        QtMocHelpers::SignalData<void(const QString &, mpv_format, uint64_t)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'observeProperty'
        QtMocHelpers::SignalData<void(const QString &, mpv_format)>(3, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'setProperty'
        QtMocHelpers::SignalData<void(const QString &, const QVariant &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 10, 11 },
        }}),
        // Signal 'command'
        QtMocHelpers::SignalData<void(const QStringList &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 13 },
        }}),
        // Method 'setPropertyBlocking'
        QtMocHelpers::MethodData<int(const QString &, const QVariant &)>(14, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 10, 11 },
        }}),
        // Method 'setPropertyAsync'
        QtMocHelpers::MethodData<void(const QString &, const QVariant &, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 10, 11 }, { QMetaType::Int, 8 },
        }}),
        // Method 'setPropertyAsync'
        QtMocHelpers::MethodData<void(const QString &, const QVariant &)>(15, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 10, 11 },
        }}),
        // Method 'getProperty'
        QtMocHelpers::MethodData<QVariant(const QString &)>(16, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'getPropertyAsync'
        QtMocHelpers::MethodData<void(const QString &, int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::Int, 8 },
        }}),
        // Method 'getPropertyAsync'
        QtMocHelpers::MethodData<void(const QString &)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'commandBlocking'
        QtMocHelpers::MethodData<QVariant(const QVariant &)>(18, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { 0x80000000 | 10, 13 },
        }}),
        // Method 'commandAsync'
        QtMocHelpers::MethodData<void(const QStringList &, int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 13 }, { QMetaType::Int, 8 },
        }}),
        // Method 'commandAsync'
        QtMocHelpers::MethodData<void(const QStringList &)>(19, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QStringList, 13 },
        }}),
        // Method 'expandText'
        QtMocHelpers::MethodData<QVariant(const QString &)>(20, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 21 },
        }}),
        // Method 'unobserveProperty'
        QtMocHelpers::MethodData<int(uint64_t)>(22, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MpvAbstractItem, qt_meta_tag_ZN15MpvAbstractItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MpvAbstractItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickFramebufferObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MpvAbstractItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MpvAbstractItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15MpvAbstractItemE_t>.metaTypes,
    nullptr
} };

void MpvAbstractItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MpvAbstractItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->observeProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<mpv_format>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint64_t>>(_a[3]))); break;
        case 2: _t->observeProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<mpv_format>>(_a[2]))); break;
        case 3: _t->setProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 4: _t->command((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: { int _r = _t->setPropertyBlocking((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->setPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 8: { QVariant _r = _t->getProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->getPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->getPropertyAsync((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { QVariant _r = _t->commandBlocking((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->commandAsync((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->commandAsync((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 14: { QVariant _r = _t->expandText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->unobserveProperty((*reinterpret_cast<std::add_pointer_t<uint64_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MpvAbstractItem::*)()>(_a, &MpvAbstractItem::ready, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvAbstractItem::*)(const QString & , mpv_format , uint64_t )>(_a, &MpvAbstractItem::observeProperty, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvAbstractItem::*)(const QString & , const QVariant & )>(_a, &MpvAbstractItem::setProperty, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvAbstractItem::*)(const QStringList & )>(_a, &MpvAbstractItem::command, 4))
            return;
    }
}

const QMetaObject *MpvAbstractItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpvAbstractItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MpvAbstractItemE_t>.strings))
        return static_cast<void*>(this);
    return QQuickFramebufferObject::qt_metacast(_clname);
}

int MpvAbstractItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickFramebufferObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MpvAbstractItem::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MpvAbstractItem::observeProperty(const QString & _t1, mpv_format _t2, uint64_t _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void MpvAbstractItem::setProperty(const QString & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void MpvAbstractItem::command(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
