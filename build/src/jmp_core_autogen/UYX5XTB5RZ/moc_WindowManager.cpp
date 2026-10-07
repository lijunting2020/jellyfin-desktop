/****************************************************************************
** Meta object code from reading C++ file 'WindowManager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/WindowManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13WindowManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto WindowManager::qt_create_metaobjectdata<qt_meta_tag_ZN13WindowManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WindowManager",
        "fullScreenSwitched",
        "",
        "toggleFullscreen",
        "onVisibilityChanged",
        "QWindow::Visibility",
        "visibility",
        "onScreenAdded",
        "QScreen*",
        "screen",
        "onScreenRemoved",
        "onScreenGeometryChanged",
        "QRect",
        "geometry",
        "onScreenDpiChanged",
        "dpi",
        "updateMainSectionSettings",
        "QVariantMap",
        "values",
        "updateWindowState",
        "saveGeo",
        "saveGeometrySlot",
        "onZoomFactorChanged",
        "updateDebugInfo",
        "onShowDebugLayerChanged",
        "updateOpenGLInfo",
        "setAlwaysOnTop",
        "enable",
        "isAlwaysOnTop",
        "toggleAlwaysOnTop",
        "isWayland",
        "setFullScreen",
        "isFullScreen",
        "setCursorVisibility",
        "visible",
        "raiseWindow"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fullScreenSwitched'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleFullscreen'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onVisibilityChanged'
        QtMocHelpers::SlotData<void(QWindow::Visibility)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'onScreenAdded'
        QtMocHelpers::SlotData<void(QScreen *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onScreenRemoved'
        QtMocHelpers::SlotData<void(QScreen *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onScreenGeometryChanged'
        QtMocHelpers::SlotData<void(const QRect &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'onScreenDpiChanged'
        QtMocHelpers::SlotData<void(qreal)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QReal, 15 },
        }}),
        // Slot 'updateMainSectionSettings'
        QtMocHelpers::SlotData<void(const QVariantMap &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'updateWindowState'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'updateWindowState'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'saveGeometrySlot'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onZoomFactorChanged'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateDebugInfo'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowDebugLayerChanged'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateOpenGLInfo'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'setAlwaysOnTop'
        QtMocHelpers::MethodData<void(bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 27 },
        }}),
        // Method 'isAlwaysOnTop'
        QtMocHelpers::MethodData<bool() const>(28, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'toggleAlwaysOnTop'
        QtMocHelpers::MethodData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'isWayland'
        QtMocHelpers::MethodData<bool() const>(30, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'setFullScreen'
        QtMocHelpers::MethodData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 27 },
        }}),
        // Method 'isFullScreen'
        QtMocHelpers::MethodData<bool() const>(32, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'setCursorVisibility'
        QtMocHelpers::MethodData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 34 },
        }}),
        // Method 'raiseWindow'
        QtMocHelpers::MethodData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowManager, qt_meta_tag_ZN13WindowManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WindowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WindowManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WindowManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13WindowManagerE_t>.metaTypes,
    nullptr
} };

void WindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fullScreenSwitched(); break;
        case 1: _t->toggleFullscreen(); break;
        case 2: _t->onVisibilityChanged((*reinterpret_cast<std::add_pointer_t<QWindow::Visibility>>(_a[1]))); break;
        case 3: _t->onScreenAdded((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 4: _t->onScreenRemoved((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        case 5: _t->onScreenGeometryChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 6: _t->onScreenDpiChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->updateMainSectionSettings((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 8: _t->updateWindowState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->updateWindowState(); break;
        case 10: _t->saveGeometrySlot(); break;
        case 11: _t->onZoomFactorChanged(); break;
        case 12: _t->updateDebugInfo(); break;
        case 13: _t->onShowDebugLayerChanged(); break;
        case 14: _t->updateOpenGLInfo(); break;
        case 15: _t->setAlwaysOnTop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: { bool _r = _t->isAlwaysOnTop();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->toggleAlwaysOnTop(); break;
        case 18: { bool _r = _t->isWayland();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setFullScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: { bool _r = _t->isFullScreen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setCursorVisibility((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->raiseWindow(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WindowManager::*)()>(_a, &WindowManager::fullScreenSwitched, 0))
            return;
    }
}

const QMetaObject *WindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WindowManagerE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int WindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void WindowManager::fullScreenSwitched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
