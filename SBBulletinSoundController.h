
#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBBulletinBusyClient.h"

@class BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SBBulletinSoundController : NSObject <BBObserverDelegate, SBBulletinBusyClient>
{
    BBObserver *_observer;
    NSMutableArray *_blockQueue;
    NSMutableDictionary *_playingSounds;
    NSMutableSet *_internalBulletinsWePlayedSoundsFor;
    NSMutableSet *_bulletinsRequiringExplicitKill;
    _Bool _deviceIsLocked;
    _Bool _quietModeEnabled;
    unsigned long long _quietModeState;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)bulletinWindowStoppedBeingBusy;
- (_Bool)isLockScreenActive;
- (_Bool)isDeviceUILocked;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned long long)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(id)arg5;
- (void)_enqueueBlock:(id)arg1 forFeed:(unsigned long long)arg2 bulletin:(id)arg3;
- (_Bool)_shouldHonorPlaySoundRequestForBulletin:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (_Bool)_playSoundForBulletin:(id)arg1 playedInternally:(_Bool)arg2;
- (void)_stopSoundWithID:(id)arg1 internalOnly:(_Bool)arg2;
- (unsigned long long)quietModeState;
- (_Bool)quietModeEnabled;
- (void)killSounds;
- (void)killSoundForBulletin:(id)arg1;
- (_Bool)isPlayingSoundForBulletin:(id)arg1;
- (_Bool)playSoundForBulletin:(id)arg1;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

