
#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBBulletinAlertHandler.h"
#import "SBBulletinBusyClient.h"

@class BBObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface SBBulletinModalController : NSObject <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient>
{
    BBObserver *_observer;
    NSMutableArray *_incomingBulletinEventQueue;
    NSMutableDictionary *_handlersBySectionID;
    NSMapTable *_handlersByBulletinID;
    NSMapTable *_alertsByBulletinID;
    _Bool _quietModeEnabled;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)showTestBulletin;
- (void)_syncDismissalForBulletin:(id)arg1;
- (void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3;
- (_Bool)bindBulletin:(id)arg1 forRegistry:(id)arg2;
- (void)bulletinWindowStoppedBeingBusy;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(id)arg5;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_executeOrPendEventBlock:(id)arg1 forFeed:(unsigned long long)arg2 bulletin:(id)arg3;
- (void)_dequeuePendedEventsIfPossible;
- (_Bool)canShowAlertForFeed:(unsigned long long)arg1;
- (_Bool)isBulletinWindowBusy;
- (_Bool)isDevicePasscodeLocked;
- (_Bool)isLockScreenActive;
- (_Bool)isDeviceUILocked;
- (id)attachmentImageForBulletin:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

