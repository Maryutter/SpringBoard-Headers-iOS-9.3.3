
#import "NSObject.h"

#import "SBUIBannerTargetImplementation.h"

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, SBUIBannerContext, SBUISound;

@interface SBStarkBannerTarget : NSObject <SBUIBannerTargetImplementation>
{
    id <SBStarkBannerTargetObserver> _observer;
    NSHashTable *_sources;
    _Bool _invalidated;
    NSMutableSet *_suspensionReasons;
    NSMutableArray *_pendedContexts;
    SBUIBannerContext *_currentContext;
    SBUISound *_currentSound;
    long long _displayAssertions;
}

- (void)removeCachedBannerForContext:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(id)arg2;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)signalSource:(id)arg1;
- (_Bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
@property(readonly, nonatomic) long long bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)_killIntervalElapsed:(id)arg1;
- (void)_dismissIntervalElapsed:(id)arg1;
- (void)_replaceIntervalElapsed:(id)arg1;
- (void)_dismissContext:(id)arg1 withOptions:(long long)arg2 dismissReason:(int)arg3;
- (void)_dequeueWithOptions:(long long)arg1 dismissReason:(int)arg2;
- (_Bool)_canDequeueWithOptions:(long long)arg1;
- (_Bool)_canDismissWithOptions:(long long)arg1;
- (_Bool)_isSuspendedForAssistant;
- (void)invalidate;
- (void)noteContextCanceled:(id)arg1;
- (void)noteContext:(id)arg1 subActionSelected:(unsigned long long)arg2;
- (void)noteContextSelected:(id)arg1;
- (void)setSuspended:(_Bool)arg1 cancellingCurrent:(_Bool)arg2 forReason:(id)arg3;
- (_Bool)isSuspended;
- (_Bool)isSuspendedForReason:(id)arg1;
@property(nonatomic, getter=isPausedForUserInteraction) _Bool pausedForUserInteraction;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

