
#import "UIView.h"

#import "SBAppViewBackgroundView.h"
#import "SBWallpaperObserver.h"
#import "_SBFakeBlurObserver.h"

@class NSString, UIColor, UIImage, UIImageView, UIView<_SBFakeBlur>;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBAppViewBackgroundView>
{
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    _Bool _shouldMaskBlur;
    _Bool _shouldMaskTint;
    _Bool _fullscreen;
    _Bool _forcesOpaque;
    _Bool _accessibilityReduceTransparencyEnabled;
}

+ (id)imageInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(_Bool)arg6 masksTint:(_Bool)arg7;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)updateBackgroundImage;
- (void)setAppearanceStorage:(id)arg1;
- (id)appearanceStorage;
- (void)setBarWantsAdaptiveBackdrop:(_Bool)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(_Bool)arg1;
- (void)_configureViews;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (void)_setTransitionFraction:(double)arg1;
@property(nonatomic) long long wallpaperStyle;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;
- (void)layoutSubviews;
- (void)setMaskImage:(id)arg1 masksBlur:(_Bool)arg2 masksTint:(_Bool)arg3;
- (_Bool)currentTransitionStateIsOpaque;
- (void)setTransitionState:(id)arg1;
- (_Bool)prepareToAnimateToTransitionState:(inout id *)arg1;
- (void)setStyle:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithWallpaperVariant:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool hasDiscreteWallpaperEffect;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

