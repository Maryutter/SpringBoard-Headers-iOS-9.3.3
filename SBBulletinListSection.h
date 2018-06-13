
#import "NSObject.h"

@class BBSectionInfo, NSArray, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, UIImage;

@interface SBBulletinListSection : NSObject
{
    NSString *_sectionID;
    long long _sectionType;
    id _widget;
    NSMutableArray *_bulletins;
    NSMutableSet *_bulletinIDs;
    NSArray *_sortDescriptors;
    NSString *_displayName;
    UIImage *_iconImage;
    _Bool _showsInLockScreen;
    _Bool _showsMessagePreview;
    unsigned long long _messageNumberOfLines;
    _Bool _displaysCriticalBulletins;
    NSDate *_lastSortDate;
    NSMutableSet *_subsections;
    UIImage *_largeIconImage;
    BBSectionInfo *_sectionInfo;
}

- (void)setShowsMessagePreview:(_Bool)arg1 forSubsectionID:(id)arg2;
- (_Bool)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1;
- (_Bool)showsMessagePreviewForBulletinID:(id)arg1;
- (void)setShowsInLockScreen:(_Bool)arg1 forSubsectionID:(id)arg2;
- (_Bool)showsBulletinsInSubsectionIDInLockScreen:(id)arg1;
- (_Bool)showsBulletinIDInLockScreen:(id)arg1;
- (id)_subsectionWithIDCreatingIfNecessary:(id)arg1;
@property(readonly, nonatomic) __weak NSSet *subsectionIDs;
- (_Bool)hasBulletinWithID:(id)arg1;
- (id)bulletinWithBulletinID:(id)arg1;
- (id)bulletinAtIndex:(unsigned long long)arg1;
- (unsigned long long)replaceBulletin:(id)arg1 withBulletin:(id)arg2;
- (unsigned long long)removeBulletin:(id)arg1;
- (unsigned long long)_removeBulletin:(id)arg1;
- (unsigned long long)addBulletin:(id)arg1;
- (id)_sortDateForBulletin:(id)arg1;
- (unsigned long long)indexOfBulletinID:(id)arg1;
- (unsigned long long)_indexForNewBulletin:(id)arg1;
- (long long)compareSection:(id)arg1 forOrder:(long long)arg2;
- (long long)compare:(id)arg1;
- (void)_updateWithSectionInfo:(id)arg1;
- (void)updateWithSectionInfo:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;
- (_Bool)displaysCriticalBulletins;
- (id)lastSortDate;
- (_Bool)hasClearableBulletins;
- (unsigned long long)bulletinCount;
- (_Bool)isBulletinSection;
- (_Bool)isWidgetSection;
- (id)description;

@end

