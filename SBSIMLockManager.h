
#import "NSObject.h"

@class NSString, SBSIMLockAlertItem, SBSIMLockEntryAlert;

@interface SBSIMLockManager : NSObject
{
    _Bool _isBrickedDevice;
    long long _status;
    SBSIMLockAlertItem *_currentAlert;
    SBSIMLockEntryAlert *_lockEntryAlert;
    NSString *_languageCode;
    _Bool _hasHadSIMWhileNotBricked;
    _Bool _wasActivated;
    _Bool _neededUIM;
}

+ (id)sharedInstance;
- (id)languageCode;
- (long long)status;
- (void)registerForAlerts;
- (void)_postponementDidChange;
- (void)_telephonyDidRestart;
- (void)_activationDidChange;
- (void)_externalSIMStatusChanged:(id)arg1;
- (int)pukLockAttemptsRemaining;
- (int)pinLockAttemptsRemaining;
- (void)_updateSIMStatus:(struct __CFString *)arg1 withOptions:(struct __CFDictionary *)arg2;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_handlePromptForUnlock;
- (void)airplaneModeChanged;
- (void)_tryToUpdateStatus;
- (void)_updateToStatus:(long long)arg1;
- (void)attemptUnlock;
- (void)repopAlert;
- (void)_setupAppActivationStateDidChange:(id)arg1;
- (_Bool)_shouldSuppressAlert;
- (void)alertItemDismissed:(id)arg1;
- (void)lockEntryAlertDismissed:(id)arg1;
- (long long)_statusFromCT;
- (long long)_CTToSBSIMStatus:(struct __CFString *)arg1;
- (void)dealloc;
- (id)init;

@end

