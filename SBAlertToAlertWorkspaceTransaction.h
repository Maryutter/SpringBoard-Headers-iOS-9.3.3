
#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBDisplayLayoutTransition, NSString, SBUIAnimationController, SBWorkspaceAlert;

@interface SBAlertToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBWorkspaceAlert *_activatingAlert;
    SBWorkspaceAlert *_deactivatingAlert;
    _Bool _activation;
    SBUIAnimationController *_animation;
    _Bool _animatingAlertDeactivation;
    FBDisplayLayoutTransition *_layoutTransition;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_updateSceneLayout;
- (_Bool)_isFromMainSwitcher;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (void)_doAlertTransition;
- (void)_didComplete;
- (void)_cleanUpAnimation;
- (void)_begin;
- (void)_willBegin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

