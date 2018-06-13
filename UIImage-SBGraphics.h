
#import "UIImage.h"

@interface UIImage (SBGraphics)
- (struct CGImage *)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (struct CGImage *)_newThumbnailWithImageSource:(struct CGImageSource *)arg1 forMaxPixelDimension:(double)arg2;
- (id)_thumbnailFitToSize:(struct CGSize)arg1;
- (struct CGImageSource *)_newSource;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(struct CGSize)arg1;
- (_Bool)isAnimated;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (_Bool)sbs_hasAlpha;
@end

