/****************************************************************************
** Meta object code from reading C++ file 'MprisComponent.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mpris/MprisComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MprisComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14MprisComponentE_t {};
} // unnamed namespace

template <> constexpr inline auto MprisComponent::qt_create_metaobjectdata<qt_meta_tag_ZN14MprisComponentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MprisComponent",
        "propertiesChanged",
        "",
        "interface",
        "QVariantMap",
        "changedProperties",
        "invalidatedProperties",
        "Raise",
        "Quit",
        "Next",
        "Previous",
        "Pause",
        "PlayPause",
        "Stop",
        "Play",
        "Seek",
        "offset",
        "SetPosition",
        "QDBusObjectPath",
        "trackId",
        "position",
        "OpenUri",
        "uri",
        "setVolume",
        "volume",
        "setLoopStatus",
        "value",
        "setRate",
        "setShuffle",
        "onPlayerPlaying",
        "onPlayerPaused",
        "onPlayerStopped",
        "onPlayerFinished",
        "onPlayerStateChanged",
        "PlayerComponent::State",
        "newState",
        "oldState",
        "onPlayerPositionUpdate",
        "onPlayerDurationChanged",
        "duration",
        "onPlayerMetaData",
        "metadata",
        "onPlayerVolumeChanged",
        "onShuffleModeChanged",
        "shuffleEnabled",
        "onRepeatModeChanged",
        "repeatMode",
        "onAlbumArtReady",
        "imageData",
        "mimeType",
        "onAlbumArtUnavailable"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'propertiesChanged'
        QtMocHelpers::SignalData<void(const QString &, const QVariantMap &, const QStringList &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { QMetaType::QStringList, 6 },
        }}),
        // Slot 'Raise'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Quit'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Next'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Previous'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Pause'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PlayPause'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Stop'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Play'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Seek'
        QtMocHelpers::SlotData<void(qint64)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 16 },
        }}),
        // Slot 'SetPosition'
        QtMocHelpers::SlotData<void(const QDBusObjectPath &, qint64)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { QMetaType::LongLong, 20 },
        }}),
        // Slot 'OpenUri'
        QtMocHelpers::SlotData<void(const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'setVolume'
        QtMocHelpers::SlotData<void(double)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'setLoopStatus'
        QtMocHelpers::SlotData<void(const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Slot 'setRate'
        QtMocHelpers::SlotData<void(double)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 26 },
        }}),
        // Slot 'setShuffle'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'onPlayerPlaying'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlayerPaused'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlayerStopped'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlayerFinished'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlayerStateChanged'
        QtMocHelpers::SlotData<void(PlayerComponent::State, PlayerComponent::State)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 34, 35 }, { 0x80000000 | 34, 36 },
        }}),
        // Slot 'onPlayerPositionUpdate'
        QtMocHelpers::SlotData<void(quint64)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::ULongLong, 20 },
        }}),
        // Slot 'onPlayerDurationChanged'
        QtMocHelpers::SlotData<void(qint64)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 39 },
        }}),
        // Slot 'onPlayerMetaData'
        QtMocHelpers::SlotData<void(const QVariantMap &)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 41 },
        }}),
        // Slot 'onPlayerVolumeChanged'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShuffleModeChanged'
        QtMocHelpers::SlotData<void(bool)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 44 },
        }}),
        // Slot 'onRepeatModeChanged'
        QtMocHelpers::SlotData<void(const QString &)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Slot 'onAlbumArtReady'
        QtMocHelpers::SlotData<void(const QByteArray &, const QString &)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 48 }, { QMetaType::QString, 49 },
        }}),
        // Slot 'onAlbumArtUnavailable'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MprisComponent, qt_meta_tag_ZN14MprisComponentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MprisComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14MprisComponentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14MprisComponentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14MprisComponentE_t>.metaTypes,
    nullptr
} };

void MprisComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MprisComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 1: _t->Raise(); break;
        case 2: _t->Quit(); break;
        case 3: _t->Next(); break;
        case 4: _t->Previous(); break;
        case 5: _t->Pause(); break;
        case 6: _t->PlayPause(); break;
        case 7: _t->Stop(); break;
        case 8: _t->Play(); break;
        case 9: _t->Seek((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 10: _t->SetPosition((*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        case 11: _t->OpenUri((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setVolume((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->setLoopStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->setRate((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->setShuffle((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onPlayerPlaying(); break;
        case 17: _t->onPlayerPaused(); break;
        case 18: _t->onPlayerStopped(); break;
        case 19: _t->onPlayerFinished(); break;
        case 20: _t->onPlayerStateChanged((*reinterpret_cast<std::add_pointer_t<PlayerComponent::State>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PlayerComponent::State>>(_a[2]))); break;
        case 21: _t->onPlayerPositionUpdate((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1]))); break;
        case 22: _t->onPlayerDurationChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 23: _t->onPlayerMetaData((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 24: _t->onPlayerVolumeChanged(); break;
        case 25: _t->onShuffleModeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->onRepeatModeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->onAlbumArtReady((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->onAlbumArtUnavailable(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MprisComponent::*)(const QString & , const QVariantMap & , const QStringList & )>(_a, &MprisComponent::propertiesChanged, 0))
            return;
    }
}

const QMetaObject *MprisComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14MprisComponentE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int MprisComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void MprisComponent::propertiesChanged(const QString & _t1, const QVariantMap & _t2, const QStringList & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
