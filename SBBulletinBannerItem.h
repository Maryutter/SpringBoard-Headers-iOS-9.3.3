
#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource.h"

@class BBBulletin, BBObserver, NSArray, NSString, SBUISound, UIImage;

@interface SBBulletinBannerItem : SBUIBannerItem <SBDefaultBannerViewSource>
{
    BBBulletin *_seedBulletin;
    BBObserver *_observer;
    NSArray *_additionalBulletins;
    UIImage *_iconImage;
    SBUISound *_sound;
}

+ (id)itemWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3;
+ (id)itemWithBulletin:(id)arg1 andObserver:(id)arg2;
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (_Bool)showMessagePreview;
- (id)attachmentImage;
- (id)attachmentText;
- (id)iconImage;
- (id)sourceDate;
- (id)_seedBulletinMessage;
- (id)suppressedMessage;
- (id)message;
- (id)subtitle;
- (id)title;
- (id)actionWithIdentifier:(id)arg1;
- (_Bool)_supportsSubActions;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)_defaultBBAction;
- (id)defaultActionWithContext:(id)arg1;
- (id)subActions;
- (id)subActionLabels;
- (id)pullDownNotification;
- (_Bool)canShowInAssistant;
- (id)sortDate;
- (id)seedBulletin;
- (id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2;
- (id)action;
- (id)sound;
- (void)_setSound;
- (id)accessoryIconMask;
- (id)additionalBulletins;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)_initWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

