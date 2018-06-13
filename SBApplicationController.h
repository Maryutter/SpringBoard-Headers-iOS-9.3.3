
#import "NSObject.h"

#import "FBApplicationTerminationAssertionServiceDelegate.h"
#import "FBUIApplicationServiceDelegate.h"
#import "SBApplicationLifecycleObserver.h"
#import "SBApplicationRestrictionDataSource.h"
#import "SBApplicationServerDelegate.h"

@class BKSApplicationStateMonitor, FBApplicationLibrary, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBApplicationInfo, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, SBApplicationLifecycleObserver, FBUIApplicationServiceDelegate, FBApplicationTerminationAssertionServiceDelegate, SBApplicationServerDelegate>
{
    NSMutableDictionary *_applicationsByBundleIdentifer;
    NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
    NSDictionary *_backgroundDisplayDict;
    NSLock *_applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    BKSApplicationStateMonitor *_appStateMonitor;
    _Bool _booting;
    NSMutableSet *_appsToAutoLaunchAfterBoot;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
}

+ (void)_setClearAllLegacySnapshotsWhenLoaded:(_Bool)arg1;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)applicationServer:(id)arg1 setDynamicShortcutItems:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationServer:(id)arg1 fetchDynamicShortcutItemsForBundleIdentifier:(id)arg2 withCompletion:(id)arg3;
- (void)applicationServer:(id)arg1 setRemovalAllowed:(_Bool)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationServer:(id)arg1 fetchRemovabilityForBundleIdentifier:(id)arg2 withCompletion:(id)arg3;
- (void)applicationServer:(id)arg1 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg2 withCompletion:(id)arg3;
- (void)service:(id)arg1 didRelinquishTerminationAssertion:(id)arg2;
- (void)service:(id)arg1 didAcquireTerminationAssertion:(id)arg2;
- (void)service:(id)arg1 canAcquireTerminationAssertion:(id)arg2 completionHandler:(id)arg3;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)noteNeedsToRefreshVisiblityOverrides;
- (void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;
- (void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2;
- (void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(id)arg3;
- (void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationsDemoted:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsModified:(id)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)_updateVisibilityOverrides;
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(_Bool)arg3;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;
- (id)_loadApplications:(id)arg1 removed:(id)arg2;
- (id)_appInfosToBundleIDs:(id)arg1;
- (void)_loadApplicationFromApplicationInfo:(id)arg1;
- (Class)_appClassForInfo:(id)arg1;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_preLoadApplications;
- (void)_memoryWarningReceived;
- (void)_lockStateChanged:(id)arg1;
- (void)_unusuallyMutedAudioPlaying:(id)arg1;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_deviceFirstUnlocked;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (_Bool)_loadApplicationWithoutMutatingIconState:(id)arg1;
- (void)_autoLaunchAppsIfNecessaryAfterBoot;
- (id)restrictionController;
- (id)loginApplication;
- (id)webApplications;
- (id)iPodOutApplication;
- (id)cameraApplication;
- (id)clockApplication;
- (id)inCallServiceApp;
- (id)faceTimeApp;
- (id)mobilePhone;
- (id)setupApplication;
- (id)dataActivation;
- (id)musicApplication;
- (void)waitForUninstallsToComplete;
- (void)uninstallApplication:(id)arg1;
- (id)applicationWithPid:(int)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)runningApplications;
- (id)allApplications;
- (id)allBundleIdentifiers;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

