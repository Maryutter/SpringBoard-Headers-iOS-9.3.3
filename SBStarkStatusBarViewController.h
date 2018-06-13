
#import "UIViewController.h"

#import "UIStatusBarStyleDelegate.h"

@class NSMutableSet, NSString, SBStarkStatusBarStateProvider, UIStatusBar, UIView;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    UIStatusBar *_statusBarView;
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;
    NSMutableSet *_statusBarHideReasons;
    long long _requestedStyle;
    _Bool _styleHasBeenRequested;
    double _statusBarWidth;
    UIView *_separatorView;
    _Bool _separatorHidden;
}

- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (_Bool)_isStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_layoutStatusBar:(id)arg1;
- (id)newFakeStatusBarWithStyle:(long long)arg1;
- (id)newFakeStatusBar;
- (void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(nonatomic) __weak id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

