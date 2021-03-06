
#import "NSObject.h"

#import "CMPocketStateDelegate.h"

@class CMPocketStateManager, NSMutableSet, NSString, NSTimer;

@interface SBBacklightController : NSObject <CMPocketStateDelegate>
{
    double _minimumLockIdleTime;
    NSTimer *_autoLockTimer;
    double _lastTimeIdleCausedDim;
    double _nextLockDurationAfterDim;
    unsigned int _disableAutoDimming:1;
    NSMutableSet *_idleTimerDisabledReasons;
    CMPocketStateManager *_pocketStateManager;
    long long _pocketStateType;
    _Bool _isPendingScreenUnblankAfterCACommit;
    _Bool _undimmedForBulletinSinceLastUserEvent;
    _Bool _allowIdleTimerToBeReset;
}

+ (_Bool)deviceSupportsBacklightRamping;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)_batterySaverModeDidChange:(id)arg1;
- (void)_startAllowingIdleTimer;
- (void)_requestedUserEventNotificationOccurred;
- (void)_userEventPresenceTimerExpired;
- (void)_userEventOccurred;
- (void)_userEventsDidIdle;
- (void)_lockScreenDimTimerFired;
- (void)_didIdle;
- (void)_autoLockTimerFired:(id)arg1;
- (void)_startFadeOutAnimationIfNecessary;
- (_Bool)_lockScreenWantsUserEventNotifications;
- (void)reloadDefaults;
- (void)autoLockPrefsChanged;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 silently:(_Bool)arg4 completion:(id)arg5;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 completion:(id)arg4;
- (void)setBacklightFactor:(float)arg1 source:(int)arg2;
- (_Bool)shouldTurnOnScreenForBacklightSource:(int)arg1;
- (void)setBacklightFactorPending:(float)arg1;
- (id)idleTimerDisabledReasons;
@property(readonly, nonatomic) _Bool screenIsOn;
- (void)_deferredScreenUnblankDone;
- (void)turnOnScreenFullyWithBacklightSource:(int)arg1;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (double)defaultLockScreenDimInterval;
- (void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2;
- (void)resetLockScreenIdleTimerWithDuration:(double)arg1;
- (void)resetLockScreenIdleTimer;
- (void)cancelLockScreenIdleTimer;
- (double)_currentLockScreenIdleTimerInterval;
- (void)adjustIdleLockDuration:(double *)arg1 idleDimDuration:(double *)arg2;
- (void)_resetIdleTimerAndUndim:(_Bool)arg1 source:(int)arg2;
- (void)resetIdleTimerAndUndimForBulletin;
- (void)resetIdleTimerAndUndim:(_Bool)arg1;
- (void)_undimFromSource:(int)arg1;
- (double)_nextLockTimeDuration;
- (double)_nextIdleTimeDuration;
- (void)clearIdleTimer;
- (void)restoreBacklightFactorForProx;
- (void)setBacklightFactorToZeroForProx;
- (void)_cancelSetBacklightFactorToZeroAfterDelay;
- (void)_setBacklightFactorToZeroForProx;
- (void)_clearAutoLockTimer;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

