
#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"
#import "SBWallpaperObserver.h"

@class NSString, SBAppSwitcherStatusBarViewCache, SBFakeStatusBarView;

@interface SBAppSwitcherHomePageCellView : UIView <SBWallpaperObserver, SBMainAppSwitcherPageContentView>
{
    UIView *_possiblyRotatedContainer;
    UIView *_nonRotatedContainer;
    UIView *_homeScreenView;
    UIView *_homeSnapshot;
    UIView *_wallpaperView;
    SBFakeStatusBarView *_fakeStatusBar;
    SBAppSwitcherStatusBarViewCache *_statusBarCache;
    _Bool _usesSnapshots;
    long long _snapshotOrientation;
    long long _orientation;
}

+ (id)wallpaperSnapshotForZoomFactor:(double)arg1 orientation:(long long)arg2;
- (void)_updateWallpaperView;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)_viewDidAnimatePresentation:(id)arg1;
- (void)_viewDismissing:(id)arg1;
- (void)_viewPresenting:(id)arg1;
- (void)_addHomeScreenViewAsSubview:(id)arg1;
- (void)setHomeSnapshot:(id)arg1 inOrientation:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLegibilitySettings:(id)arg1;
- (void)_statusBarStyleOverridesDidChange:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 statusBarCache:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
