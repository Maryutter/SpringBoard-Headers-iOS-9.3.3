
#import "NSObject.h"

@class BBBulletin, NSDictionary, NSString, NSURL, SBAlertItem, SBAwayViewPluginController, SBUIFullscreenAlertController, UIView, UIView<SBUIProgressiveBlur>;

@protocol SBUIUserAgent <NSObject>
- (NSString *)topSuspendedEventsOnlyDisplayID;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (NSString *)folderNameForDisplayID:(NSString *)arg1;
- (UIView<SBUIProgressiveBlur> *)searchBackdropView;
- (UIView *)searchBlurEffectView;
- (void)setWallpaperTunnelActive:(_Bool)arg1 forFullscreenAlertController:(SBUIFullscreenAlertController *)arg2;
- (void)disableLockScreenBundleNamed:(NSString *)arg1 deactivationContext:(NSDictionary *)arg2;
- (void)enableLockScreenBundleNamed:(NSString *)arg1 activationContext:(NSDictionary *)arg2;
- (_Bool)isNamedRemoteAlertServiceActive:(NSString *)arg1 controllerClassName:(NSString *)arg2;
- (void)activateRemoteAlertService:(NSString *)arg1 options:(NSDictionary *)arg2 activationHandler:(void (^)(_Bool))arg3 deactivationHandler:(void (^)(_Bool))arg4;
- (void)activateRemoteAlertService:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(_Bool)arg2;
- (void)notifyOnNextUserEvent;
- (void)removeActiveInterfaceOrientationObserver:(id <SBUIActiveOrientationObserver>)arg1;
- (void)addActiveInterfaceOrientationObserver:(id <SBUIActiveOrientationObserver>)arg1;
- (void)activateModalBulletinAlert:(SBAlertItem *)arg1;
- (id <SBBulletinAlertHandlerRegistry>)modalBulletinAlertHandlerRegistry;
- (_Bool)launchDisplayWithURL:(NSURL *)arg1 forCall:(_Bool)arg2 sender:(id)arg3;
- (void)prepareToAnswerCall;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(NSString *)arg2;
- (void)setIdleText:(NSString *)arg1;
- (_Bool)isScreenOn;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1 andDimScreen:(_Bool)arg2;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1;
- (void)lockAndDimDevice;
- (_Bool)isIdleTimerDisabledForReason:(NSString *)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)undimScreen;
- (void)dimScreen:(_Bool)arg1;
- (void)updateLockScreenInterfaceIfNecessary;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(SBAwayViewPluginController *)arg1;
- (void)adjustLockScreenContentByOffset:(double)arg1 forAwayViewPlugin:(SBAwayViewPluginController *)arg2 withAnimationDuration:(double)arg3;
- (struct CGRect)defaultContentRegionForAwayViewPlugin:(SBAwayViewPluginController *)arg1 withOrientation:(long long)arg2;
- (_Bool)launchFromAwayViewPluginWithURL:(NSURL *)arg1 bundleID:(NSString *)arg2 allowUnlock:(_Bool)arg3 animate:(_Bool)arg4;
- (_Bool)canLaunchFromAwayViewPluginWithURL:(NSURL *)arg1 bundleID:(NSString *)arg2;
- (_Bool)launchFromSource:(int)arg1 withURL:(NSURL *)arg2 bundleID:(NSString *)arg3 allowUnlock:(_Bool)arg4;
- (_Bool)launchFromPushOrLocalBulletin:(BBBulletin *)arg1 actionIdentifier:(NSString *)arg2 userResponse:(NSDictionary *)arg3 origin:(int)arg4;
- (_Bool)launchFromBulletinWithURL:(NSURL *)arg1 bundleID:(NSString *)arg2 allowUnlock:(_Bool)arg3 animate:(_Bool)arg4 launchOrigin:(int)arg5;
- (_Bool)canLaunchFromBulletinWithURL:(NSURL *)arg1 bundleID:(NSString *)arg2;
- (_Bool)launchApplicationFromSource:(int)arg1 withURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (_Bool)launchApplicationFromSource:(int)arg1 withDisplayID:(NSString *)arg2 options:(NSDictionary *)arg3;
- (_Bool)canLaunchFromSource:(int)arg1 withURL:(NSURL *)arg2 bundleID:(NSString *)arg3;
- (void)openURL:(NSURL *)arg1 animateIn:(_Bool)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(_Bool)arg6;
- (_Bool)openURL:(NSURL *)arg1 allowUnlock:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)canUserLaunchIcon;
- (_Bool)alertIsActive;
- (_Bool)springBoardIsActive;
- (int)networkUsageTypeForAppWithDisplayID:(NSString *)arg1;
- (_Bool)lockScreenIsShowing;
- (_Bool)deviceIsTethered;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsPasscodeLockedRemotely;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsLocked;
- (_Bool)applicationInstalledForDisplayID:(NSString *)arg1;
- (_Bool)isApplicationForegroundObscured:(NSString *)arg1;
- (NSString *)localizedDisplayNameForDisplayID:(NSString *)arg1;
- (NSString *)foregroundDisplayID;
- (NSString *)foregroundApplicationDisplayID;
- (long long)activeInterfaceOrientation;
- (void)updateInterfaceOrientationIfNecessary;
@end

