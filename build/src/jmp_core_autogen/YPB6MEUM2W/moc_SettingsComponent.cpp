/****************************************************************************
** Meta object code from reading C++ file 'SettingsComponent.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/settings/SettingsComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17SettingsComponentE_t {};
} // unnamed namespace

template <> constexpr inline auto SettingsComponent::qt_create_metaobjectdata<qt_meta_tag_ZN17SettingsComponentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SettingsComponent",
        "groupUpdate",
        "",
        "section",
        "QVariant",
        "description",
        "sectionValueUpdate",
        "QVariantMap",
        "values",
        "windowsTrayIconChanged",
        "cycleSettingCommand",
        "args",
        "setSettingCommand",
        "setValue",
        "sectionID",
        "key",
        "value",
        "setValues",
        "options",
        "orderedSections",
        "allValues",
        "removeValue",
        "sectionOrKey",
        "resetToDefaultAll",
        "resetToDefault",
        "settingDescriptions",
        "QVariantList",
        "getWebClientUrl",
        "desktop",
        "getExtensionPath",
        "getClientName",
        "ignoreSSLErrors",
        "autodetectCertBundle",
        "detectCertBundlePath",
        "allowBrowserZoom",
        "windowsTrayIcon"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'groupUpdate'
        QtMocHelpers::SignalData<void(const QString &, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'sectionValueUpdate'
        QtMocHelpers::SignalData<void(const QString &, const QVariantMap &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'windowsTrayIconChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cycleSettingCommand'
        QtMocHelpers::SlotData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'setSettingCommand'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Method 'setValue'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QVariant &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 }, { QMetaType::QString, 15 }, { 0x80000000 | 4, 16 },
        }}),
        // Method 'setValues'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 18 },
        }}),
        // Method 'value'
        QtMocHelpers::MethodData<QVariant(const QString &, const QString &)>(16, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
        }}),
        // Method 'orderedSections'
        QtMocHelpers::MethodData<QVariant()>(19, 2, QMC::AccessPublic, 0x80000000 | 4),
        // Method 'allValues'
        QtMocHelpers::MethodData<QVariant(const QString &)>(20, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'allValues'
        QtMocHelpers::MethodData<QVariant()>(20, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 4),
        // Method 'removeValue'
        QtMocHelpers::MethodData<void(const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Method 'resetToDefaultAll'
        QtMocHelpers::MethodData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'resetToDefault'
        QtMocHelpers::MethodData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Method 'settingDescriptions'
        QtMocHelpers::MethodData<QVariantList()>(25, 2, QMC::AccessPublic, 0x80000000 | 26),
        // Method 'getWebClientUrl'
        QtMocHelpers::MethodData<QString(bool)>(27, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 28 },
        }}),
        // Method 'getExtensionPath'
        QtMocHelpers::MethodData<QString()>(29, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'getClientName'
        QtMocHelpers::MethodData<QString()>(30, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'ignoreSSLErrors'
        QtMocHelpers::MethodData<bool()>(31, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'autodetectCertBundle'
        QtMocHelpers::MethodData<bool()>(32, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'detectCertBundlePath'
        QtMocHelpers::MethodData<QString()>(33, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'allowBrowserZoom'
        QtMocHelpers::MethodData<bool()>(34, 2, QMC::AccessPublic, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'windowsTrayIcon'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SettingsComponent, qt_meta_tag_ZN17SettingsComponentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SettingsComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SettingsComponentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SettingsComponentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17SettingsComponentE_t>.metaTypes,
    nullptr
} };

void SettingsComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SettingsComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->groupUpdate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->sectionValueUpdate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 2: _t->windowsTrayIconChanged(); break;
        case 3: _t->cycleSettingCommand((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setSettingCommand((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 6: _t->setValues((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 7: { QVariant _r = _t->value((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariant _r = _t->orderedSections();
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariant _r = _t->allValues((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVariant _r = _t->allValues();
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->removeValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->resetToDefaultAll(); break;
        case 13: _t->resetToDefault((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: { QVariantList _r = _t->settingDescriptions();
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->getWebClientUrl((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->getExtensionPath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->getClientName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->ignoreSSLErrors();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->autodetectCertBundle();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { QString _r = _t->detectCertBundlePath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->allowBrowserZoom();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SettingsComponent::*)(const QString & , const QVariant & )>(_a, &SettingsComponent::groupUpdate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsComponent::*)(const QString & , const QVariantMap & )>(_a, &SettingsComponent::sectionValueUpdate, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsComponent::*)()>(_a, &SettingsComponent::windowsTrayIconChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->enableWindowsTrayIcon(); break;
        default: break;
        }
    }
}

const QMetaObject *SettingsComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SettingsComponentE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int SettingsComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SettingsComponent::groupUpdate(const QString & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void SettingsComponent::sectionValueUpdate(const QString & _t1, const QVariantMap & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void SettingsComponent::windowsTrayIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
