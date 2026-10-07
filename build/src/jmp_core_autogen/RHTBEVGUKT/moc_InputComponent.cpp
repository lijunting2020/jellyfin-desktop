/****************************************************************************
** Meta object code from reading C++ file 'InputComponent.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/input/InputComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9InputBaseE_t {};
} // unnamed namespace

template <> constexpr inline auto InputBase::qt_create_metaobjectdata<qt_meta_tag_ZN9InputBaseE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InputBase",
        "receivedInput",
        "",
        "source",
        "keycode",
        "InputkeyState",
        "keystate",
        "KeyDown",
        "KeyUp",
        "KeyPressed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'receivedInput'
        QtMocHelpers::SignalData<void(const QString &, const QString &, enum InputkeyState)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'InputkeyState'
        QtMocHelpers::EnumData<enum InputkeyState>(5, 5, QMC::EnumFlags{}).add({
            {    7, InputkeyState::KeyDown },
            {    8, InputkeyState::KeyUp },
            {    9, InputkeyState::KeyPressed },
        }),
    };
    return QtMocHelpers::metaObjectData<InputBase, qt_meta_tag_ZN9InputBaseE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InputBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9InputBaseE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9InputBaseE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9InputBaseE_t>.metaTypes,
    nullptr
} };

void InputBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputBase *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->receivedInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum InputkeyState>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputBase::*)(const QString & , const QString & , InputkeyState )>(_a, &InputBase::receivedInput, 0))
            return;
    }
}

const QMetaObject *InputBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9InputBaseE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void InputBase::receivedInput(const QString & _t1, const QString & _t2, InputkeyState _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN14InputComponentE_t {};
} // unnamed namespace

template <> constexpr inline auto InputComponent::qt_create_metaobjectdata<qt_meta_tag_ZN14InputComponentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InputComponent",
        "receivedInput",
        "",
        "hostInput",
        "actions",
        "volumeChanged",
        "volume",
        "positionSeek",
        "position",
        "rateChanged",
        "rate",
        "remapInput",
        "source",
        "keycode",
        "InputBase::InputkeyState",
        "keyState",
        "executeActions",
        "setVolume",
        "seekTo",
        "setRate"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'receivedInput'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hostInput'
        QtMocHelpers::SignalData<void(const QStringList &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 4 },
        }}),
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'positionSeek'
        QtMocHelpers::SignalData<void(qint64)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 8 },
        }}),
        // Signal 'rateChanged'
        QtMocHelpers::SignalData<void(double)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 10 },
        }}),
        // Slot 'remapInput'
        QtMocHelpers::SlotData<void(const QString &, const QString &, InputBase::InputkeyState)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { 0x80000000 | 14, 15 },
        }}),
        // Method 'executeActions'
        QtMocHelpers::MethodData<void(const QStringList &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 4 },
        }}),
        // Method 'setVolume'
        QtMocHelpers::MethodData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'seekTo'
        QtMocHelpers::MethodData<void(qint64)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 8 },
        }}),
        // Method 'setRate'
        QtMocHelpers::MethodData<void(double)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputComponent, qt_meta_tag_ZN14InputComponentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InputComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14InputComponentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14InputComponentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14InputComponentE_t>.metaTypes,
    nullptr
} };

void InputComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->receivedInput(); break;
        case 1: _t->hostInput((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->volumeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->positionSeek((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->rateChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->remapInput((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputBase::InputkeyState>>(_a[3]))); break;
        case 6: _t->executeActions((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 7: _t->setVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->seekTo((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 9: _t->setRate((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputComponent::*)()>(_a, &InputComponent::receivedInput, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputComponent::*)(const QStringList & )>(_a, &InputComponent::hostInput, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputComponent::*)(int )>(_a, &InputComponent::volumeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputComponent::*)(qint64 )>(_a, &InputComponent::positionSeek, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputComponent::*)(double )>(_a, &InputComponent::rateChanged, 4))
            return;
    }
}

const QMetaObject *InputComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14InputComponentE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int InputComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void InputComponent::receivedInput()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InputComponent::hostInput(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void InputComponent::volumeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void InputComponent::positionSeek(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void InputComponent::rateChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
