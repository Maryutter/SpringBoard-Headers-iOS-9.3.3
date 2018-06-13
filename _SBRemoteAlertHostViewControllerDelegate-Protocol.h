
#import "NSObject.h"

@class NSError, NSString;

@protocol _SBRemoteAlertHostViewControllerDelegate <NSObject>
- (void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(long long)arg1;
- (void)remoteAlertWantsToLockUIAndDismiss;
- (void)remoteAlertWantsToDisableFadeInAnimation:(_Bool)arg1;
- (void)remoteAlertWantsToDismissOnUILock:(_Bool)arg1;
- (void)remoteAlertWantsToSetStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsToSetAutoLockDuration:(double)arg1;
- (void)remoteAlertWantsToSetIdleTimerDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1;
- (void)remoteAlertWantstoSetDismissalAnimationStyle:(long long)arg1;
- (void)remoteAlertWantsToAllowAlertStacking:(_Bool)arg1;
- (void)remoteAlertWantsMenuButtonDismissal:(_Bool)arg1;
- (void)remoteAlertWantsToSetBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsWallpaperTunnelActive:(_Bool)arg1;
- (void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(long long)arg1;
- (void)remoteAlertWantsToAllowBanners:(_Bool)arg1;
- (void)remoteAlertDidTerminateWithError:(NSError *)arg1;
- (void)remoteAlertDidRequestDismissal;
@end

