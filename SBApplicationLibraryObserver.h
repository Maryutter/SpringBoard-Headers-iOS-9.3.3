
#import "NSObject.h"

#import "FBApplicationLibraryObserver.h"

@class FBApplicationLibrary, NSArray, NSHashTable, NSMutableDictionary, NSString;

@interface SBApplicationLibraryObserver : NSObject <FBApplicationLibraryObserver>
{
    FBApplicationLibrary *_appLibrary;
    NSMutableDictionary *_placeholdersByBundleID;
    NSHashTable *_applicationObservers;
    NSHashTable *_placeholderObservers;
}

+ (id)sharedInstance;
- (void)applicationLibrary:(id)arg1 networkUsageDidChange:(_Bool)arg2;
- (void)applicationLibrary:(id)arg1 didDemoteApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)applicationLibrary:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)_removeObserver:(id)arg1 table:(id)arg2;
- (void)_addObserver:(id)arg1 table:(id)arg2;
- (void)removePlaceholderLifecycleObserver:(id)arg1;
- (void)addPlaceholderLifecycleObserver:(id)arg1;
- (void)removeApplicationLifecycleObserver:(id)arg1;
- (void)addApplicationLifecycleObserver:(id)arg1;
- (void)notePlaceholderCancelled:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *placeholders;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

