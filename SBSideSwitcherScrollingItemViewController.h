
#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherScrollView, SBChevronView, SBDisplayItem;

@interface SBSideSwitcherScrollingItemViewController : UIViewController <UIScrollViewDelegate>
{
    SBAppSwitcherScrollView *_scrollView;
    NSArray *_displayItems;
    NSMutableDictionary *_visiblePageViews;
    SBDisplayItem *_transitioningDisplayItem;
    double _transitionProgress;
    double _interactiveTransitionProgress;
    double _displayItemContentTransitionProgress;
    _Bool _isAnimatingDisplayItemContentTransition;
    _Bool _transitionPresenting;
    unsigned long long _transitionState;
    SBChevronView *_grabberView;
    long long _sideSwitcherGrabberStyle;
    _Bool _sideSwitcherGrabberPressed;
    struct CGPoint _beginningOfDismissalContentOffset;
    _Bool _shouldResetContentOffset;
    id <SBSideSwitcherScrollingItemViewDelegate> _delegate;
}

- (void)replaceItemAtIndex:(unsigned long long)arg1 withNewItem:(id)arg2 duration:(double)arg3;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 duration:(double)arg3 updateScrollPosition:(_Bool)arg4 completion:(id)arg5;
- (void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(_Bool)arg3 completion:(id)arg4;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)endTransitionWithSuccess:(_Bool)arg1;
- (void)prepareToEndTransitionAnimated:(_Bool)arg1;
- (void)startTransitionWithDisplayItem:(id)arg1 presenting:(_Bool)arg2;
- (struct CGPoint)_contentOffsetOnRotationToSize:(struct CGSize)arg1 oldViewHeight:(double)arg2 oldOffsetY:(double)arg3;
- (void)_updateVisiblePageViews;
- (void)_applyStyleToPageView:(id)arg1;
- (void)_applyPageViewStyleToVisiblePageViews;
- (struct CGSize)_scrollViewContentSizeForProgress:(double)arg1;
- (struct CGPoint)_scrollViewContentOffsetForProgress:(double)arg1;
- (void)_updateScrollViewLayoutForPresentationOrDismissal;
- (void)_startUpdatingScrollViewForPresentationOrDismissal;
- (void)_layoutGrabber;
- (_Bool)_isItemVisible:(id)arg1 withSidePadding:(double)arg2 progress:(double)arg3;
- (struct CGRect)_frameForItem:(unsigned long long)arg1 progressPresented:(double)arg2;
- (struct CGRect)_frameForItem:(unsigned long long)arg1;
- (struct CGPoint)_centerOfIndex:(long long)arg1 forProgress:(double)arg2;
- (struct CGPoint)_centerOfIndex:(long long)arg1;
- (double)_distanceBetweenItems;
- (struct CGSize)_itemSizeForProgress:(double)arg1;
- (struct CGSize)_itemSize;
- (unsigned long long)_itemsPerScreen;
- (double)contentOffsetSpeedInScrollingDirection;
- (double)heightFromTopForFinalItemSize;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateScrollViewFrameAndContentSize;
- (void)viewDidLoad;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

