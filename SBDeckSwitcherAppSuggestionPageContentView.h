
#import "SBSwitcherWallpaperPageContentView.h"

@class SBAppView, SBDisplayItem, SBOrientationTransformWrapperView, SBZoomableCrossfadeView, UIImageView, UILabel, UIView;

@interface SBDeckSwitcherAppSuggestionPageContentView : SBSwitcherWallpaperPageContentView
{
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    SBAppView *_zoomUpAppView;
    SBDisplayItem *_displayItem;
    SBZoomableCrossfadeView *_zoomUpCrossfadeView;
    SBOrientationTransformWrapperView *_appViewLayoutWrapper;
}

- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)layoutSubviews;
- (id)_firstWakeGreetingString;
- (id)_meCardShortName;
- (id)_bottomStringForSuggestion:(id)arg1;
- (id)_topStringForSuggestion:(id)arg1;
- (id)_imageForSuggestion:(id)arg1;
- (void)_configureImageAndLabelsForSuggestion:(id)arg1;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1 displayItem:(id)arg2 suggestedApp:(id)arg3;

@end

