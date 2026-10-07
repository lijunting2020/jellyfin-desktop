/****************************************************************************
** Meta object code from reading C++ file 'PowerComponent.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/power/PowerComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14PowerComponentE_t {};
} // unnamed namespace

template <> constexpr inline auto PowerComponent::qt_create_metaobjectdata<qt_meta_tag_ZN14PowerComponentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PowerComponent",
        "screenSaverEnabled",
        "",
        "screenSaverDisabled",
        "checkCap",
        "PowerCapabilities",
        "capability",
        "canPowerOff",
        "canReboot",
        "canSuspend",
        "canRelaunch",
        "getPowerCapabilities",
        "PowerOff",
        "Reboot",
        "Suspend",
        "setScreensaverEnabled",
        "enabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'screenSaverEnabled'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenSaverDisabled'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'checkCap'
        QtMocHelpers::SlotData<bool(enum PowerCapabilities)>(4, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'canPowerOff'
        QtMocHelpers::SlotData<bool()>(7, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'canReboot'
        QtMocHelpers::SlotData<bool()>(8, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'canSuspend'
        QtMocHelpers::SlotData<bool()>(9, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'canRelaunch'
        QtMocHelpers::SlotData<bool()>(10, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getPowerCapabilities'
        QtMocHelpers::SlotData<int()>(11, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'PowerOff'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'Reboot'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'Suspend'
        QtMocHelpers::SlotData<bool()>(14, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setScreensaverEnabled'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PowerComponent, qt_meta_tag_ZN14PowerComponentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PowerComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PowerComponentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PowerComponentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14PowerComponentE_t>.metaTypes,
    nullptr
} };

void PowerComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PowerComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->screenSaverEnabled(); break;
        case 1: _t->screenSaverDisabled(); break;
        case 2: { bool _r = _t->checkCap((*reinterpret_cast<std::add_pointer_t<enum PowerCapabilities>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->canPowerOff();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->canReboot();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->canSuspend();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->canRelaunch();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getPowerCapabilities();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->PowerOff();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->Reboot();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->Suspend();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setScreensaverEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PowerComponent::*)()>(_a, &PowerComponent::screenSaverEnabled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PowerComponent::*)()>(_a, &PowerComponent::screenSaverDisabled, 1))
            return;
    }
}

const QMetaObject *PowerComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PowerComponentE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int PowerComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PowerComponent::screenSaverEnabled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerComponent::screenSaverDisabled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
