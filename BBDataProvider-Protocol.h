
#import "BBSectionIdentity.h"

@class BBActionResponse, BBBulletinRequestParameters, BBSectionInfo, BBSectionParameters, BBThumbnailSizeConstraints, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@protocol BBDataProvider <BBSectionIdentity>
- (NSArray *)sortDescriptors;

@optional
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (NSString *)displayNameForFilterID:(NSString *)arg1;
- (_Bool)syncsBulletinDismissal;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;
- (void)receiveMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (_Bool)migrateSectionInfo:(BBSectionInfo *)arg1 oldSectionInfo:(BBSectionInfo *)arg2;
- (NSString *)displayNameForSubsectionID:(NSString *)arg1;
- (NSArray *)defaultSubsectionInfos;
- (void)dataProviderDidLoad;
- (float)attachmentAspectRatioForRecordID:(NSString *)arg1;
- (NSData *)primaryAttachmentDataForRecordID:(NSString *)arg1;
- (NSData *)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2;
- (BBSectionParameters *)sectionParameters;
- (id)clearedInfoForBulletins:(NSSet *)arg1;
- (id)clearedInfoForClearingBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 lastClearedInfo:(id)arg3;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (NSSet *)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2;
@end

