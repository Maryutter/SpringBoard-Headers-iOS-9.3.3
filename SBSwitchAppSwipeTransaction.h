
#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"
#import "SBWorkspaceTransitionLayoutDelegate.h"

@class NSString, NSTimer, SBAutoPiPWorkspaceTransaction, SBSceneLayoutWorkspaceTransaction, SBUISwitchAppSwipeAnimationController, SBWorkspaceApplicationTransitionContext;

@interface SBSwitchAppSwipeTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceTransitionLayoutDelegate>
{
    id <SBSwitchAppSwipeTransactionDelegate> _delegate;
    SBUISwitchAppSwipeAnimationController *_animationController;
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
    id _layoutCompletion;
    id _layoutContinuation;
    NSTimer *_delayedAppLaunchTimer;
    _Bool _trackingGesture;
    _Bool _endLayoutTransition;
    _Bool _completingAnimation;
    double _basePercentage;
    SBWorkspaceApplicationTransitionContext *_originalTransitionContext;
    SBWorkspaceApplicationTransitionContext *_startingTransitionContext;
    SBWorkspaceApplicationTransitionContext *_nextTransitionContext;
    SBWorkspaceApplicationTransitionContext *_previousTransitionContext;
    SBWorkspaceApplicationTransitionContext *_endingTransitionContext;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
}

- (struct CGRect)transitionContext:(id)arg1 referenceFrameForEntity:(id)arg2;
- (id)originalLayoutStateForTransitionContext:(id)arg1;
- (id)layoutStateForTransitionContext:(id)arg1;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(id)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(id)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_continueLayoutTransitionWithContext:(id)arg1 toCompletion:(_Bool)arg2 startAutoPiP:(_Bool)arg3 updateScenes:(_Bool)arg4;
- (void)_continueLayoutTransitionToCompletion:(_Bool)arg1 startAutoPiP:(_Bool)arg2 updateScenes:(_Bool)arg3;
- (void)_pendingAppLaunchTimerFired;
- (void)_schedulePendingAppLaunch;
- (void)_cancelPendingAppLaunch;
- (void)_gestureCancelled;
- (void)_gestureEndedWithCompletionType:(long long)arg1;
- (void)_gestureChanged:(double)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (void)startTrackingGesture:(id)arg1;
@property(readonly, nonatomic, getter=isFinishedAnimating) _Bool finishedAnimating;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 originalTransitionContext:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
