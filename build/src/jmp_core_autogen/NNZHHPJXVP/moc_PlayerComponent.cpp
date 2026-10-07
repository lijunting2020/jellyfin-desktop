/****************************************************************************
** Meta object code from reading C++ file 'PlayerComponent.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/player/PlayerComponent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerComponent.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PlayerComponentE_t {};
} // unnamed namespace

template <> constexpr inline auto PlayerComponent::qt_create_metaobjectdata<qt_meta_tag_ZN15PlayerComponentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlayerComponent",
        "playing",
        "",
        "buffering",
        "percent",
        "paused",
        "finished",
        "canceled",
        "error",
        "msg",
        "stopped",
        "stateChanged",
        "State",
        "newState",
        "oldState",
        "videoPlaybackActive",
        "active",
        "windowVisible",
        "visible",
        "updateDuration",
        "milliseconds",
        "playbackRateChanged",
        "rate",
        "positionUpdate",
        "onVideoRecangleChanged",
        "onMpvEvents",
        "onMetaData",
        "QVariantMap",
        "meta",
        "QUrl",
        "baseUrl",
        "webPlaylistChanged",
        "QVariantList",
        "playlist",
        "currentItemId",
        "shuffleChanged",
        "enabled",
        "repeatChanged",
        "mode",
        "fullscreenChanged",
        "isFullscreen",
        "rateChanged",
        "queueChanged",
        "canNext",
        "canPrevious",
        "playbackStopped",
        "isNavigating",
        "durationChanged",
        "durationMs",
        "playbackStateChanged",
        "state",
        "positionChanged",
        "positionMs",
        "seekPerformed",
        "metadataChanged",
        "metadata",
        "volumeChanged",
        "volume",
        "bufferedRangesUpdated",
        "ranges",
        "updateAudioDeviceList",
        "setAudioConfiguration",
        "setSubtitleConfiguration",
        "setVideoConfiguration",
        "setOtherConfiguration",
        "updateAudioConfiguration",
        "updateSubtitleConfiguration",
        "updateVideoConfiguration",
        "updateConfiguration",
        "handleMpvEvents",
        "onRestoreDisplay",
        "onRefreshRateChange",
        "updateAudioDevice",
        "load",
        "url",
        "options",
        "QVariant",
        "audioStream",
        "subtitleStream",
        "queueMedia",
        "clearQueue",
        "seekTo",
        "ms",
        "stop",
        "streamSwitch",
        "pause",
        "play",
        "notifyShuffleChange",
        "notifyRepeatChange",
        "notifyFullscreenChange",
        "notifyRateChange",
        "notifyQueueChange",
        "notifyPlaybackStop",
        "notifyDurationChange",
        "notifyPlaybackState",
        "notifyPosition",
        "notifySeek",
        "notifyMetadata",
        "notifyVolumeChange",
        "setVolume",
        "setMuted",
        "muted",
        "getAudioDeviceList",
        "setAudioDevice",
        "name",
        "setAudioStream",
        "setSubtitleStream",
        "setAudioDelay",
        "setSubtitleDelay",
        "setVideoOnlyMode",
        "enable",
        "userCommand",
        "command",
        "setVideoRectangle",
        "x",
        "y",
        "w",
        "h",
        "setPlaybackRate",
        "getPosition",
        "getDuration",
        "getWebPlaylist",
        "getCurrentWebPlaylistItemId",
        "setWebPlaylist"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'playing'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buffering'
        QtMocHelpers::SignalData<void(float)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 4 },
        }}),
        // Signal 'paused'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canceled'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'error'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'stopped'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stateChanged'
        QtMocHelpers::SignalData<void(enum State, enum State)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { 0x80000000 | 12, 14 },
        }}),
        // Signal 'videoPlaybackActive'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'windowVisible'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'updateDuration'
        QtMocHelpers::SignalData<void(qint64)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 20 },
        }}),
        // Signal 'playbackRateChanged'
        QtMocHelpers::SignalData<void(double)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 22 },
        }}),
        // Signal 'positionUpdate'
        QtMocHelpers::SignalData<void(quint64)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 2 },
        }}),
        // Signal 'onVideoRecangleChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'onMpvEvents'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'onMetaData'
        QtMocHelpers::SignalData<void(const QVariantMap &, QUrl)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 }, { 0x80000000 | 29, 30 },
        }}),
        // Signal 'webPlaylistChanged'
        QtMocHelpers::SignalData<void(const QVariantList &, const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 }, { QMetaType::QString, 34 },
        }}),
        // Signal 'shuffleChanged'
        QtMocHelpers::SignalData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Signal 'repeatChanged'
        QtMocHelpers::SignalData<void(const QString &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Signal 'fullscreenChanged'
        QtMocHelpers::SignalData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Signal 'rateChanged'
        QtMocHelpers::SignalData<void(double)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 22 },
        }}),
        // Signal 'queueChanged'
        QtMocHelpers::SignalData<void(bool, bool)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 43 }, { QMetaType::Bool, 44 },
        }}),
        // Signal 'playbackStopped'
        QtMocHelpers::SignalData<void(bool)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 46 },
        }}),
        // Signal 'durationChanged'
        QtMocHelpers::SignalData<void(qint64)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 48 },
        }}),
        // Signal 'playbackStateChanged'
        QtMocHelpers::SignalData<void(const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 50 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(qint64)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 52 },
        }}),
        // Signal 'seekPerformed'
        QtMocHelpers::SignalData<void(qint64)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 52 },
        }}),
        // Signal 'metadataChanged'
        QtMocHelpers::SignalData<void(const QVariantMap &)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 55 },
        }}),
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(double)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 57 },
        }}),
        // Signal 'bufferedRangesUpdated'
        QtMocHelpers::SignalData<void(const QVariantList &)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 59 },
        }}),
        // Slot 'updateAudioDeviceList'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setAudioConfiguration'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSubtitleConfiguration'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVideoConfiguration'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setOtherConfiguration'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateAudioConfiguration'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateSubtitleConfiguration'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateVideoConfiguration'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateConfiguration'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleMpvEvents'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRestoreDisplay'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRefreshRateChange'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateAudioDevice'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'load'
        QtMocHelpers::MethodData<bool(const QString &, const QVariantMap &, const QVariantMap &, const QVariant &, const QVariant &)>(73, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 74 }, { 0x80000000 | 27, 75 }, { 0x80000000 | 27, 55 }, { 0x80000000 | 76, 77 },
            { 0x80000000 | 76, 78 },
        }}),
        // Method 'load'
        QtMocHelpers::MethodData<bool(const QString &, const QVariantMap &, const QVariantMap &, const QVariant &)>(73, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 74 }, { 0x80000000 | 27, 75 }, { 0x80000000 | 27, 55 }, { 0x80000000 | 76, 77 },
        }}),
        // Method 'load'
        QtMocHelpers::MethodData<bool(const QString &, const QVariantMap &, const QVariantMap &)>(73, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 74 }, { 0x80000000 | 27, 75 }, { 0x80000000 | 27, 55 },
        }}),
        // Method 'queueMedia'
        QtMocHelpers::MethodData<void(const QString &, const QVariantMap &, const QVariantMap &, const QVariant &, const QVariant &)>(79, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 74 }, { 0x80000000 | 27, 75 }, { 0x80000000 | 27, 55 }, { 0x80000000 | 76, 77 },
            { 0x80000000 | 76, 78 },
        }}),
        // Method 'clearQueue'
        QtMocHelpers::MethodData<void()>(80, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'seekTo'
        QtMocHelpers::MethodData<void(qint64)>(81, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 82 },
        }}),
        // Method 'stop'
        QtMocHelpers::MethodData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'streamSwitch'
        QtMocHelpers::MethodData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'pause'
        QtMocHelpers::MethodData<void()>(85, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'play'
        QtMocHelpers::MethodData<void()>(86, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'notifyShuffleChange'
        QtMocHelpers::MethodData<void(bool)>(87, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Method 'notifyRepeatChange'
        QtMocHelpers::MethodData<void(const QString &)>(88, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Method 'notifyFullscreenChange'
        QtMocHelpers::MethodData<void(bool)>(89, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Method 'notifyRateChange'
        QtMocHelpers::MethodData<void(double)>(90, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 22 },
        }}),
        // Method 'notifyQueueChange'
        QtMocHelpers::MethodData<void(bool, bool)>(91, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 43 }, { QMetaType::Bool, 44 },
        }}),
        // Method 'notifyPlaybackStop'
        QtMocHelpers::MethodData<void(bool)>(92, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 46 },
        }}),
        // Method 'notifyDurationChange'
        QtMocHelpers::MethodData<void(qint64)>(93, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 48 },
        }}),
        // Method 'notifyPlaybackState'
        QtMocHelpers::MethodData<void(const QString &)>(94, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 50 },
        }}),
        // Method 'notifyPosition'
        QtMocHelpers::MethodData<void(qint64)>(95, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 52 },
        }}),
        // Method 'notifySeek'
        QtMocHelpers::MethodData<void(qint64)>(96, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 52 },
        }}),
        // Method 'notifyMetadata'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(97, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 55 },
        }}),
        // Method 'notifyVolumeChange'
        QtMocHelpers::MethodData<void(double)>(98, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 57 },
        }}),
        // Method 'setVolume'
        QtMocHelpers::MethodData<void(int)>(99, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 57 },
        }}),
        // Method 'volume'
        QtMocHelpers::MethodData<int()>(57, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'setMuted'
        QtMocHelpers::MethodData<void(bool)>(100, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 101 },
        }}),
        // Method 'muted'
        QtMocHelpers::MethodData<bool()>(101, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'getAudioDeviceList'
        QtMocHelpers::MethodData<QVariant()>(102, 2, QMC::AccessPublic, 0x80000000 | 76),
        // Method 'setAudioDevice'
        QtMocHelpers::MethodData<void(const QString &)>(103, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 104 },
        }}),
        // Method 'setAudioStream'
        QtMocHelpers::MethodData<void(const QVariant &)>(105, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 76, 77 },
        }}),
        // Method 'setSubtitleStream'
        QtMocHelpers::MethodData<void(const QVariant &)>(106, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 76, 78 },
        }}),
        // Method 'setAudioDelay'
        QtMocHelpers::MethodData<void(qint64)>(107, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 20 },
        }}),
        // Method 'setSubtitleDelay'
        QtMocHelpers::MethodData<void(qint64)>(108, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 20 },
        }}),
        // Method 'setVideoOnlyMode'
        QtMocHelpers::MethodData<void(bool)>(109, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 110 },
        }}),
        // Method 'userCommand'
        QtMocHelpers::MethodData<void(QString)>(111, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 112 },
        }}),
        // Method 'setVideoRectangle'
        QtMocHelpers::MethodData<void(int, int, int, int)>(113, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 114 }, { QMetaType::Int, 115 }, { QMetaType::Int, 116 }, { QMetaType::Int, 117 },
        }}),
        // Method 'setPlaybackRate'
        QtMocHelpers::MethodData<void(int)>(118, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Method 'getPosition'
        QtMocHelpers::MethodData<qint64()>(119, 2, QMC::AccessPublic, QMetaType::LongLong),
        // Method 'getDuration'
        QtMocHelpers::MethodData<qint64()>(120, 2, QMC::AccessPublic, QMetaType::LongLong),
        // Method 'getWebPlaylist'
        QtMocHelpers::MethodData<QVariantList() const>(121, 2, QMC::AccessPublic, 0x80000000 | 32),
        // Method 'getCurrentWebPlaylistItemId'
        QtMocHelpers::MethodData<QString() const>(122, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'setWebPlaylist'
        QtMocHelpers::MethodData<void(const QVariantList &, const QString &)>(123, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 }, { QMetaType::QString, 34 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlayerComponent, qt_meta_tag_ZN15PlayerComponentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlayerComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlayerComponentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlayerComponentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PlayerComponentE_t>.metaTypes,
    nullptr
} };

void PlayerComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayerComponent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playing(); break;
        case 1: _t->buffering((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->paused(); break;
        case 3: _t->finished(); break;
        case 4: _t->canceled(); break;
        case 5: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->stopped(); break;
        case 7: _t->stateChanged((*reinterpret_cast<std::add_pointer_t<enum State>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum State>>(_a[2]))); break;
        case 8: _t->videoPlaybackActive((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->windowVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->updateDuration((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 11: _t->playbackRateChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->positionUpdate((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1]))); break;
        case 13: _t->onVideoRecangleChanged(); break;
        case 14: _t->onMpvEvents(); break;
        case 15: _t->onMetaData((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 16: _t->webPlaylistChanged((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->shuffleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->repeatChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->fullscreenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->rateChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->queueChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 22: _t->playbackStopped((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->durationChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 24: _t->playbackStateChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->positionChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 26: _t->seekPerformed((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 27: _t->metadataChanged((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 28: _t->volumeChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 29: _t->bufferedRangesUpdated((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 30: _t->updateAudioDeviceList(); break;
        case 31: _t->setAudioConfiguration(); break;
        case 32: _t->setSubtitleConfiguration(); break;
        case 33: _t->setVideoConfiguration(); break;
        case 34: _t->setOtherConfiguration(); break;
        case 35: _t->updateAudioConfiguration(); break;
        case 36: _t->updateSubtitleConfiguration(); break;
        case 37: _t->updateVideoConfiguration(); break;
        case 38: _t->updateConfiguration(); break;
        case 39: _t->handleMpvEvents(); break;
        case 40: _t->onRestoreDisplay(); break;
        case 41: _t->onRefreshRateChange(); break;
        case 42: _t->updateAudioDevice(); break;
        case 43: { bool _r = _t->load((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[5])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->load((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->load((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->queueMedia((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[5]))); break;
        case 47: _t->clearQueue(); break;
        case 48: _t->seekTo((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 49: _t->stop(); break;
        case 50: _t->streamSwitch(); break;
        case 51: _t->pause(); break;
        case 52: _t->play(); break;
        case 53: _t->notifyShuffleChange((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->notifyRepeatChange((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 55: _t->notifyFullscreenChange((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->notifyRateChange((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 57: _t->notifyQueueChange((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 58: _t->notifyPlaybackStop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 59: _t->notifyDurationChange((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 60: _t->notifyPlaybackState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 61: _t->notifyPosition((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 62: _t->notifySeek((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 63: _t->notifyMetadata((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 64: _t->notifyVolumeChange((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 65: _t->setVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 66: { int _r = _t->volume();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 68: { bool _r = _t->muted();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 69: { QVariant _r = _t->getAudioDeviceList();
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setAudioDevice((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 71: _t->setAudioStream((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 72: _t->setSubtitleStream((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 73: _t->setAudioDelay((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 74: _t->setSubtitleDelay((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 75: _t->setVideoOnlyMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 76: _t->userCommand((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 77: _t->setVideoRectangle((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 78: _t->setPlaybackRate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 79: { qint64 _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast<qint64*>(_a[0]) = std::move(_r); }  break;
        case 80: { qint64 _r = _t->getDuration();
            if (_a[0]) *reinterpret_cast<qint64*>(_a[0]) = std::move(_r); }  break;
        case 81: { QVariantList _r = _t->getWebPlaylist();
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 82: { QString _r = _t->getCurrentWebPlaylistItemId();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->setWebPlaylist((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::playing, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(float )>(_a, &PlayerComponent::buffering, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::paused, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::finished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::canceled, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QString & )>(_a, &PlayerComponent::error, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::stopped, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(State , State )>(_a, &PlayerComponent::stateChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(bool )>(_a, &PlayerComponent::videoPlaybackActive, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(bool )>(_a, &PlayerComponent::windowVisible, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(qint64 )>(_a, &PlayerComponent::updateDuration, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(double )>(_a, &PlayerComponent::playbackRateChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(quint64 )>(_a, &PlayerComponent::positionUpdate, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::onVideoRecangleChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)()>(_a, &PlayerComponent::onMpvEvents, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QVariantMap & , QUrl )>(_a, &PlayerComponent::onMetaData, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QVariantList & , const QString & )>(_a, &PlayerComponent::webPlaylistChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(bool )>(_a, &PlayerComponent::shuffleChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QString & )>(_a, &PlayerComponent::repeatChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(bool )>(_a, &PlayerComponent::fullscreenChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(double )>(_a, &PlayerComponent::rateChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(bool , bool )>(_a, &PlayerComponent::queueChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(bool )>(_a, &PlayerComponent::playbackStopped, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(qint64 )>(_a, &PlayerComponent::durationChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QString & )>(_a, &PlayerComponent::playbackStateChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(qint64 )>(_a, &PlayerComponent::positionChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(qint64 )>(_a, &PlayerComponent::seekPerformed, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QVariantMap & )>(_a, &PlayerComponent::metadataChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(double )>(_a, &PlayerComponent::volumeChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerComponent::*)(const QVariantList & )>(_a, &PlayerComponent::bufferedRangesUpdated, 29))
            return;
    }
}

const QMetaObject *PlayerComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlayerComponentE_t>.strings))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int PlayerComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 84;
    }
    return _id;
}

// SIGNAL 0
void PlayerComponent::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerComponent::buffering(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PlayerComponent::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlayerComponent::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerComponent::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlayerComponent::error(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void PlayerComponent::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlayerComponent::stateChanged(State _t1, State _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void PlayerComponent::videoPlaybackActive(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void PlayerComponent::windowVisible(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void PlayerComponent::updateDuration(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void PlayerComponent::playbackRateChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void PlayerComponent::positionUpdate(quint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void PlayerComponent::onVideoRecangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PlayerComponent::onMpvEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PlayerComponent::onMetaData(const QVariantMap & _t1, QUrl _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}

// SIGNAL 16
void PlayerComponent::webPlaylistChanged(const QVariantList & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1, _t2);
}

// SIGNAL 17
void PlayerComponent::shuffleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void PlayerComponent::repeatChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void PlayerComponent::fullscreenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void PlayerComponent::rateChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void PlayerComponent::queueChanged(bool _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1, _t2);
}

// SIGNAL 22
void PlayerComponent::playbackStopped(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void PlayerComponent::durationChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void PlayerComponent::playbackStateChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void PlayerComponent::positionChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1);
}

// SIGNAL 26
void PlayerComponent::seekPerformed(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void PlayerComponent::metadataChanged(const QVariantMap & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}

// SIGNAL 28
void PlayerComponent::volumeChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1);
}

// SIGNAL 29
void PlayerComponent::bufferedRangesUpdated(const QVariantList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}
QT_WARNING_POP
