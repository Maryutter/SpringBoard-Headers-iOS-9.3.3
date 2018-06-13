
#import "BSTransaction.h"

#import "SBUIAnimationControllerObserver.h"
#import "SBUIAnimationStepping.h"

@class NSMutableArray, NSSet, NSString, SBAnimationStepper, SBWorkspaceApplication, UIView, UIWindow;

@interface SBUIAnimationController : BSTransaction <SBUIAnimationControllerObserver, SBUIAnimationStepping>
{
    UIWindow *_transitionWindow;
    UIView *_transitionContainer;
    id _commitBlock;
    int _animationState;
    _Bool _didPostBeginAnimationNotification;
    _Bool _didNotifyObserversOfCompletion;
    _Bool _needsCATransactionActivate;
    id <SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
    NSMutableArray *_startDependencies;
    _Bool _settingUpInitialStartDependencies;
    NSSet *_progressDependencies;
    NSSet *_waitForActivationDependencies;
    SBAnimationStepper *_stepper;
}

- (void)transactionDidComplete:(id)arg1;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)_animateInteractiveApplicationTransitionFromPercentage:(double)arg1 toPercentage:(double)arg2 withSettings:(id)arg3;
- (void)_setInteractiveApplicationTransitionAnimationPercentage:(double)arg1;
- (void)_stopMonitoringStartDependency:(id)arg1;
- (void)_startMonitoringStartDependency:(id)arg1;
- (void)__cleanupAnimation;
- (_Bool)__animationShouldStart;
- (void)__noteAnimationDidTerminateWithSuccess:(_Bool)arg1;
- (void)_noteAnimationDidFail;
- (void)_noteAnimationDidFinish;
- (void)_noteAnimationDidRevealApplication;
- (void)_notifyObserversOfAnimationCompletion;
- (void)_noteAnimationDidCommit:(_Bool)arg1 withSettings:(id)arg2;
- (id)_viewsForAnimationStepping;
- (_Bool)_shouldDismissBanner;
- (void)_cleanupAnimation;
- (void)_cancelAnimation;
- (void)_startAnimation;
- (void)_startTransactionDependency:(id)arg1 didComplete:(_Bool)arg2;
- (void)_applicationDependencyStateChanged;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_prepareAnimation;
- (void)_willBeginWaitingForStartDependencies;
- (void)_setHidden:(_Bool)arg1;
- (id)_animationProgressDependencies;
- (id)_animationIdentifier;
- (_Bool)_willAnimate;
- (_Bool)_hasAnimationStartDependency;
- (void)_recursivelyEnumerateStartAnimationDependenciesWithBlock:(id)arg1;
- (void)_prependStartTransactionDependency:(id)arg1;
- (void)_removeStartTransactionDependency:(id)arg1;
- (void)_addStartTransactionDependency:(id)arg1;
- (id)_startTransactionDependencies;
- (void)_addDebugLogger:(id)arg1;
- (void)_didComplete;
- (void)_willComplete;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didInterruptWithReason:(id)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (_Bool)isReasonableMomentToInterrupt;
- (_Bool)isFinishedAnimating;
- (_Bool)waitingToStart;
- (_Bool)__wantsInitialProgressStateChange;
- (void)_setupStartDependencies;
- (void)_willSetupStartDependencies;
- (id)__waitForAppActivationTransactionForApplication:(id)arg1;
- (void)_applicationActivationStateDidChange;
- (void)__evaluateStartDependencies;
- (void)__cancelAnimation;
- (void)__startAnimation;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setAnimationState:(int)arg1;
- (_Bool)_isNullAnimation;
- (_Bool)animating;
- (int)_animationState;
@property(readonly, nonatomic) SBWorkspaceApplication *deactivatingApp;
@property(readonly, nonatomic) SBWorkspaceApplication *activatingApp;
@property(readonly, copy, nonatomic) NSSet *deactivatingApps;
@property(readonly, copy, nonatomic) NSSet *activatingApps;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)init;
- (id)_getTransitionWindow;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

