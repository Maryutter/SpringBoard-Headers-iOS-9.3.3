
#import "NSObject.h"

@interface SBBulletinAttachmentFactory : NSObject
{
}

+ (id)bannerTextForAdditionalAttachments:(unsigned long long)arg1 showingImage:(_Bool)arg2;
+ (id)listTextForAdditionalAttachmentCount:(unsigned long long)arg1;
+ (id)_nAttachments:(unsigned long long)arg1;
+ (id)_nMoreAttachments:(unsigned long long)arg1;
+ (id)modalImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2;
+ (id)bannerImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2;
+ (id)lockScreenFloatingImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2;
+ (id)listImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2;
+ (id)_listImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2 forFloatingAlert:(_Bool)arg3;
+ (id)_imageFromPNGData:(id)arg1;
+ (id)_imageByCroppingOrPaddingImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)_genericImageForAttachmentType:(long long)arg1;
+ (id)modalThumbnailConstraintsForAttachmentType:(long long)arg1;
+ (id)bannerThumbnailConstraintsForAttachmentType:(long long)arg1;
+ (id)lockScreenFloatingThumbnailContraintsForAttachmentType:(long long)arg1;
+ (id)listThumbnailConstraintsForAttachmentType:(long long)arg1;
+ (struct CGSize)bannerImageSizeForAttachmentType:(long long)arg1 thumbnailWidth:(double)arg2 height:(double)arg3;
+ (struct CGSize)listImageSizeForAttachmentType:(long long)arg1 thumbnailWidth:(double)arg2 height:(double)arg3;

@end

