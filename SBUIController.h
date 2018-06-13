
#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBTouchTemplateGestureRecognizerDelegate.h"
#import "SBWallpaperObserver.h"
#import "UIWindowDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSCountedSet, NSString, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBHomeScreenWindow, SBIconContentView, SBScrunchAppsSystemGestureWorkspaceTransaction, SBScrunchSystemGestureRecognizer, SBSwitchAppList, SBSwitchAppSystemGestureRecognizer, SBSwitchAppSystemGestureWorkspaceTransaction, SBSwitcherForcePressSystemGestureRecognizer, SBSwitcherSlideUpSystemGestureRecognizer, UIStatusBar, UIView;

@interface SBUIController : NSObject <SBWallpaperObserver, _UISettingsKeyObserver, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, UIWindowDelegate>
{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    UIStatusBar *_fakeSpringBoardStatusBar;
    unsigned int _ignoringEvents:1;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    id _volumeHandler;
    float _batteryCapacity;
    _Bool _supportsDetailedBatteryCapacity;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    SBScrunchSystemGestureRecognizer *_scrunchSystemGestureRecognizer;
    SBScrunchAppsSystemGestureWorkspaceTransaction *_scrunchAppsTransaction;
    SBSwitcherSlideUpSystemGestureRecognizer *_switcherSlideUpGestureRecognizer;
    SBSwitcherForcePressSystemGestureRecognizer *_switcherForcePressRecognizer;
    SBSwitchAppSystemGestureWorkspaceTransaction *_switchAppTransaction;
    SBSwitchAppSystemGestureRecognizer *_switchAppSystemGestureRecognizer;
    SBSwitchAppList *_switchAppList;
    long long _ignoreSwitchAppListClearRequests;
    _Bool _handlingHomePress;
    NSCountedSet *_contentRequiringReasons;
    _Bool _wasTornDownWhenBeganRequiring;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_legibilityPrototypeSettings;
- (id)_currentFolderLegibilitySettings;
- (id)_legibilitySettings;
- (void)updateStatusBarLegibility;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)programmaticSwitchAppGestureMoveToRight;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)_programmaticSwitchAppToApp:(id)arg1 reverseAnimation:(_Bool)arg2;
- (_Bool)_isIgnoringSwitchAppListClearRequests;
- (void)_endIgnoringSwitchAppListClearRequests;
- (void)_beginIgnoringSwitchAppListClearRequests;
- (void)clearSwitchAppList;
- (id)_switchAppList;
- (void)_switchAppGestureBegan:(double)arg1;
- (void)_handleSwitchAppGesture:(id)arg1;
- (_Bool)_switchAppSystemGestureShouldBegin:(id)arg1;
- (void)_handleSwitcherForcePressGesture:(id)arg1;
- (_Bool)_appSwitcherForcePressSystemGestureShouldBegin:(id)arg1;
- (void)_handleSwitcherSlideUpGesture:(id)arg1;
- (_Bool)_appSwitcherSystemGestureShouldBegin:(id)arg1;
- (void)_scrunchGestureBegan;
- (void)_handleScrunchGesture:(id)arg1;
- (_Bool)_scrunchSystemGestureShouldBegin:(id)arg1;
- (unsigned char)headsetBatteryCapacity;
- (_Bool)isHeadsetBatteryCharging;
- (_Bool)isHeadsetDocked;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)forceIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (_Bool)supportsDetailedBatteryCapacity;
- (_Bool)isConnectedToUnsupportedChargingAccessory;
- (void)setIsConnectedToUnsupportedChargingAccessory:(_Bool)arg1;
- (void)externalChargingAccessoriesChanged;
- (void)ACPowerChanged;
- (void)_possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (_Bool)isConnectedToChargeIncapablePowerSource;
- (_Bool)isConnectedToExternalChargingSource;
- (_Bool)isOnAC;
- (_Bool)isBatteryCharging;
- (int)batteryCapacityAsPercentage;
- (float)batteryCapacity;
- (void)updateBatteryState:(id)arg1;
- (void)cancelVolumeEvent;
- (void)handleVolumeEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_ignoringEvents;
- (void)_resumeEventsIfNecessary;
- (void)requestApplicationEventsEnabledIfNecessary;
- (void)_ignoreEvents;
- (_Bool)_allowSwitcherGesture;
- (_Bool)isAppSwitcherShowing;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (_Bool)handleMenuDoubleTap;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_awayControllerActivated:(id)arg1;
- (_Bool)clickedMenuButton;
- (_Bool)isHandlingHomeButtonPress;
- (_Bool)_handleButtonEventToSuspendDisplays:(_Bool)arg1 displayWasSuspendedOut:(_Bool *)arg2;
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
- (void)_switchToHomeScreenWallpaperAnimated:(_Bool)arg1;
- (void)stopRestoringIconList;
- (void)endRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1;
- (_Bool)_isIconListAndBarTornDown;
- (void)tearDownIconListAndBar;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(id)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 withCompletion:(id)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1;
- (void)restoreContentUpdatingStatusBar:(_Bool)arg1;
- (void)restoreContent;
- (void)_closeOpenFolderIfNecessary;
- (void)_hideKeyboard;
- (void)_deviceLockStateChanged:(id)arg1;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(int)arg3;
- (void)activateApplication:(id)arg1;
- (id)alertItemForPreventingLaunchOfApp:(id)arg1;
- (void)launchIcon:(id)arg1 fromLocation:(int)arg2 context:(id)arg3;
- (void)getRotationContentSettings:(id *)arg1 forWindow:(id)arg2;
- (id)window;
- (id)contentView;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(_Bool)arg1;
- (id)_fakeSpringBoardStatusBar;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (_Bool)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (_Bool)promptUnlockForAppActivation:(id)arg1 withCompletion:(id)arg2;
- (void)_setHidden:(_Bool)arg1;
- (void)_addRemoveSwitcherGesture;
- (id)init;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

