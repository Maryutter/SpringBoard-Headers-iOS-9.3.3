
#import "NSObject.h"

@class SBAppStatusBarSettingsAssertion, SBFLockScreenDateView, SBFadeAnimationSettings, SBLockScreenView, UIView, UIWindow;

@interface SBScreenFadeAnimationController : NSObject
{
    UIWindow *_fadeWindow;
    UIView *_overlayView;
    SBFLockScreenDateView *_dateView;
    double _originalDateLeftEdge;
    double _originalDateBottomEdge;
    double _finalTimeAlpha;
    double _finalDateAlpha;
    double _finalStatusBarAlpha;
    SBLockScreenView *_lockScreenView;
    _Bool _preparingToAnimateFadeIn;
    _Bool _animatingForFadeIn;
    _Bool _animatingForFadeOut;
    _Bool _insideFadeInCompletionBlock;
    _Bool _insideFadeOutCompletionBlock;
    int _animationToken;
    id _fadeInCompletionBlock;
    id _fadeOutCompletionBlock;
    _Bool _animatingDateTime;
    _Bool _animatingWallpaper;
    _Bool _animatingOverlay;
    _Bool _animatingContent;
    SBFadeAnimationSettings *_settings;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
}

+ (id)sharedInstance;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)hideDate;
- (void)setDateViewAlpha:(double)arg1;
- (void)_runCompletionHandlerForFadeIn:(_Bool)arg1;
- (void)_handleAnimationCompletionIfNecessaryForFadeIn:(_Bool)arg1;
- (void)fadeOutWithCompletion:(id)arg1;
- (void)_startFadeAnimationsForFadeIn:(_Bool)arg1;
- (void)_cleanupAnimationWhenInterruptingFadeIn:(_Bool)arg1;
- (void)_uiLockStateChanged:(id)arg1;
- (void)_assistantVisibilityChanged;
- (void)_invertColorsChanged;
- (void)_startFadeInIfNecessary;
- (void)prepareToFadeInWithTimeAlpha:(double)arg1 dateAlpha:(double)arg2 statusBarAlpha:(double)arg3 lockScreenView:(id)arg4 existingDateView:(id)arg5 completion:(id)arg6;
- (void)_setRelevantLockScreenViewsHidden:(_Bool)arg1;
- (void)_adjustViewsForCurrentOrientation;
- (void)abortAnimatedDateFrameChange;
- (void)updateDateFrameHorizontalOffset:(double)arg1 verticalOffset:(double)arg2;
- (_Bool)isFadeOutAnimationInProgress;
- (_Bool)isFadeInAnimationInProgress;
- (void)_createFadeWindowForFadeIn:(_Bool)arg1;
- (double)fadeOutAnimationDuration;
- (double)fadeInAnimationDuration;
- (void)dealloc;
- (id)init;

@end

