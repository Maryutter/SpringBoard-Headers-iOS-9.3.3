
#import "SBLockScreenViewControllerBase.h"

#import "SBLockScreenBatteryChargingViewControllerDelegate.h"
#import "SBLoginAppSceneHosterDelegate.h"
#import "SBWallpaperObserver.h"

@class NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBLockScreenBatteryChargingViewController, SBLockScreenDeviceInformationTextViewController, SBLockScreenTemperatureWarningViewController, SBLoginAppContainerPluginWrapperViewController, SBWallpaperController;

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase <SBLockScreenBatteryChargingViewControllerDelegate, SBLoginAppSceneHosterDelegate, SBWallpaperObserver>
{
    id <SBLoginAppSceneHoster> _sceneHoster;
    SBLockScreenBatteryChargingViewController *_batteryChargingViewController;
    SBLockScreenTemperatureWarningViewController *_thermalWarningViewController;
    SBLoginAppContainerPluginWrapperViewController *_pluginWrapperViewController;
    SBLockScreenDeviceInformationTextViewController *_deviceInformationViewController;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_showStatusBarReasons;
    long long _idleTimerMode;
    SBWallpaperController *_wallpaperController;
}

- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)_removeDeviceInformationTextView;
- (void)_addDeviceInformationTextView;
- (void)_showOrHideThermalTrapUIAnimated:(_Bool)arg1;
- (void)chargingViewControllerFadedOutContent:(id)arg1;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1;
- (void)_fadeViewsForChargingViewVisible:(_Bool)arg1;
- (void)_updateBatteryChargingViewAnimated:(_Bool)arg1;
- (void)_removeBatteryChargingView;
- (void)_addBatteryChargingView;
- (void)_handlePluginDisabled:(id)arg1;
- (void)_handleBacklightFadeEnded;
- (void)sceneUpdatedRotationMode:(long long)arg1;
- (void)sceneUpdatedStatusBarUserName:(id)arg1;
- (void)sceneUpdatedIdleTimerMode:(long long)arg1;
- (void)sceneDeactivatedWithError:(id)arg1;
- (void)_setupLoginScene;
- (void)_reallyRelinquishStatusBarAssertion;
- (void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(_Bool)arg1;
- (void)_hideStatusBarForReason:(id)arg1;
- (void)_showStatusBarForReason:(id)arg1;
- (id)_statusBarSettingsAssertion;
- (id)_hostedSceneIdentifier;
- (id)_hostedAppView;
- (id)_hostedAppBundleID;
- (void)_killLoginApp;
- (void)_setupLoginAppHosting;
- (_Bool)suppressesControlCenter;
- (_Bool)showsSpringBoardStatusBar;
- (_Bool)hasTranslucentBackground;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)deactivate;
- (void)activate;
- (_Bool)shouldDisableALS;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)isSystemGesturePermittedForPresentingController:(id)arg1;
- (_Bool)handleMenuButtonDoubleTap;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (_Bool)wantsLockScreenIdleTimer;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)noteDeviceBlockedStatusUpdated;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (_Bool)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (_Bool)canBeUIUnlocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)loginContainerView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 sceneHoster:(id)arg3 wallpaperController:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_initWithSceneHoster:(id)arg1 wallpaperController:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

