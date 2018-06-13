
#import "UIView.h"

#import "SBIconObserver.h"
#import "SBIconProgressViewDelegate.h"
#import "SBReusableView.h"

@class NSString, SBIcon, SBIconProgressView, UIImage, UIImageView;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBReusableView>
{
    SBIcon *_icon;
    double _brightness;
    int _location;
    UIImageView *_overlayView;
    SBIconProgressView *_progressView;
    _Bool _isPaused;
    UIImage *_cachedSquareContentsImage;
    _Bool _showsSquareCorners;
    double _overlayAlpha;
}

+ (id)dequeueRecycledIconImageViewOfClass:(Class)arg1;
+ (void)recycleIconImageView:(id)arg1;
+ (id)windowForRecycledViewsInViewMap:(id)arg1;
+ (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
+ (id)viewMap;
+ (double)cornerRadius;
- (id)_iconSquareOverlayImage;
- (id)_generateIconSquareOverlayImageForFormat:(int)arg1;
- (id)_iconBasicOverlayImage;
- (id)_generateIconBasicOverlayImageForFormat:(int)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_didReceiveLowMemoryWarning:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (struct CGRect)visibleBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)squareDarkeningOverlayImage;
- (id)darkeningOverlayImage;
- (id)squareContentsImage;
- (id)contentsImage;
- (void)_clearCachedImages;
- (id)_generateSquareContentsImage;
- (void)_updateProgressMask;
- (void)_updateOverlayImage;
- (id)_currentOverlayImage;
- (void)updateImageAnimated:(_Bool)arg1;
- (id)snapshot;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setPaused:(_Bool)arg1;
- (void)setProgressAlpha:(double)arg1;
- (void)_clearProgressView;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)setProgressState:(long long)arg1 paused:(_Bool)arg2 percent:(double)arg3 animated:(_Bool)arg4;
- (void)_updateOverlayAlpha;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

