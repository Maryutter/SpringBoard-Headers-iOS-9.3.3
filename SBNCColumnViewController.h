
#import "UIViewController.h"

#import "SBModeViewControllerContentProviding.h"
#import "SBNCTableViewControllerDelegate.h"
#import "SBUISizeObservingViewDelegate.h"

@class NSString, SBNCTableViewController, UIView, _UIContentUnavailableView;

@interface SBNCColumnViewController : UIViewController <SBModeViewControllerContentProviding, SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate>
{
    SBNCTableViewController *_ncTableViewController;
    _UIContentUnavailableView *_contentUnavailableView;
    struct {
        unsigned int scrollsToTop:1;
        unsigned int isLayoutValid:1;
    } _columnViewControllerFlags;
    UIView *_contentProvidingView;
    _Bool _requestHandlingEnabled;
    id <SBBulletinActionHandler> _bulletinActionHandler;
}

+ (unsigned long long)_contentUnavailableVibrantOptionsForCurrentState;
- (_Bool)canRemoveViewOnDismissal:(id)arg1;
- (long long)layoutModeForNotificationCenterTableViewController:(id)arg1;
- (long long)notificationCenterTableViewController:(id)arg1 replacementAnimationForRow:(id)arg2 inSection:(id)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 removalAnimationForRow:(id)arg2 inSection:(id)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)reloadSortOrder;
- (void)invalidateContentLayout;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) long long layoutMode;
- (void)viewDidLoad;
- (void)insertAppropriateViewWithContent;
- (void)loadView;
- (void)transitionToContentUnavailableViewIfNecessary;
- (void)transitionToBulletinViewControllerViewIfNecessary;
- (void)_transitionToBulletinViewControllerView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_insertContentUnavailableView;
- (void)_removeBulletinViewControllerView;
- (void)insertTableView;
@property(readonly, nonatomic) __weak NSString *contentUnavailableText;
@property(nonatomic) _Bool scrollsToTop;
- (id)_lazyContentUnavailableView;
- (void)dealloc;
@property(readonly, nonatomic) __weak Class tableViewControllerClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

