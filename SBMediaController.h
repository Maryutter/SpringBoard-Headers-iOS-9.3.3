
#import "NSObject.h"

#import "MPAVRoutingControllerDelegate.h"

@class MPAVRoutingController, NSDate, NSDictionary, NSString, NSTimer, SBApplication, SBSStatusBarStyleOverridesAssertion;

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate>
{
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    _Bool _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    int _lastNowPlayingAppPID;
    _Bool _lastNowPlayingAppIsPlaying;
    _Bool _suppressHUD;
    _Bool _ringerMuted;
    _Bool _screenSharing;
    _Bool _screenSharingSetsStatusBarOverride;
    NSTimer *_screenSharingStatusBarOverrideTimer;
    NSTimer *_videoOutStatusBarOverrideTimer;
    MPAVRoutingController *_routingController;
    void *_currentApplicationActivity;
    NSDate *_currentApplicationActivityLastChangedDate;
    SBSStatusBarStyleOverridesAssertion *_screenSharingStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_videoOutStatusBarStyleOverrideAssertion;
    int _nowPlayingProcessPID;
}

+ (void)sendResetPlaybackTimeoutCommand;
+ (_Bool)applicationCanBeConsideredNowPlaying:(id)arg1;
+ (id)sharedInstance;
- (void)_updateCurrentApplicationActivityLastChangedDate;
- (void)_commitVolumeChange:(id)arg1;
- (void)_cancelPendingVolumeChange;
- (void)_applicationActivityStatusDidChange:(id)arg1;
- (void)_nowPlayingAppIsPlayingDidChange;
- (void)_nowPlayingPIDChanged;
- (void)_nowPlayingInfoChanged;
- (void)_systemMuteChanged:(id)arg1;
- (void)_softMuteChanged:(id)arg1;
- (void)_systemVolumeChanged:(id)arg1;
- (void)_externalScreenChanged:(id)arg1;
- (void)_updateAVRoutes;
- (void)_serverConnectionDied:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (id)nameOfPickedRoute;
- (_Bool)isScreenSharing;
- (_Bool)routeOtherThanHandsetIsAvailable;
- (_Bool)volumeControlIsAvailable;
- (_Bool)handsetRouteIsSelected;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)handleVolumeEvent:(struct __IOHIDEvent *)arg1;
- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)increaseVolume;
- (float)_calcButtonRepeatDelay;
- (void)_changeVolumeBy:(float)arg1;
- (_Bool)lastSavedRingerMutedState;
@property(nonatomic, getter=isRingerMuted) _Bool ringerMuted;
- (_Bool)muted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (_Bool)setPlaybackSpeed:(int)arg1;
- (_Bool)toggleShuffle;
- (_Bool)toggleRepeat;
- (_Bool)skipFifteenSeconds:(int)arg1;
- (_Bool)stop;
- (_Bool)togglePlayPause;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)endSeek:(int)arg1;
- (_Bool)beginSeek:(int)arg1;
- (_Bool)changeTrack:(int)arg1;
- (_Bool)_sendMediaCommand:(unsigned int)arg1;
- (void)_startVideoOutStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)updateScreenSharingStatusBarStyleOverrideSuppressionPreference;
- (void)_clearScreenSharingStatusBarStyleOverride;
@property _Bool suppressHUD;
@property(readonly, nonatomic) __weak SBApplication *nowPlayingApplication;
- (_Bool)addTrackToWishList;
- (_Bool)likeTrack;
- (_Bool)banTrack;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isLastTrack;
- (_Bool)isFirstTrack;
- (_Bool)hasTrack;
- (void)setNowPlayingInfo:(id)arg1;
- (id)_nowPlayingInfo;
- (_Bool)applicationActivityRecentlyEnded;
- (_Bool)applicationActivityIsActive;
- (void)setCurrentApplicationActivity:(void *)arg1;
- (void *)copyCurrentApplicationActivity;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

