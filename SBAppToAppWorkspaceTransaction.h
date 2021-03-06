
#import "SBToAppsWorkspaceTransaction.h"

@class NSObject<OS_dispatch_group>, SBAutoPiPWorkspaceTransaction;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    _Bool _animatedActivation;
    _Bool _animatedDeactivation;
    _Bool _deactivatingAppFromAppToAppGesture;
    _Bool _appQuitFromSwitcher;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    _Bool _performingDosidoWithPinnedSideSwitcherVisible;
    _Bool _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

- (_Bool)_fromAppWantsLiveContentForDosido;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_cleanUpAfterAnimation;
- (void)_animationDidFinish;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_performPostAnimationTasksWithCompletion:(id)arg1;
- (_Bool)_hasPostAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(id)arg1;
- (_Bool)_hasPreAnimationTasks;
- (id)_setupAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_beginTransition;
- (void)_synchronizeWithSceneUpdates;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)shouldRestoreSpringBoardContentOnCleanup;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)debugDescription;
- (void)dealloc;

@end

