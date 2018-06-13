
#import "NSObject.h"

@class NSTimer, SBAppStatusBarSettingsAssertion, SBPasscodeLockDisableAssertion;

@interface SBSyncController : NSObject
{
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    _Bool _showingResetUI;
    _Bool _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBPasscodeLockDisableAssertion *_disableDeviceLockAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _isAppSyncing;
    _Bool _inExtendedAppSyncCoalescePeriod;
}

+ (id)sharedInstance;
- (void)_appInstallationNotification;
- (void)_setupRestoreTimer;
- (void)_restoreTimerFired:(id)arg1;
- (_Bool)_isBackupAgentRunning;
- (void)_invalidateRestoreTimer;
- (void)_didEndResetting;
- (void)_delayedBeginReset;
- (void)_updateProgress;
- (void)_delayedQuitApplications;
- (void)_didEndRestoring:(int)arg1;
- (void)_finishEndRestoring;
- (void)_rebootNow;
- (void)_killApplications;
- (void)_notifyRestoreCanProceed;
- (void)_syncSessionDidEnd;
- (void)_syncSessionDidBegin;
- (void)_setRestoreState:(int)arg1;
- (void)_resetEnded:(id)arg1;
- (void)_resetStarted:(id)arg1;
- (void)_wirelessSyncEnded:(id)arg1;
- (void)_wirelessSyncBegan:(id)arg1;
- (_Bool)isInUse;
- (void)beginResetting:(_Bool)arg1;
- (int)resetState;
- (_Bool)isResetting;
- (void)cancelRestoring;
- (void)beginRestoring;
- (int)restoreState;
- (_Bool)isRestoring;
- (void)finishedTerminatingApplications;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end

