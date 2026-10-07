/****************************************************************************
** Meta object code from reading C++ file 'SystemComponent.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/system/SystemComponent.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15SystemComponentE_t {};
} // unnamed namespace

template <> constexpr inline auto SystemComponent::qt_create_metaobjectdata<qt_meta_tag_ZN15SystemComponentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SystemComponent",
        "serverConnectivityResult",
        "",
        "url",
        "success",
        "resolvedUrl",
        "pageContentReady",
        "html",
        "finalUrl",
        "hadCSP",
        "capabilitiesChanged",
        "capabilities",
        "userInfoChanged",
        "updateInfoEmitted",
        "hostMessage",
        "message",
        "settingsMessage",
        "setting",
        "value",
        "scaleChanged",
        "scale",
        "updateInfoHandler",
        "QNetworkReply*",
        "reply",
        "systemInformation",
        "QVariantMap",
        "exit",
        "restart",
        "jsLog",
        "level",
        "text",
        "checkServerConnectivity",
        "cancelServerConnectivity",
        "getUserAgent",
        "debugInformation",
        "networkAddresses",
        "openExternalUrl",
        "runUserScript",
        "script",
        "getNativeShellScript",
        "fetchPageForCSPWorkaround",
        "checkForUpdates",
        "hello",
        "version",
        "getCapabilitiesString",
        "crashApp",
        "isMacos",
        "isWindows",
        "isLinux",
        "isFreeBSD"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'serverConnectivityResult'
        QtMocHelpers::SignalData<void(QString, bool, QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Bool, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'pageContentReady'
        QtMocHelpers::SignalData<void(QString, QString, bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 8 }, { QMetaType::Bool, 9 },
        }}),
        // Signal 'capabilitiesChanged'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'userInfoChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateInfoEmitted'
        QtMocHelpers::SignalData<void(QString)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'hostMessage'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Signal 'settingsMessage'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QString, 18 },
        }}),
        // Signal 'scaleChanged'
        QtMocHelpers::SignalData<void(qreal)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 20 },
        }}),
        // Slot 'updateInfoHandler'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Method 'systemInformation'
        QtMocHelpers::MethodData<QVariantMap() const>(24, 2, QMC::AccessPublic, 0x80000000 | 25),
        // Method 'exit'
        QtMocHelpers::MethodData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'restart'
        QtMocHelpers::MethodData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'jsLog'
        QtMocHelpers::MethodData<void(int, QString)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 29 }, { QMetaType::QString, 30 },
        }}),
        // Method 'checkServerConnectivity'
        QtMocHelpers::MethodData<void(QString)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'cancelServerConnectivity'
        QtMocHelpers::MethodData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'getUserAgent'
        QtMocHelpers::MethodData<QString()>(33, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'debugInformation'
        QtMocHelpers::MethodData<QString()>(34, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'networkAddresses'
        QtMocHelpers::MethodData<QStringList() const>(35, 2, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'openExternalUrl'
        QtMocHelpers::MethodData<void(const QString &)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'runUserScript'
        QtMocHelpers::MethodData<void(QString)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Method 'getNativeShellScript'
        QtMocHelpers::MethodData<QString()>(39, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'fetchPageForCSPWorkaround'
        QtMocHelpers::MethodData<void(QString)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'checkForUpdates'
        QtMocHelpers::MethodData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'hello'
        QtMocHelpers::MethodData<void(const QString &)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 43 },
        }}),
        // Method 'getCapabilitiesString'
        QtMocHelpers::MethodData<QString()>(44, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'crashApp'
        QtMocHelpers::MethodData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isMacos'
        QtMocHelpers::PropertyData<bool>(46, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isWindows'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isLinux'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isFreeBSD'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scale'
        QtMocHelpers::PropertyData<qreal>(20, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SystemComponent, qt_meta_tag_ZN15SystemComponentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SystemComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SystemComponentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SystemComponentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15SystemComponentE_t>.metaTypes,
    nullptr
} };

void SystemComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->serverConnectivityResult((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->pageContentReady((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->capabilitiesChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->userInfoChanged(); break;
        case 4: _t->updateInfoEmitted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->hostMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->settingsMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->scaleChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->updateInfoHandler((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 9: { QVariantMap _r = _t->systemInformation();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->exit(); break;
        case 11: _t->restart(); break;
        case 12: _t->jsLog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->checkServerConnectivity((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->cancelServerConnectivity(); break;
        case 15: { QString _r = _t->getUserAgent();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->debugInformation();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QStringList _r = _t->networkAddresses();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->openExternalUrl((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->runUserScript((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: { QString _r = _t->getNativeShellScript();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->fetchPageForCSPWorkaround((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->checkForUpdates(); break;
        case 23: _t->hello((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: { QString _r = _t->getCapabilitiesString();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->crashApp(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(QString , bool , QString )>(_a, &SystemComponent::serverConnectivityResult, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(QString , QString , bool )>(_a, &SystemComponent::pageContentReady, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(const QString & )>(_a, &SystemComponent::capabilitiesChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)()>(_a, &SystemComponent::userInfoChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(QString )>(_a, &SystemComponent::updateInfoEmitted, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(const QString & )>(_a, &SystemComponent::hostMessage, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(const QString & , const QString & )>(_a, &SystemComponent::settingsMessage, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemComponent::*)(qreal )>(_a, &SystemComponent::scaleChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->platformIsMac(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->platformIsWindows(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->platformIsLinux(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->platformIsFreeBSD(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->m_scale; break;
        default: break;
        }
    }
}

const QMetaObject *SystemComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SystemComponentE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int SystemComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SystemComponent::serverConnectivityResult(QString _t1, bool _t2, QString _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void SystemComponent::pageContentReady(QString _t1, QString _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void SystemComponent::capabilitiesChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SystemComponent::userInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SystemComponent::updateInfoEmitted(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void SystemComponent::hostMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void SystemComponent::settingsMessage(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void SystemComponent::scaleChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
