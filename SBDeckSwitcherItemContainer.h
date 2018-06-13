
#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, SBAppSwitcherSettings, SBDeckSwitcherIconImageContainerView, SBDeckSwitcherPageView, SBDisplayItem, UILabel, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;

@interface SBDeckSwitcherItemContainer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    SBDeckSwitcherPageView *_pageView;
    SBDisplayItem *_displayItem;
    id <SBDeckSwitcherItemContainerDelegate> _delegate;
    UIScrollView *_verticalScrollView;
    UIView *_iconAndLabelContainer;
    SBDeckSwitcherIconImageContainerView *_iconImageView;
    UILabel *_iconTitle;
    double _killVelocity;
    double _contentCornerRadiusProgress;
    double _contentBlurRadiusProgress;
    double _contentPageViewScale;
    double _titleOpacity;
    double _titleAndIconOpacity;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SBAppSwitcherSettings *_settings;
    _Bool _disableBlurInputBoundsUpdatesForDismissal;
    _Bool _blurEnabled;
    double _lastBlurRadius;
    struct CGRect _lastBlurFrame;
    double _unobscuredMargin;
}

+ (double)iconSize;
+ (double)spacingBetweenEdgeAndIcon;
+ (double)spacingBetweenSnapshotAndIcon;
+ (double)spacingBetweenIconAndLabel;
+ (double)preferredRestingVisibleMarginForBounds:(struct CGRect)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handlePageViewPressDown:(id)arg1;
- (void)_handlePageViewTap:(id)arg1;
- (struct CGRect)_blurFrame;
- (void)_updateBlur;
- (void)_removeIconSubview;
- (void)_addIconSubview;
- (double)_scaleTransformFactor;
- (double)_inverseScaleTransformFactor;
- (void)_applyVisualStyleToSubviews;
- (double)_effectiveTitleAndIconOpacityConsideringKillProgress;
- (struct CGRect)_frameForIconTitle:(id)arg1;
- (struct CGRect)_frameForIconView;
- (struct CGRect)_frameForIconTitleViewContainer;
- (struct CGRect)_frameForPageView;
- (struct CGRect)_frameForScrollView;
- (struct CGAffineTransform)_transformForIconTitleViewContainer;
- (void)_ensureSubviewOrder;
- (void)layoutSubviews;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
@property(nonatomic) struct CGRect shadowClippingFrame;
@property(nonatomic) _Bool shouldClipShadow;
@property(readonly, nonatomic) double killingProgress;
@property(nonatomic) double killGestureHysteresis;
@property(nonatomic) double darkeningAlpha;
- (id)_createScrollView;
- (id)initWithFrame:(struct CGRect)arg1 displayItem:(id)arg2 delegate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

