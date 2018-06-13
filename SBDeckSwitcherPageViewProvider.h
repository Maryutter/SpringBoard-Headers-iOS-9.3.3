
#import "NSObject.h"

#import "SBAppSwitcherPageViewDelegate.h"
#import "SBAppViewHostRequester.h"
#import "SBSwitcherAppViewWrapperPageContentViewDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SBDeckSwitcherPageView;

@interface SBDeckSwitcherPageViewProvider : NSObject <SBAppSwitcherPageViewDelegate, SBSwitcherAppViewWrapperPageContentViewDelegate, SBAppViewHostRequester>
{
    id <SBDeckSwitcherPageViewProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    struct _NSRange _lastVisibleRange;
    SBDeckSwitcherPageView *_homeScreenPageView;
    NSMutableDictionary *_hostedApps;
    NSMutableDictionary *_appSnapshots;
    NSMutableDictionary *_switcherServiceViewControllerMap;
}

+ (_Bool)_useSnapshotsWhenPossible;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (struct CGSize)sizeForAppView:(id)arg1 representing:(id)arg2;
- (struct CGAffineTransform)contentViewTransformForPageView:(id)arg1;
- (long long)resizingPolicyForPageView:(id)arg1;
- (id)_viewForRemoteAlert:(id)arg1 placeholder:(_Bool)arg2 displayItem:(id)arg3;
- (id)_viewForService:(id)arg1 displayItem:(id)arg2;
- (id)_snapshotViewForDisplayItem:(id)arg1 preferringDownscaledSnapshot:(_Bool)arg2 synchronously:(_Bool)arg3;
- (_Bool)_shouldHostAppDisplayItem:(id)arg1;
- (id)_contextHostingAppViewForDisplayItem:(id)arg1;
- (id)_homePageContentView;
- (void)_updateCachedPageViewsWithVisibleItemRange:(struct _NSRange)arg1 scrollDirection:(_Bool)arg2 allItems:(id)arg3;
- (unsigned long long)_totalItemsForWhichToKeepAroundSnapshots;
- (_Bool)_isSnapshotDisplayItem:(id)arg1;
- (id)_containerViewController;
- (id)_initialLayoutState;
- (id)_initialDisplayItem;
- (struct CGSize)_contentSizeForDisplayItem:(id)arg1;
- (struct CGSize)_pageViewSizeForDisplayItem:(id)arg1;
- (long long)_interfaceOrientation;
- (id)currentlyHostedDisplayItems;
- (void)updateCachedPageViewsWithVisibleItemRange:(struct _NSRange)arg1 scrollDirection:(_Bool)arg2 allItems:(id)arg3;
- (void)purgePageViewForDisplayItem:(id)arg1;
- (id)pageViewForDisplayItem:(id)arg1 synchronously:(_Bool)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

