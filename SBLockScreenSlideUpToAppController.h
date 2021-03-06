
#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"
#import "SBUIPasscodeLockViewDelegate.h"

@class BBObserver, NSMutableArray, NSSet, NSString, NSURL, SBAppStatusBarSettingsAssertion, SBApplication, SBBestAppSuggestion, SBBounceSettings, SBDisableAppStatusBarAlphaChangesAssertion, SBLockScreenBounceAnimator, SBLockScreenSlideUpToAppWorkspaceTransaction, SBLockScreenView, SBNotificationCenterBounceAnimator, SBPasscodeLockDisableAssertion, SBUIPasscodeViewWithLockScreenStyle, UIImage, UIView, _UIDynamicValueAnimation;

@interface SBLockScreenSlideUpToAppController : NSObject <SBPresentingDelegate, SBUIPasscodeLockViewDelegate, BSTransactionObserver, SBCoordinatedPresenting>
{
    _Bool _isInScreenOffMode;
    UIView *_slidingStatusBarView;
    SBLockScreenView *_lockScreenView;
    _Bool _currentlySliding;
    SBLockScreenBounceAnimator *_bounceAnimator;
    _UIDynamicValueAnimation *_dynamicAnimation;
    id <SBPresentingDelegate> _presentingDelegate;
    SBBounceSettings *_bounceSettings;
    SBApplication *_targetApp;
    SBBestAppSuggestion *_targetAppInfo;
    _Bool _targetAppIsSiri;
    _Bool _targetAppIsInCallService;
    _Bool _deactivatingForInCallService;
    _Bool _appSuggestionWasInvoked;
    NSURL *_targetURL;
    UIImage *_grabberImage;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BBObserver *_bulletinObserver;
    _Bool _attemptingUnlock;
    _Bool _showingPasscodeView;
    _Bool _dismissingPasscodeView;
    _Bool _defaultImagesNeedUpdateUponPasscodeExit;
    NSMutableArray *_deferredAppUpdateBlocks;
    _Bool _executingDeferredAppUpdateBlocks;
    _Bool _waitingToDeactivateForActivityLaunch;
    id _preUIUnlockActions;
    SBPasscodeLockDisableAssertion *_passcodeDisableAssertionForContinuityUnlock;
    UIView *_clippingView;
    UIView *_appDefaultImageView;
    UIView *_appBackgroundView;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    UIView *_passcodeOverscrollView;
    SBLockScreenSlideUpToAppWorkspaceTransaction *_slideUpTransaction;
    _Bool _disablingOcclusionsForTargetApp;
    _Bool _launchingAppFromNonOccludedState;
    id <SBLockScreenSlideUpToAppControllerDelegate> _delegate;
    double _previousSlidePercent;
    _Bool _didAbortBounce;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAssertion;
    double _boundaryTranslationInY;
    SBNotificationCenterBounceAnimator *_slideDownBounceAnimator;
    _UIDynamicValueAnimation *_slideUpAnimation;
}

- (id)bounceAnimator;
- (id)_newDynamicAnimationForTargetValue:(double)arg1 withInitialVelocity:(double)arg2;
- (id)_newBounceAnimatorWithGrabberView:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)presentingControllerDidFinishPresentation:(id)arg1;
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)treatCurrentPositionAsBoundaryforGesture:(id)arg1;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(id)arg3;
- (double)_foregroundTranslationForLocation:(struct CGPoint)arg1;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(id)arg2;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *gestures;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)_deviceBlockedStateChanged:(id)arg1;
- (_Bool)isShowingPasscodeView;
- (_Bool)hasActiveUnlockActionContext;
- (_Bool)wantsToShowStatusBar;
- (void)_clearAppDefaultImageAndRemoveFromSuperview:(_Bool)arg1;
- (void)_passcodeLockStateChanged;
- (void)_addOrRemovePasscodeViewIfNecessary;
- (void)setTargetURL:(id)arg1;
- (void)setTargetApp:(id)arg1 withAppSuggestion:(id)arg2;
- (void)presentTargetAppAnimated:(_Bool)arg1;
- (void)activateTargetApp;
- (void)_activateApp:(id)arg1 withAppInfo:(id)arg2 andURL:(id)arg3 animated:(_Bool)arg4;
- (void)hideSlidingStatusBar;
- (void)abortDynamicAnimationForScreenOff;
- (void)_executeDeferredAppUpdateBlocks;
- (void)_commonGestureCleanup;
- (void)finalizeGesture;
- (void)_animateSlideUpWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (void)_animateSlideDownWithVelocity:(struct CGPoint)arg1 completion:(id)arg2;
- (void)_finishSlideDownWithCompletion:(id)arg1;
- (void)translateSlidingViewByY:(double)arg1;
- (void)performGeneralCleanupForUserAction:(_Bool)arg1;
- (void)_cleanupFromDismissal;
- (void)_cleanupBackgroundLaunchNonsense;
- (void)_handleAppLaunchedUnderLockScreenWithResult:(long long)arg1;
- (void)prepareForSlideUpAnimation;
- (id)_lockScreenViewFakeStatusBar;
- (void)deactivate;
- (void)activate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setInScreenOffMode:(_Bool)arg1;
- (void)setGrabberViewImage:(id)arg1;
- (void)setGrabberOnLockScreen:(id)arg1;
- (id)_createGrabberView;
- (void)_setupBounceAnimatorAndGrabberView;
- (void)setLockScreenView:(id)arg1 force:(_Bool)arg2;
- (id)lockScreenView;
- (void)dealloc;
- (id)init;

@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

