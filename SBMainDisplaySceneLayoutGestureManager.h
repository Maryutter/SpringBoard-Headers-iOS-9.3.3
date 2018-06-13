
#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBGrabberTongueDelegate.h"
#import "SBSceneResizeSnakebiteGestureRecognizerDelegate.h"
#import "SBSystemGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSString, NSUUID, SBAppResizeGestureWorkspaceTransaction, SBGrabberTongue, SBMainDisplaySceneLayoutViewController, SBSceneResizeSnakebiteGestureRecognizer, SBSideAppSlideGestureWorkspaceTransaction, UILongPressGestureRecognizer, UIView;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBSceneResizeSnakebiteGestureRecognizerDelegate, BSTransactionObserver, SBGrabberTongueDelegate>
{
    SBMainDisplaySceneLayoutViewController *_sceneViewController;
    SBGrabberTongue *_sideAppGrabberTongue;
    SBGrabberTongue *_sideSwitcherGrabberTongue;
    UIView *_adornmentView;
    _Bool _sideAppRevealGestureIsActive;
    _Bool _sideSwitcherRevealGestureIsActive;
    _Bool _sideSwitcherRevealGestureAsOverlayIsActive;
    struct CGRect _effectiveKeyboardFrame;
    NSUUID *_lastSideAppRevealGestureTransactionRequestUUID;
    NSUUID *_lastSideSwitcherRevealGestureTransactionRequestUUID;
    NSMutableDictionary *_transactionRequestUUIDToRevealGestureSuccess;
    SBSideAppSlideGestureWorkspaceTransaction *_currentSideAppRevealWorkspaceTransaction;
    SBSideAppSlideGestureWorkspaceTransaction *_currentSideSwitcherRevealWorkspaceTransaction;
    SBSceneResizeSnakebiteGestureRecognizer *_resizeGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction *_resizeGestureTransaction;
    UILongPressGestureRecognizer *_sideSwitcherPressGestureRecognizer;
}

- (void)_keyboardFrameDidChange:(id)arg1;
- (_Bool)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(id)arg1;
- (_Bool)sceneResizeGestureRecognizer:(id)arg1 shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(double)arg2;
- (double)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(id)arg1;
- (double)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;
- (double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;
- (long long)interfaceOrientationForSceneResizeGestureRecognizer:(id)arg1;
- (double)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;
- (double)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;
- (double)sceneResizeGestureRecognizer:(id)arg1 viewOffsetForLocation:(double)arg2;
- (double)sceneResizeGestureRecognizer:(id)arg1 locationForViewOffset:(double)arg2;
- (double)locationOfDividerForSceneResizeGestureRecognizer:(id)arg1;
- (void)_startResizeTransactionWithLabel:(id)arg1 checkGestureStatus:(_Bool)arg2;
- (void)_resizeGestureBegan;
- (void)_resizeGestureDidUpdate:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)_setLastSideAppRevealGestureTransactionRequestUUID:(id)arg1;
- (void)_setLastSideSwitcherRevealGestureTransactionRequestUUID:(id)arg1;
- (void)_setCurrentSideSwitcherRevealTransaction:(id)arg1;
- (void)_setCurrentSideAppRevealTransaction:(id)arg1;
- (long long)_sidePullGestureSucceededForRequestID:(id)arg1;
- (void)_sideSwitcherLongPress:(id)arg1;
- (void)_sideSwitcherRevealGestureUpdatedWithDistance:(double)arg1;
- (void)_sideSwitcherRevealGestureBegan;
- (double)_effectiveValue:(double)arg1;
- (void)_finishSideSwitcherRevealGestureWithVelocity:(double)arg1 distance:(double)arg2;
- (void)_activateSideSwitcherViewWithInitialDistance:(double)arg1;
- (double)_progressForSideAppTransitionWithNewDistance:(double)arg1;
- (void)_sideAppRevealGestureUpdatedWithDistance:(double)arg1;
- (void)_sideAppRevealGestureBeganForActivation:(_Bool)arg1 ofSideSwitcher:(_Bool)arg2;
- (void)_finishSideAppRevealGestureWithVelocity:(double)arg1 distance:(double)arg2 forActivation:(_Bool)arg3;
- (void)_activateSideAppViewWithInitialPosition:(double)arg1 forActivation:(_Bool)arg2;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (_Bool)grabberTongueRequiredForWholeEdge:(id)arg1;
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (double)grabberTongueWidthOfActiveEdge:(id)arg1;
- (double)grabberTongueWidthOfGrabberFreeRegion:(id)arg1;
- (double)grabberTongueCenterOnEdge:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_disableGestureWithTypeForCommonReasons:(unsigned long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)sideSwitcherRevealGestureActive;
- (_Bool)anyLayoutGestureWaitingToComplete;
- (_Bool)anyLayoutGestureActive;
- (id)sideSwitcherRevealGesture;
- (_Bool)dismissGrabbersWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)installAccessoriesInView:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSceneLayoutViewController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

