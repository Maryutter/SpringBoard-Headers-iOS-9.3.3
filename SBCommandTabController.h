
#import "NSObject.h"

#import "SBCommandTabViewControllerDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSString, NSTimer, SBCommandTabViewController, SBWindow;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate>
{
    SBCommandTabViewController *_commandTabViewController;
    NSTimer *_timer;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBWindow *_window;
}

+ (id)keyCommands;
+ (id)sharedInstance;
- (void)_clearTimer;
- (void)_showWindow:(_Bool)arg1;
- (void)_showCommandTabBarAfterTimer:(id)arg1;
- (void)_activateWithForwardDirection:(_Bool)arg1;
- (void)viewControllerWantsDismissal:(id)arg1;
- (void)viewController:(id)arg1 selectedApplicationWithBundleID:(id)arg2;
- (void)launchCurrentSelectedApplication;
- (void)previous;
- (void)next;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)dismiss;
- (void)activateWithKeyCommand:(id)arg1;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

