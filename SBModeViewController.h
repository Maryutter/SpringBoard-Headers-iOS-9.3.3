
#import "UIViewController.h"

#import "SBUISizeObservingViewDelegate.h"
#import "_UISettingsKeyPathObserver.h"

@class NSArray, NSString, SBModeControlManager, SBNCColumnViewController, SBNotificationSeparatorView, UIScrollView, UISwipeGestureRecognizer, UIView, UIViewController<SBModeViewControllerContentProviding>;

@interface SBModeViewController : UIViewController <SBUISizeObservingViewDelegate, _UISettingsKeyPathObserver>
{
    id <SBBulletinActionHandler> _bulletinActionHandler;
    SBNCColumnViewController *_selectedViewController;
    SBNCColumnViewController *_deselectedViewController;
    UIScrollView *_contentView;
    UIView *_headerView;
    SBModeControlManager *_modeControl;
    UISwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    SBNotificationSeparatorView *_separator;
    struct {
        unsigned int isHeaderLayoutValid:1;
        unsigned int isContentLayoutValid:1;
        unsigned int isSegmentLayoutValid:1;
        unsigned int isRequestHandlingEnabled:1;
        unsigned int shouldLoadAllChildViews:1;
        unsigned int delegateProvidesContentInsets:1;
    } _modeViewControllerFlags;
    id <SBModeViewControllerDelegate> _modeViewControllerDelegate;
}

+ (id)_buttonTitleFont;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)setWidgetDelegate:(id)arg1;
- (id)widgetDelegate;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(id)arg3;
- (struct CGRect)rectForBulletin:(id)arg1;
@property(nonatomic, getter=isRequestHandlingEnabled) _Bool requestHandlingEnabled;
- (_Bool)_isRequestHandlingEnabled;
- (void)handleModeChange:(id)arg1;
@property(retain, nonatomic) NSArray *viewControllers;
@property(nonatomic) __weak UIViewController<SBModeViewControllerContentProviding> *selectedViewController;
- (void)setSelectedViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setSelectedBulletinObserverViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_contentOffset:(struct CGPoint *)arg1 forChildViewController:(id)arg2;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (_Bool)_addBulletinObserverViewController:(id)arg1;
- (void)_setSelectedSegmentIndex:(long long)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)_invalidateSegmentLayout;
- (void)_invalidateContentLayout;
- (void)_invalidateHeaderLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)_viewIfLoaded;
- (void)viewWillLayoutSubviews;
- (void)_layoutContentIfNecessary;
- (void)_setContentViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (_Bool)_isChildViewControllerViewLoadedInContentView:(id)arg1;
- (void)_layoutSegmentsIfNecessary;
- (void)_layoutHeaderViewIfNecessary;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_loadContentView;
- (id)_newSwipeGestureRecognizerWithDirection:(unsigned long long)arg1;
- (void)_updateEnabledStateOfSwipeGestures;
- (void)_loadHeaderView;
- (long long)layoutMode;
- (double)_headerViewHeightForMode:(long long)arg1;
- (struct CGRect)_modeControlFrameWithHeaderBounds:(struct CGRect)arg1 forMode:(long long)arg2;
- (struct UIEdgeInsets)_contentInsets;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

