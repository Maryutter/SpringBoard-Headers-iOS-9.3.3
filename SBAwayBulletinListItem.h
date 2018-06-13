
#import "SBAwayListItem.h"

@class BBBulletin, BBObserver, NSDate, NSMutableArray, NSString, UIImage, UIViewController;

@interface SBAwayBulletinListItem : SBAwayListItem
{
    NSMutableArray *_bulletins;
    int _personID;
    NSString *_contactInfo;
    BBObserver *_observer;
    NSDate *_sortDate;
    NSDate *_displayDate;
    NSString *_message;
    UIImage *_listItemImage;
    _Bool _shouldPlayLightsAndSirens;
    BBBulletin *_activeBulletin;
    UIViewController *_secondaryContentViewController;
}

- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (void)prepareWithCompletion:(id)arg1;
- (id)observer;
- (long long)snoozeButtonindex;
- (_Bool)wantsHighlightOnInsert;
- (void)buttonPressed;
- (_Bool)canBeRemovedByUnlock;
- (_Bool)canBeRemovedByNotificationCenterPresentation;
- (_Bool)allowsAutomaticRemovalFromLockScreen;
- (_Bool)wantsFullscreenPresentation;
- (_Bool)canSnooze;
- (_Bool)canCoalesceWithBulletin:(id)arg1;
- (_Bool)hasSamePersonAsBulletin:(id)arg1;
- (id)attachmentText;
- (id)attachmentImageForKey:(id)arg1;
- (id)iconImage;
- (id)description;
- (unsigned long long)maxMessageLines;
- (id)subtitle;
- (id)publishDate;
- (id)date;
- (_Bool)hasEventDate;
- (id)title;
- (id)message;
- (id)bulletins;
- (id)sortDate;
- (_Bool)containsBulletinWithID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)removeAllBulletins;
- (void)removeBulletin:(id)arg1;
- (void)addBulletin:(id)arg1;
- (void)_updateMessage;
- (_Bool)_hasCustomSecondaryContent;
- (_Bool)_suppressesMessageForPrivacy;
- (void)_updateImage;
- (void)_updateDisplayDate;
- (void)_updateSortDate;
- (void)_updateActiveBulletin;
- (id)sortedBulletins;
- (void)_update;
- (id)bulletinWithID:(id)arg1;
- (id)initWithBulletin:(id)arg1 andObserver:(id)arg2;

@end

