
#import "NSObject.h"

@class NSArray, SBBestAppSuggestion, SBDisplayItem, SBMainDisplayLayoutState, SBWorkspaceTransitionRequest, _UILegibilitySettings;

@protocol SBMainAppSwitcherContentViewControlling <NSObject>
+ (double)snapshotScale;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) id <SBMainAppSwitcherContentViewControllerDelegate> delegate;
@property(copy, nonatomic) NSArray *displayItems;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState;
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem;
- (void)replaceDisplayItem:(SBDisplayItem *)arg1 withDisplayItem:(SBDisplayItem *)arg2 completion:(void (^)(_Bool, SBDisplayItem *, SBDisplayItem *))arg3;
- (void)removeDisplayItem:(SBDisplayItem *)arg1 updateScrollPosition:(_Bool)arg2 forReason:(long long)arg3 completion:(void (^)(_Bool, SBDisplayItem *, SBDisplayItem *))arg4;
- (void)insertDisplayItem:(SBDisplayItem *)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(_Bool)arg3 completion:(void (^)(_Bool, SBDisplayItem *, SBDisplayItem *))arg4;
- (void)animateDismissalToDisplayItem:(SBDisplayItem *)arg1 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg2 withCompletion:(void (^)(void))arg3;
- (void)animatePresentationForTransitionRequest:(SBWorkspaceTransitionRequest *)arg1 withCompletion:(void (^)(void))arg2;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (SBDisplayItem *)nextDisplayItem;
- (void)setTransitionParameters:(id)arg1;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)startInteractiveTransition:(_Bool)arg1 presenting:(_Bool)arg2 withRequest:(SBWorkspaceTransitionRequest *)arg3;
- (void)invalidate;
@end

