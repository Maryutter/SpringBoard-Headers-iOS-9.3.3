
#import "SBLayoutElementViewController.h"

#import "SBAppViewHostRequester.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "SBSideSwitcherPageViewDelegate.h"
#import "SBSideSwitcherScrollingItemViewDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SBDisplayItem, SBIconViewMap, SBSideSwitcherScrollingItemViewController;

@interface SBSideSwitcherViewController : SBLayoutElementViewController <SBSideSwitcherScrollingItemViewDelegate, SBSideSwitcherPageViewDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBAppViewHostRequester>
{
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBSideSwitcherScrollingItemViewController *_itemViewController;
    id _wallpaperBlurTransitionState;
    NSMutableDictionary *_switcherPageViews;
    NSMutableArray *_displayItems;
    NSMutableSet *_hostedApplicationDisplayItems;
    SBIconViewMap *_iconViewMap;
    SBDisplayItem *_transitioningDisplayItem;
    double _transitionProgress;
    _Bool _transitionPresenting;
    unsigned long long _transitionState;
    _Bool _hasActivatedItemWhileVisible;
    _Bool _viewCurrentlyAppeared;
}

+ (_Bool)_supportsHighQualityBlurInOverlayMode;
+ (long long)overlayBlendModeForGrabberState:(long long)arg1 pressed:(_Bool)arg2;
+ (id)grabberColorForGrabberState:(long long)arg1 pressed:(_Bool)arg2;
+ (id)sharedInstance;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_endWallpaperForTransitionWithSuccess:(_Bool)arg1;
- (void)_updateWallpaperForTransition;
- (void)_startUpdatingWallpaperForTransition;
- (void)_configureBackgroundView;
- (struct CGSize)_nativeItemSize;
- (struct CGSize)_itemSize;
- (void)_switcherModelChanged:(id)arg1;
- (_Bool)_sideSwitcherIsPinned;
- (long long)_sideSwitcherGrabberStyleForDisplayItem:(id)arg1;
- (id)_initialDisplayItemsList;
- (void)selectedPageView:(id)arg1;
- (_Bool)canSelectPageView:(id)arg1 numberOfTaps:(long long)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (id)iconViewMapForSwitcherPageView:(id)arg1;
- (struct CGAffineTransform)overlayViewTransformForPageView:(id)arg1;
- (struct CGAffineTransform)contentViewTransformForPageView:(id)arg1;
- (struct CGSize)contentViewSizeForPageView:(id)arg1;
- (long long)resizingPolicyForPageView:(id)arg1;
- (double)iconLabelWidth;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
- (_Bool)sideSwitcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2;
- (double)sideSwitcherScrollerDistanceBetweenItems:(id)arg1;
- (struct CGSize)sideSwitcherScrollerItemSize:(id)arg1;
- (void)sideSwitcherScroller:(id)arg1 purgeView:(id)arg2;
- (id)sideSwitcherScroller:(id)arg1 viewForDisplayItem:(id)arg2;
- (_Bool)supportsReuse;
- (void)willBeginTransitionToVisible:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)view;
- (long long)displayModeForTransitioningDisplayItem;
- (double)heightFromTopForFinalItemSize;
- (void)endTransitionWithSuccess:(_Bool)arg1;
- (void)prepareToEndTransitionAnimated:(_Bool)arg1;
- (void)startTransitionWithDisplayItem:(id)arg1 presenting:(_Bool)arg2 fromDisplayMode:(long long)arg3;
- (void)dealloc;
- (id)_initWithDisplay:(id)arg1;
- (id)initWithDisplay:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

