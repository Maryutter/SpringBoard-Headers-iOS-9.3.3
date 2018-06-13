
#import "UIViewController.h"

#import "SBReachabilityObserver.h"
#import "SPUISearchPluginWrapperInterface.h"
#import "SPUISearchViewControllerPresentation.h"
#import "UIGestureRecognizerDelegate.h"

@class FBDisplayLayoutElement, NSString, SBSearchBackdropView, SPUINavigationController, SPUISearchViewController, UIGestureRecognizer;

@interface SBSearchViewController : UIViewController <SBReachabilityObserver, UIGestureRecognizerDelegate, SPUISearchViewControllerPresentation, SPUISearchPluginWrapperInterface>
{
    SBSearchBackdropView *_searchBackdrop;
    SPUINavigationController *_searchNavigationController;
    SPUISearchViewController *_searchViewController;
    FBDisplayLayoutElement *_displayLayoutElement;
    _Bool _isDisplayLayoutElementActive;
    _Bool _needsStatusBarLayoutLayer;
    _Bool _needsFakeStatusBarForModalPresentation;
    _Bool _isPresenting;
    UIGestureRecognizer *_dismissReachabilityGesture;
}

+ (id)sharedInstance;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissReachability:(id)arg1;
- (void)handleCancelReachabilityGesture;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (_Bool)reachabilitySupported;
- (_Bool)reachabilityModeActive;
- (void)willBeginDismissing:(_Bool)arg1;
- (void)didFinishPresenting:(_Bool)arg1;
- (void)updatePresentationProgress:(double)arg1;
- (void)willBeginPresentingAnimated:(_Bool)arg1 fromSource:(unsigned long long)arg2;
- (void)willBeginPresentingAnimated:(_Bool)arg1;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(id)arg2;
- (void)dismiss;
- (_Bool)_hasResults;
@property(readonly, nonatomic, getter=isFadingOut) _Bool fadingOut;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)_searchViewControllerProxy;
- (id)searchViewController;
@property(nonatomic, getter=isDisplayLayoutElementActive) _Bool displayLayoutElementActive;
@property(nonatomic) _Bool needsFakeStatusBarForModalPresentation;
@property(nonatomic) _Bool needsStatusBarLayoutLayer;
- (void)searchViewControllerWillTriggerLaunch;
- (id)displayNameForApplicationWithBundleIdentifier:(id)arg1;
- (void)requestGestureResetAnimated:(_Bool)arg1;
- (double)_accessibilityActivationAnimationStartDelay;
@property(nonatomic) unsigned long long presentsFromEdge;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

