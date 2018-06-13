
#import "NSObject.h"

#import "SBApplicationPlaceholderDelegate.h"
#import "SBApplicationPlaceholderLifecycleObserver.h"
#import "SBIconObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString, SBApplicationController, SBApplicationLibraryObserver;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate>
{
    SBApplicationController *_appController;
    SBApplicationLibraryObserver *_lsWorkspaceObserver;
    NSMutableDictionary *_placeholdersByBundleID;
    NSMutableSet *_pendingAdded;
    NSMutableSet *_pendingInstalled;
    NSMutableSet *_pendingCancelled;
    NSMutableSet *_removingPlaceholderProxies;
    _Bool _hasDownloadedFromStore;
    _Bool _usingNetwork;
}

+ (id)sharedInstance;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (_Bool)placeholderShouldAllowPausing:(id)arg1;
- (void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;
- (void)_downloadsEnded;
- (void)_finishPlaceholder:(id)arg1;
- (void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(id)arg2;
- (void)_removeDownloadingIcons:(id)arg1 saveState:(_Bool)arg2;
- (void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 placeholderProxy:(id)arg3;
- (void)_removePlaceholders:(id)arg1 forInstall:(_Bool)arg2;
- (void)_addPlaceholders:(id)arg1;
- (void)_processPendingProxies;
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;
- (void)applicationPlaceholdersCancelled:(id)arg1;
- (void)applicationPlaceholdersInstalled:(id)arg1;
- (void)applicationPlaceholdersAdded:(id)arg1;
- (_Bool)isUsingNetwork;
- (_Bool)hasDownloadedStoreApplication;
- (id)placeholderForDisplayID:(id)arg1;
- (id)placeholdersByDisplayID;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

