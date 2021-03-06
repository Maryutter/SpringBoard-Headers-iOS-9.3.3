
#import "SBFolderView.h"

#import "SBSearchGestureObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBDockIconListView, SBDockView, SBFParallaxSettings, SBRootFolder, SBSearchBlurEffectView, SBSearchViewController, SBSearchViewPresentationManager, UILabel, UIView, _SBMinusPageStepper;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver, UIGestureRecognizerDelegate>
{
    SBDockView *_dockView;
    SBDockIconListView *_dockListView;
    _Bool _dockViewBorrowed;
    UILabel *_idleTextView;
    SBFParallaxSettings *_parallaxSettings;
    double _searchGestureProgress;
    UIView *_searchPulldownView;
    UIView *_searchPageView;
    double _reachabilityYOffset;
    _Bool _layingOutForReachability;
    struct CGPoint _offsetAtScrollBegin;
    long long _indexAtScrollBegin;
    double _scrollToSearchProgress;
    double _dockOffscreenProgress;
    _Bool _didLayOutForScrollToSearch;
    SBSearchBlurEffectView *_searchBlurEffectView;
    _SBMinusPageStepper *_minusPageAnimationStepper;
    _Bool _needsSearchLayout;
    _Bool _wasSearchViewDismissedByExternalCall;
    _Bool _hasLaidForDoubleHeightStatusBar;
    SBSearchViewPresentationManager *_searchViewPresentationManager;
    _Bool _isSpotlightTransitioningFromBreadcrumb;
    SBSearchViewController *_searchViewController;
    unsigned long long _dockEdge;
}

- (void)_handleReachabilityDectivatedAnimate:(_Bool)arg1 completion:(id)arg2;
- (void)_handleReachabilityActivatedAnimate:(_Bool)arg1 completion:(id)arg2;
- (double)reachabilityYOffset;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)searchGesture:(id)arg1 resetAnimated:(_Bool)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_configureParallax;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_cleanUpAfterScrolling;
- (struct UIEdgeInsets)_searchInsetsForPageControl;
- (void)_updateStatusBarInsetsToPercent:(double)arg1;
- (struct UIEdgeInsets)_statusBarInsetsForDockEdge:(unsigned long long)arg1 dockOffscreenPercentage:(double)arg2;
- (void)_animateViewsForScrollingToSearch;
- (double)_offsetForSearchPage;
- (double)_pageWidth;
- (double)_scrollOffsetForPageAtIndex:(long long)arg1;
- (void)_currentPageIndexDidChange;
- (void)_handleDoubleHeightStatusBarChange;
- (void)updateIconListIndexAndVisibility:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)_updatesWallpaperRelativeCenter;
- (void)cleanUpAfterZoomAnimation;
- (void)prepareForZoomAnimation;
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;
- (void)tearDownListViews;
- (void)_updateEditingStateAnimated:(_Bool)arg1;
- (void)resetIconListViews;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (void)notifySearchViewControllerWillBeginDismissingAnimated:(_Bool)arg1;
- (void)notifySearchViewControllerWillPresent:(_Bool)arg1 fromBreadcrumb:(_Bool)arg2;
- (struct UIEdgeInsets)statusBarInsetsForDockEdge:(unsigned long long)arg1;
- (void)returnDockView;
- (void)borrowDockView;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimateWithSettings:(id)arg1;
- (void)updateDockViewOrientation;
- (void)setDockVerticalStretch:(double)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (id)dockView;
- (void)_layoutSubviews;
- (void)layoutDockView;
- (struct CGRect)effectivePageControlFrame;
- (struct CGRect)_scrollViewFrameForDockEdge:(unsigned long long)arg1;
- (void)layoutViewsForSearch;
- (void)_layoutSubviewsForMinusPageSearch;
- (void)_layoutSubviewsForPulldownSearch;
- (unsigned long long)_minusPageCount;
- (struct CGRect)effectiveDockFrame;
- (double)effectiveStatusBarHeight;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setNeedsLayout;
- (void)returnScalingView;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 forSnapshot:(_Bool)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

