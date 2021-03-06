
#import "_UIRemoteViewController.h"

#import "SBUIRemoteAlertHostInterface.h"

@class NSString;

@interface _SBRemoteAlertHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface>
{
    id <_SBRemoteAlertHostViewControllerDelegate> _delegate;
    NSString *_serviceClassName;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
- (void)setShouldDisableFadeInAnimation:(_Bool)arg1;
- (void)setShouldDismissOnUILock:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setAllowsAlertStacking:(_Bool)arg1;
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)setDesiredHardwareButtonEvents:(long long)arg1;
- (void)dismissAndLockUIIfNecessary;
- (void)dismiss;
- (void)setAllowsBanners:(_Bool)arg1;
- (id)description;

@end

