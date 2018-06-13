
#import "UIViewController.h"

#import "SBAppSwitcherIconControllerDelegate.h"
#import "SBAppSwitcherScrollingViewDelegate.h"
#import "SBAppViewHostRequester.h"
#import "SBMainAppSwitcherContentViewControlling.h"
#import "SBReachabilityObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SBAppSwitcherHomePageCellView, SBAppSwitcherIconController, SBAppSwitcherPageViewController, SBAppSwitcherSettings, SBAppView, SBBestAppSuggestion, SBDisplayItem, SBMainDisplayLayoutState, UIGestureRecognizer, UISwipeGestureRecognizer, UIView, _UILegibilitySettings;

@interface SBAppSwitcherController : UIViewController <SBAppSwitcherIconControllerDelegate, SBAppSwitcherScrollingViewDelegate, _UISettingsKeyObserver, SBReachabilityObserver, UIGestureRecognizerDelegate, SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling>
{
    id <SBMainAppSwitcherContentViewControllerDelegate> _delegate;
    NSMutableArray *_displayItems;
    NSMutableDictionary *_switcherServiceViewControllerMap;
    SBAppSwitcherPageViewController *_pageController;
    SBAppSwitcherIconController *_iconController;
    UIView *_pageView;
    UIView *_iconView;
    NSMutableDictionary *_appSnapshots;
    NSMutableDictionary *_hostedApps;
    SBAppSwitcherHomePageCellView *_homePageCell;
    SBDisplayItem *_returnToDisplayItem;
    SBDisplayItem *_initialDisplayItem;
    SBDisplayItem *_returnToSideDisplayItem;
    SBMainDisplayLayoutState *_initialLayoutState;
    struct _NSRange _lastVisibleRange;
    long long _startingInterfaceOrientation;
    long long _layoutInterfaceOrientation;
    _Bool _interactionEnabled;
    _Bool _visible;
    int _mode;
    SBAppSwitcherSettings *_settings;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    _UILegibilitySettings *_legibilitySettings;
    UIGestureRecognizer *_cancelReachabilityTapGestureRecognizer;
    UISwipeGestureRecognizer *_swipeToRevealNotificationCenterGestureRecognizer;
    struct CGPoint _preReachabilityContentViewOrigin;
    _Bool _presentingForReachabilityLayout;
    SBBestAppSuggestion *_bestAppSuggestion;
    SBAppView *_hideSideAppView;
    _Bool _invalidated;
    _Bool _appSuggestionWasTapped;
}

+ (void)setPerformSochiMigrationTasksWhenLoaded:(_Bool)arg1;
+ (_Bool)shouldProvideHomeSnapshotIfPossible;
+ (_Bool)shouldProvideSnapshotIfPossible;
+ (double)snapshotScale;
+ (double)pageScale;
- (double)reachabilityOffsetForSwitcherScroller:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (_Bool)_shouldRespondToReachability;
- (void)handleRevealNotificationCenterGesture:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)_animateReachabilityDeactivatedWithHandler:(id)arg1;
- (void)_animateReachabilityActivatedWithHandler:(id)arg1;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)switcherScrollerDidEndScrolling:(id)arg1;
- (void)switcherScrollerBeganMoving:(id)arg1;
- (_Bool)switcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2;
- (void)switcherScroller:(id)arg1 displayItemWantsToBeRemoved:(id)arg2;
- (_Bool)switcherScrollerIsRelayoutBlocked:(id)arg1;
- (_Bool)switcherScroller:(id)arg1 isDisplayItemRemovable:(id)arg2;
- (void)switcherScrollerBeganPanning:(id)arg1;
- (void)switcherScroller:(id)arg1 itemTapped:(id)arg2;
- (void)switcherScroller:(id)arg1 contentOffsetChanged:(double)arg2;
- (double)switcherScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(long long)arg2;
- (struct CGSize)switcherScrollerItemSize:(id)arg1 forOrientation:(long long)arg2;
- (id)switcherScroller:(id)arg1 viewForDisplayItem:(id)arg2;
- (id)switcherIconScrollerWindowForViewRecycling:(id)arg1;
- (void)switcherIconScrollerBeganPanning:(id)arg1;
- (void)switcherIconScrollerDidEndScrolling:(id)arg1;
- (unsigned long long)switcherIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout double *)arg2 andXVelocity:(double)arg3;
- (_Bool)switcherIconScroller:(id)arg1 shouldHideIconForDisplayItem:(id)arg2;
- (void)switcherIconScroller:(id)arg1 activate:(id)arg2;
- (void)switcherIconScroller:(id)arg1 contentOffsetChanged:(double)arg2;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_bringIconViewToFront;
- (void)_updateSnapshotsForce:(_Bool)arg1;
- (void)_updateSnapshots;
- (unsigned long long)_totalItemsForWhichToKeepAroundSnapshots;
- (_Bool)_isSnapshotDisplayItem:(id)arg1;
- (_Bool)isScrolling;
- (id)_animationFactoryForIconAlphaTransition;
- (id)_transitionAnimationFactory;
- (long long)_windowInterfaceOrientation;
- (void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(id)arg3;
- (void)removeDisplayItem:(id)arg1 updateScrollPosition:(_Bool)arg2 forReason:(long long)arg3 completion:(id)arg4;
- (void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(_Bool)arg3 completion:(id)arg4;
- (void)_setInteractionEnabled:(_Bool)arg1;
- (id)_generateCellViewForDisplayItem:(id)arg1;
- (_Bool)shouldHostAppDisplayItem:(id)arg1;
- (id)_contextHostViewForDisplayItem:(id)arg1 withSideItem:(id)arg2;
- (id)_homePageCell;
- (id)_snapshotViewForDisplayItem:(id)arg1;
- (id)_viewForContinuityApp:(id)arg1;
- (id)_viewForRemoteAlert:(id)arg1 placeholder:(_Bool)arg2 displayItem:(id)arg3;
- (id)_viewForService:(id)arg1;
- (void)_updatePageViewScale:(double)arg1;
- (void)_updatePageViewScale:(double)arg1 xTranslation:(double)arg2;
- (void)_updateForAnimationFrame:(double)arg1 withAnchor:(id)arg2;
- (double)_frameScaleValueForAnimation;
- (double)_scaleForFullscreenPageView;
- (_Bool)_inMode:(int)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)wantsFullScreenLayout;
- (id)pageForDisplayItem:(id)arg1;
- (void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(id)arg3;
- (void)_switcherWasDismissed:(_Bool)arg1;
- (void)_switcherWasPresented:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_layoutInOrientation:(long long)arg1;
- (void)_layoutSubviewsInOrientation:(long long)arg1;
- (void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(id)arg2;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(id)arg2;
- (id)nextDisplayItem;
- (void)setTransitionParameters:(id)arg1;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)startInteractiveTransition:(_Bool)arg1 presenting:(_Bool)arg2 withRequest:(id)arg3;
- (struct CGRect)_nominalPageViewFrameForOrientation:(long long)arg1;
- (void)_finishDeferredSochiMigrationTasks;
@property(readonly, nonatomic) __weak SBAppSwitcherIconController *iconController;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)invalidate;
- (void)_invalidate:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

