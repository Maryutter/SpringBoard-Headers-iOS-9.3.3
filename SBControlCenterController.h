
#import "UIViewController.h"

#import "SBControlCenterViewControllerDelegate.h"
#import "SBCoordinatedPresenting.h"
#import "SBSystemGestureRecognizerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBDisplayLayoutElement, FBUIApplicationSceneDeactivationAssertion, NSHashTable, NSMutableSet, NSSet, NSString, SBChevronView, SBControlCenterRootView, SBControlCenterViewController, SBScreenEdgePanGestureRecognizer, SBWindow, UIDynamicAnimator, UIImageView, UIView, _UIBackdropView, _UIDynamicValueAnimation;

@interface SBControlCenterController : UIViewController <SBControlCenterViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBCoordinatedPresenting>
{
    SBWindow *_window;
    SBControlCenterRootView *_rootView;
    SBControlCenterViewController *_viewController;
    UIImageView *_coveredContentSnapshot;
    UIView *_fullScreenGrabberContainer;
    _UIBackdropView *_fullScreenGrabberBackdrop;
    SBChevronView *_fullScreenChevron;
    SBScreenEdgePanGestureRecognizer *_controlCenterGestureRecognizer;
    double _controlCenterGestureStartTime;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSMutableSet *_preventDismissalOnLockReasons;
    _Bool _uiLocked;
    NSHashTable *_observers;
    long long _orientation;
    _Bool _animatingInitialPresentation;
    _Bool _gotFirstBackdropUpdate;
    _Bool _completingTransitionOpen;
    _UIDynamicValueAnimation *_bounceAnimation;
    UIDynamicAnimator *_animator;
    unsigned long long _animatorStopCount;
    struct CGRect _animatorStopFrame;
    _Bool _presented;
    _Bool _inGrabberOnlyMode;
    _Bool _transitioning;
    _Bool _fullyRevealed;
    double _backgroundBrightness;
    double _ambiguousActivationMargin;
}

+ (void)notifyControlCenterControl:(id)arg1 didActivate:(_Bool)arg2;
+ (double)transitionAnimationDuration;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreatingIfNeeded:(_Bool)arg1;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (void)beginTransitionWithTouchLocation:(struct CGPoint)arg1;
- (void)controlCenterViewController:(id)arg1 backdropViewDidUpdate:(id)arg2;
- (void)controlCenterViewController:(id)arg1 handlePan:(id)arg2;
- (void)controlCenterViewController:(id)arg1 handleTap:(id)arg2;
- (_Bool)controlCenterViewController:(id)arg1 canHandleGestureRecognizer:(id)arg2;
- (void)controlCenterViewControllerWantsDismissal:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(id)arg3;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(id)arg2;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_hideGrabberForSystemGesture;
- (void)_updateShouldShowGrabberOnFirstSwipe;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (void)hideGrabberAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)hideGrabberAnimated:(_Bool)arg1;
- (void)showGrabberAnimated:(_Bool)arg1;
- (void)_finishPresenting:(_Bool)arg1 completion:(id)arg2;
- (void)_dismissWithDuration:(double)arg1 additionalAnimations:(id)arg2 completion:(id)arg3;
- (void)dismissAnimated:(_Bool)arg1 withAdditionalAnimations:(id)arg2 completion:(id)arg3;
- (void)dismissAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_presentWithDuration:(double)arg1 completion:(id)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)_cancelTransition;
- (void)_endTransitionWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (double)_verticalPercentageMovedOnScreenForY:(double)arg1 stopY:(double)arg2;
- (void)_cleanupAnimator;
- (id)_newDynamicAnimationForShow:(_Bool)arg1 currentValue:(double)arg2 velocity:(double)arg3 unitSize:(double)arg4;
- (void)_updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_beginTransitionWithTouchLocation:(struct CGPoint)arg1;
- (void)_doSetupBeforeBeginTransition;
- (void)_endPresentation;
- (void)_beginPresentation;
- (void)_teardownWindowAfterPresentation;
- (void)_setupViewForPresentation;
- (_Bool)allowHideTransition;
- (_Bool)allowShowTransitionSystemGesture;
- (_Bool)_allowShowTransitionSystemGesture;
- (_Bool)allowShowTransition;
- (void)_beginSystemGesturePresentationWithGestureRecognizer:(id)arg1;
- (void)_showControlCenterGestureCancelled;
- (void)_showControlCenterGestureFailed;
- (void)_showControlCenterGestureEndedWithGestureRecognizer:(id)arg1;
- (void)_showControlCenterGestureChangedWithGestureRecognizer:(id)arg1;
- (void)_showControlCenterGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_handleShowControlCenterGesture:(id)arg1;
- (void)_updateControlAlphaForBrightness:(double)arg1;
- (void)_resetControlAlpha;
- (void)_clearCoveredContentSnapshot;
- (void)_updateCoveredContentSnapshot;
- (void)_setLockHUDHidden:(_Bool)arg1;
- (void)_updateGrabberVisibility;
- (void)_updateRevealPercentage:(double)arg1;
- (void)_revealSlidingViewToHeight:(double)arg1;
- (double)_controlCenterHeightForTouchLocation:(struct CGPoint)arg1;
- (double)_yValueForClosed;
- (double)_yValueForOpen;
- (void)_uiRelockedNotification:(id)arg1;
- (void)_lockStateChangedNotification:(id)arg1;
- (_Bool)_shouldUseControlCenterRevealConfirmation;
- (void)_dismissOnLock;
- (void)loadView;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)setAmbiguousActivationMargin:(double)arg1 forApp:(id)arg2;
- (id)_controlCenterWindow;
- (void)preventDismissalOnLock:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)isGrabberVisible;
- (_Bool)isVisible;
- (_Bool)handleMenuButtonTap;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_enumerateObservers:(id)arg1;
- (_Bool)isAvailableWhileLocked;
- (void)dealloc;
- (id)init;

@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSSet *tapExcludedViews;

@end

