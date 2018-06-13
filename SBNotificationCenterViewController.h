
#import "UIViewController.h"

#import "SBBulletinActionHandler.h"
#import "SBNCTableViewControllerDelegate.h"
#import "SBNotificationCenterWidgetHost.h"
#import "SBReachabilityObserver.h"
#import "SBUISizeObservingViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSSet, NSString, SBChevronView, SBNotificationCenterLayoutViewController, SBNotificationSeparatorView, UIGestureRecognizer, UIStatusBar, UIView, _UIBackdropView;

@interface SBNotificationCenterViewController : UIViewController <SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate, UIGestureRecognizerDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler, SBReachabilityObserver>
{
    id <SBNotificationCenterViewControllerDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_modeClippingView;
    SBNotificationSeparatorView *_bottomSeparator;
    SBNotificationCenterLayoutViewController *_layoutViewController;
    UIStatusBar *_statusBar;
    SBChevronView *_grabberView;
    UIView *_grabberContentView;
    UIView *_grabberBackgroundView;
    SBChevronView *_registeredGrabberView;
    struct CGRect _grabberContentViewFrameForRegisteredGrabber;
    id _registeredGrabberHideBlock;
    struct {
        unsigned int blursBackground:1;
        unsigned int showsBackground:1;
        unsigned int isBackgroundValid:1;
        unsigned int isGrabberEnabled:1;
        unsigned int isGrabberLockEngaged:1;
        unsigned int viewHitTestsAsOpaque:1;
        unsigned int isViewHitTestingValid:1;
    } _notificationCenterViewControllerFlags;
    _Bool _showingForReachability;
    struct CGPoint _preReachabilityOrigin;
    struct CGPoint _reachabilityOrigin;
    _Bool _preReachabilityGrabberHidden;
    struct CGRect _preReachabilityGrabberFrame;
    struct CGPoint _preReachabilitySeparatorOrigin;
    struct CGPoint _reachabilitySeparatorOrigin;
    UIGestureRecognizer *_tapToCancelReachabilityGestureRecognizer;
}

+ (id)grayControlInteractionTintColor;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_animateForReachabilityDeactivatedWithHandler:(id)arg1;
- (void)_animateForReachabilityActivatedWithHandler:(id)arg1;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 useAAGView:(_Bool)arg4;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(id)arg3;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(nonatomic) __weak id <SBWidgetViewControllerDelegate> widgetDelegate;
- (struct CGRect)grabberContentRect;
- (void)updateForChangeInLockedState;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (void)_setContainerFrame:(struct CGRect)arg1;
- (struct CGRect)_containerFrame;
- (struct CGRect)_containerFrame:(_Bool)arg1;
@property(nonatomic) struct UIEdgeInsets clippingInsets;
@property(nonatomic) double contentViewAlpha;
- (void)dismissGrabberView;
- (void)presentGrabberView;
- (struct CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
- (struct CGRect)_grabberContentViewFrameForRegisteredGrabber;
- (void)abortAnimatedPositionChange;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (void)_setViewHitTestAsOpaque:(_Bool)arg1;
- (id)colorForElement:(long long)arg1;
- (id)_relevanceDateColor;
- (id)_grabberColor;
- (void)disableGrabberLock;
- (_Bool)isGrabberLocked;
@property(nonatomic, getter=isGrabberViewEnabled) _Bool grabberViewEnabled;
- (void)_configureGrabberForSoloMode:(_Bool)arg1;
- (id)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1 withHideBlock:(id)arg2;
- (void)_registerGrabberView:(id)arg1 withHideBlock:(id)arg2;
- (struct CGRect)revealRectForBulletin:(id)arg1;
- (void)prepareLayoutForPresentationFromBanner;
@property(nonatomic, getter=isSuppressingNotificationUpdates) _Bool suppressesNotificationUpdates;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
@property(readonly, nonatomic) long long layoutMode;
- (void)viewDidLoad;
- (void)loadView;
- (void)_loadLayoutViewControllerView;
- (void)_loadModeClippingView;
- (void)_loadBottomSeparator;
- (void)_loadGrabberContentView;
- (id)_newGrabberView;
- (void)_updateContrastSettingsForBottomSeparator;
- (void)_updateContrastSettingsForGrabberView;
- (void)_loadStatusBar;
- (void)_loadContentView;
- (void)_loadContainerView;
- (void)_loadClippingView;
- (void)_configureView;
- (void)_validateBackgroundViewIfNecessary;
@property(readonly, nonatomic) _UIBackdropView *backdropView;
@property(nonatomic) _Bool blursBackground;
@property(nonatomic) _Bool showsBackground;
- (id)_newBackgroundView;
@property(readonly, copy, nonatomic) NSSet *visibleContentViewControllers;
- (id)widgetHandlingViewControllerForWidgetWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *widgetHandlingViewControllers;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

