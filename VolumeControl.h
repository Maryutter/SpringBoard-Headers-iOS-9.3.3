
#import "NSObject.h"

@class NSMutableSet, NSString;

@interface VolumeControl : NSObject
{
    _Bool _debounce;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    int _mode;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastDisplayedCategory;
    NSString *_lastEventCategory;
    _Bool _hudHandledLastVolumeChange;
    _Bool _euDevice;
    float _euVolumeLimit;
    _Bool _euVolumeLimitEnforced;
    _Bool _lastVolumeChangedWasBlocked;
    _Bool _volumeDownButtonIsDown;
    _Bool _volumeUpButtonIsDown;
}

+ (id)sharedVolumeControl;
- (float)getMediaVolume;
- (void)setMediaVolume:(float)arg1;
- (void)sendEUVolumeLimitAcknowledgementIfNecessary;
- (void)_EUVolumeEnforcementChanged:(id)arg1;
- (void)_EUVolumeLimitChanged:(id)arg1;
- (_Bool)_isVolumeHUDVisibleOrFading;
- (_Bool)_isVolumeHUDVisible;
- (void)hideVolumeHUDIfVisible;
- (id)volumeHUDForCurrentCategory;
- (void)_presentVolumeHUDWithMode:(int)arg1 volume:(float)arg2;
- (id)_volumeHUDViewWithMode:(int)arg1 volume:(float)arg2;
- (_Bool)headphonesPresent;
- (void)_effectiveVolumeChanged:(id)arg1;
- (int)_volumeModeForCategory:(id)arg1;
- (void)_serverConnectionDied:(id)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_registerForAVSystemControllerNotifications;
- (void)cancelVolumeEvent;
- (void)handleVolumeEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_turnOnScreenIfNecessaryForEULimit:(_Bool)arg1;
- (id)lastDisplayedCategory;
- (void)decreaseVolume;
- (void)increaseVolume;
- (float)_calcButtonRepeatDelay;
- (void)_changeVolumeBy:(float)arg1;
- (_Bool)_isMusicPlayingSomewhere;
- (void)_userAcknowledgedEUEnforcement;
- (float)volume;
- (void)toggleMute;
- (_Bool)_HUDIsDisplayableForCategory:(id)arg1;
- (_Bool)_isCategoryAlwaysHidden:(id)arg1;
- (void)clearAlwaysHiddenCategories;
- (void)removeAlwaysHiddenCategory:(id)arg1;
- (void)addAlwaysHiddenCategory:(id)arg1;
- (void)dealloc;
- (void)_initializeEUVolumeLimits;
- (id)init;
- (float)volumeStepDown;
- (float)volumeStepUp;

@end

