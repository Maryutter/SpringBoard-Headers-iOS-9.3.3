
#import "SBUIStarkScreenAnimationController.h"

#import "SBIconAnimatorDelegate.h"

@class NSString, SBAlert, SBIconAnimator, UIView;

@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate>
{
    UIView *_viewToAnimate;
    SBIconAnimator *_iconAnimator;
    SBAlert *_alertImpersonator;
    _Bool _animationFinished;
    _Bool _fromAssistant;
}

- (void)iconAnimatorWasInvalidated:(id)arg1;
- (void)_noteZoomDidFinish;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupHosting;
- (void)_animateZoomWithCompletion:(id)arg1;
- (void)_prepareZoom;
- (double)_animationDelay;
- (void)_noteDependencyDidInvalidate;
- (id)_viewToAnimate;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

