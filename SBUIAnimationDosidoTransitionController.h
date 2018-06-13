
#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarSettingsAssertion, SBDosidoAnimator, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController
{
    UIView *_fromView;
    UIView *_toView;
    SBWindowSelfHostWrapper *_homeScreenHostWrapper;
    SBDosidoAnimator *_dosidoAnimator;
    long long _fromOrientation;
    _Bool _requiresHostView;
    _Bool _fromAppWantsLiveContent;
    _Bool _dosidoDidComplete;
    _Bool _crossfadeDidComplete;
    _Bool _activationFailed;
    _Bool _finishedActivating;
    unsigned long long _direction;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (id)_mainScreenSnapshot;
- (_Bool)_isTransitionToSpotlight;
- (_Bool)_isTransitionFromSpotlight;
- (void)_maybeReportAnimationFinished;
- (void)_performCrossfadeIfNeeded;
- (void)_maybeStartCrossfade;
- (void)_performDosido;
- (void)_kickOffAnimation;
- (void)_setFromView:(id)arg1;
- (void)captureFlagsForActivatingApp:(id)arg1;
- (id)_animationFactory;
- (void)_invalidateWrapperView:(id)arg1;
- (void)setToView:(id)arg1;
- (long long)orientationAtLaunch;
- (void)_evaluateTransparency;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_setupDisplayModeForDeactivatingAppView:(id)arg1;
- (void)_setupDisplayModeForActivatingAppView:(id)arg1;
- (void)_setupDisplayModeForAppView:(id)arg1 displayMode:(long long)arg2;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;

@end

