
#import "SBStarkToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBUIAnimationController, SBWorkspaceEntity;

@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animationController;
    _Bool _animatedActivation;
    _Bool _animatedDeactivation;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (id)_newAnimationFromLauncherToNowPlaying;
- (id)_newAnimationFromNowPlayingToLauncher;
- (id)_newAnimationFromNowPlayingToNowPlaying;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromAppToApp;
- (void)_doCommit;
- (id)_animation;
- (void)_handleAppDidNotChange;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_cleanUpAnimation;
- (void)mainScreenApplicationSceneWillCommit:(id)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;
- (void)_performTransition;
- (void)_beginAnimation;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
@property(readonly, nonatomic) SBWorkspaceEntity *fromEntity;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

