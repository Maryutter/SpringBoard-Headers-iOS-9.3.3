
#import "NSObject.h"

#import "SBWorkStoreObserver.h"

@class AppLaunchStats, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SBWorkStore;

@interface SBBackgroundMultitaskingManager : NSObject <SBWorkStoreObserver>
{
    NSMutableDictionary *_appToBackgroundTasks;
    NSMutableDictionary *_backgroundFetchTaskValueToWatchdoggableCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    SBWorkStore *_pendingWorkStore;
    AppLaunchStats *_appLaunchStats;
    double _watchdogTimeout;
}

+ (_Bool)shouldFakeAdoption;
+ (id)sharedInstance;
- (void)handlePushNotificationFromApplication:(id)arg1 userInfo:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (id)_opportunisticallyUpdateApplications:(id)arg1 trigger:(unsigned long long)arg2;
- (void)_performPendingWorkForBundleID:(id)arg1;
- (_Bool)_launchAppForUpdating:(id)arg1 trigger:(unsigned long long)arg2 pushNotificationUserInfo:(id)arg3 withWatchdoggableCompletion:(id)arg4;
- (_Bool)_appIsBeingDebugged:(id)arg1;
- (void)_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(id)arg4;
- (void)queue_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(id)arg4;
- (void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2;
- (void)queue_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2;
- (void)_invalidateBackgroundTasksForApplication:(id)arg1;
- (void)queue_invalidateBackgroundTasksForApplication:(id)arg1;
- (void)_watchdogCompletionForBackgroundFetchTaskValue:(id)arg1;
- (void)queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:(id)arg1;
- (void)queue_appFinishedBackgroundUpdating:(id)arg1 sequenceNumber:(int)arg2 result:(unsigned long long)arg3;
- (void)_appFinishedBackgroundUpdating:(id)arg1 sequenceNumber:(int)arg2 result:(unsigned long long)arg3;
- (void)_appStateDidChange:(id)arg1;
- (void)workDidChange:(id)arg1;
- (void)application:(id)arg1 didSetMinimumFetchInterval:(double)arg2;
- (int)nextSequenceNumber;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

