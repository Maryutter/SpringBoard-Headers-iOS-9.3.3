
#import "UIViewController.h"

#import "SBAppSwitcherPageViewDelegate.h"
#import "SBSwitcherAppSuggestionBottomBannerViewDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, SBBestAppSuggestion, SBDeckSwitcherPageView, SBSwitcherAppSuggestionBottomBannerView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SBSwitcherAppSuggestionViewController : UIViewController <SBSwitcherAppSuggestionBottomBannerViewDelegate, SBAppSwitcherPageViewDelegate>
{
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _showSuggestions;
    SBSwitcherAppSuggestionBottomBannerView *_currentBottomBanner;
    SBDeckSwitcherPageView *_slideUpPageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _inInteractivePresentationOrAnimation;
    _Bool _presentingOrDismissingBanner;
    double _progressPresented;
    _Bool _fullyPresented;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    _Bool _suggestionQueueSuspended;
    id <SBSwitcherAppSuggestionViewControllerDelegate> _delegate;
}

- (struct CGAffineTransform)contentViewTransformForPageView:(id)arg1;
- (long long)resizingPolicyForPageView:(id)arg1;
- (void)touchesBeganInBottomBannerView:(id)arg1;
- (void)_removeContainerForSlideUp;
- (void)_insertContainerForSlideUp;
- (void)_handleBannerPan:(id)arg1;
- (void)_finishPresentationOrDismissalForProgress:(double)arg1 velocity:(double)arg2;
- (void)_updatedPanGestureWithProgress:(double)arg1;
- (void)_beganPanGesture;
- (id)_newDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3;
- (void)_handleBannerTap:(id)arg1;
- (void)_animateOutAndRemoveCurrentBottomBanner;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1;
- (unsigned long long)_bottomBannerStyle;
- (void)_updateBottomBanner;
- (struct CGRect)_presentedRectForBottomBanner;
- (struct CGRect)_presentedRectForContentView;
- (struct CGRect)_offscreenRectForContentView;
- (struct CGRect)_idleOnscreenRectForBottomBanner;
- (struct CGRect)_offscreenRectForBottomBanner;
- (void)_endInteractivePresentationOrAnimation;
- (void)_beginInteractivePresentationOrAnimation;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)dismissingSuggestionPageView;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

