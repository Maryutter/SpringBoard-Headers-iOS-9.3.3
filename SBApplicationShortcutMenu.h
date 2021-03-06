
#import "UIView.h"

#import "SBApplicationShortcutMenuContentViewDelegate.h"
#import "SBIconViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIInteractionProgressObserver.h"

@class NSMutableArray, NSString, SBAppStatusBarSettingsAssertion, SBApplication, SBApplicationShortcutMenuContentView, SBClientSideAnimation, SBFParallaxSettings, SBIconView, UIInteractionProgress, UITapGestureRecognizer, _UIBackdropView, _UIBackdropViewSettings;

@interface SBApplicationShortcutMenu : UIView <SBIconViewDelegate, SBApplicationShortcutMenuContentViewDelegate, UIInteractionProgressObserver, UIGestureRecognizerDelegate>
{
    SBApplication *_application;
    UIInteractionProgress *_interactionProgress;
    id <SBApplicationShortcutMenuDelegate> _applicationShortcutMenuDelegate;
    SBFParallaxSettings *_parallaxSettings;
    UIView *_transformedContainerView;
    long long _orientation;
    UIView *_backgroundContainerView;
    UIView *_foregroundContainerView;
    _UIBackdropViewSettings *_blurSettings;
    _UIBackdropView *_blurView;
    UIView *_proxyIconViewWrapper;
    SBIconView *_proxyIconView;
    SBApplicationShortcutMenuContentView *_contentView;
    unsigned long long _presentState;
    double _contentTransitionFraction;
    double _blurAndScaleTransitionFraction;
    double _iconScaleFactor;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    SBClientSideAnimation *_presentAnimation;
    SBClientSideAnimation *_dismissAnimation;
    SBClientSideAnimation *_finishPeekingAnimation;
    NSMutableArray *_dismissCompletionBlocks;
    long long _editingForceScore;
    double _lastForceUpdateTime;
    double _presentationStartTime;
    double _lastForceUpdateFraction;
    _Bool _interactionProgressEnded;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBIconView *_iconView;
}

+ (void)cancelPrepareForPotentialPresentationWithReason:(id)arg1;
+ (void)prepareForPotentialPresentationWithReason:(id)arg1;
+ (id)_potentialPresentationReasons;
- (_Bool)iconViewDisplaysCloseBox:(id)arg1;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (void)icon:(id)arg1 openFolder:(id)arg2 animated:(_Bool)arg3;
- (_Bool)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)iconTapped:(id)arg1;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)iconHandleLongPress:(id)arg1;
- (void)menuContentView:(id)arg1 activateShortcutItem:(id)arg2 index:(long long)arg3;
- (_Bool)menuContentView:(id)arg1 canActivateShortcutItem:(id)arg2;
- (void)_updateBackgroundForBlurFraction:(double)arg1;
- (id)_shortcutItemsToDisplay;
- (_Bool)_canDisplayShortcutItem:(id)arg1;
- (void)_handleDismissGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateEditingScoreWithForceVelocity:(double)arg1;
- (void)_updateEditingScoreAfterTimeout;
- (void)_scheduleUpdateEditingScoreAfterTimeout;
- (void)_cancelUpdateEditingScoreTimer;
- (void)updateFromPressGestureRecognizer:(id)arg1;
- (void)_applyIconScaleTransformWithIconFactor:(double)arg1 contentFactor:(double)arg2;
- (void)_peekWithContentFraction:(double)arg1 smoothedBlurFraction:(double)arg2;
- (void)_finishPeekingWithCompletionHandler:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1 finishPeeking:(_Bool)arg2 ignorePresentState:(_Bool)arg3 completionHandler:(id)arg4;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(id)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_setupViews;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool isPresented;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 application:(id)arg2 iconView:(id)arg3 interactionProgress:(id)arg4 orientation:(long long)arg5;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

