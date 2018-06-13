
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "PKPaymentServiceDelegate.h"
#import "SBAlertObserver.h"
#import "SBLockScreenViewControllerDelegate.h"
#import "SBPassKitPrearmTriggerDelegate.h"
#import "SBPasscodeEntryAlertViewControllerDelegate.h"
#import "SBUIBiometricEventMonitorDelegate.h"
#import "SBUIBiometricEventObserver.h"

@class NSHashTable, NSMutableSet, NSString, PKPaymentService, SBLockScreenViewControllerBase, SBPassKitPrearmTrigger, SBPasscodeEntryAlertViewController, SBPasscodeLockDisableAssertion;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBLockScreenViewControllerDelegate, SBUIBiometricEventObserver, SBUIBiometricEventMonitorDelegate, PKPaymentServiceDelegate, SBPassKitPrearmTriggerDelegate, SBPasscodeEntryAlertViewControllerDelegate, SBAlertObserver>
{
    SBLockScreenViewControllerBase *_lockScreenViewController;
    _Bool _allowDisablePasscodeLockAssertion;
    _Bool _allowUILockUnlock;
    _Bool _isUILocked;
    _Bool _isWaitingToLockUI;
    _Bool _appRequestedPasscodeEntry;
    _Bool _uiHasBeenLockedOnce;
    _Bool _uiUnlocking;
    SBPasscodeEntryAlertViewController *_passcodeEntryController;
    SBPasscodeLockDisableAssertion *_disablePasscodeLockWhileUIUnlockedAssertion;
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
    NSHashTable *_disableUnlockAssertions;
    _Bool _isInLostMode;
    unsigned long long _failedMesaUnlockAttempts;
    _Bool _bioAuthenticatedWhileMenuButtonDown;
    NSMutableSet *_bioUnlockingDisabledRequesters;
    SBPassKitPrearmTrigger *_prearmTrigger;
    _Bool _presentingPassKitInterface;
    _Bool _justDismissedPassKitInterface;
    PKPaymentService *_paymentService;
    _Bool _didMatchBeforeTriggerTimeout;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
- (void)alertDidDeactivate:(id)arg1;
- (_Bool)passcodeEntryAlertViewController:(id)arg1 authenticatePasscode:(id)arg2;
- (void)paymentServiceReceivedInterruption;
- (void)contactlessInterfaceDidDismissForPassesWithUniqueIdentifiers:(id)arg1 fromSource:(long long)arg2;
- (void)_handlePassKitDismissal;
- (void)setBioUnlockingDisabled:(_Bool)arg1 forRequester:(id)arg2;
- (void)_frontmostDisplayChanged:(id)arg1;
- (void)_lockScreenDimmed:(id)arg1;
- (void)_bioAuthenticated:(id)arg1;
- (_Bool)biometricEventMonitorShouldRelockAfterBioUnlock:(id)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (void)triggerDidFire:(id)arg1;
- (void)triggerDidTimeoutForDoubleTap:(id)arg1;
- (void)triggerDidTimeoutForFingerOn:(id)arg1;
- (_Bool)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_maybeLaunchBuddyForcingCheckIfNotBricked:(_Bool)arg1;
- (void)activationChanged:(id)arg1;
- (void)enableLostModePlugin;
- (_Bool)isInLostMode;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(_Bool)arg1;
- (void)activateLostModeForRemoteLock:(_Bool)arg1;
- (void)_lockFeaturesForRemoteLock:(_Bool)arg1;
- (void)remoteLock:(_Bool)arg1;
- (void)_resetOrRestoreStateChanged:(id)arg1;
- (void)_deviceBlockedChanged:(id)arg1;
- (void)_deviceLockedChanged:(id)arg1;
- (_Bool)attemptUnlockWithPasscode:(id)arg1;
- (_Bool)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(_Bool)arg2;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)_postLockCompletedNotification:(_Bool)arg1;
- (void)_removeDisableUnlockAssertion:(id)arg1;
- (void)_addDisableUnlockAssertion:(id)arg1;
- (void)_noteStartupTransitionDidBegin;
- (void)_noteStartupTransitionWillBegin;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (_Bool)applicationRequestedDeviceUnlockWithCompletion:(id)arg1;
- (_Bool)isLockScreenDisabledForAssertion;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (void)_handleExternalUIUnlock:(id)arg1;
- (void)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (_Bool)_shouldAutoUnlockFromUnlockSource:(int)arg1;
- (void)_sendUILockStateChangedNotification;
- (void)_lockUI;
- (void)_reallySetUILocked:(_Bool)arg1;
- (void)_setUILocked:(_Bool)arg1;
- (void)_createDisablePasscodeLockAssertion;
- (void)_clearDisablePasscodeLockAssertion;
- (void)_relockUIForButtonPress:(_Bool)arg1 afterCall:(_Bool)arg2;
- (void)_activateLockScreenAnimated:(_Bool)arg1 automatically:(_Bool)arg2 inScreenOffMode:(_Bool)arg3 dimInAnimation:(_Bool)arg4 dismissNotificationCenter:(_Bool)arg5;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;
@property(readonly) _Bool shouldHandlePocketStateChanges;
- (_Bool)shouldLockUIAfterEndingCall;
- (_Bool)_shouldLockAfterEndingFaceTimeCall;
- (_Bool)_shouldLockAfterEndingTelephonyCall;
- (_Bool)hasUIEverBeenLocked;
- (id)_newLockScreenController;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

