
#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class NSHashTable, NSMutableSet, NSString, SBSearchScrollView, UIPanGestureRecognizer, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate>
{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    _Bool _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    _Bool _isActivated;
    _Bool _isDismissing;
    _Bool _animatingResetOrReveal;
    UIView *_targetView;
}

+ (id)sharedInstance;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_displayLaunched:(id)arg1;
- (void)_openFolderChanged:(id)arg1;
- (void)_iconEditingStateChanged:(id)arg1;
- (void)_updateScrollingEnabled;
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (_Bool)_isShowingSearch;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)setDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)resetAnimated:(_Bool)arg1;
- (void)revealAnimated:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateForRotation;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

