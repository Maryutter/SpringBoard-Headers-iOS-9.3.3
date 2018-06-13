
#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_desiredIconState;
    NSOrderedSet *_desiredIconStateFlattened;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    _Bool _tagsHaveBeenSet;
    SBRootFolder *_rootFolder;
    id <SBIconModelStore> _store;
    id <SBIconModelApplicationDataSource> _applicationDataSource;
    id <SBIconModelDelegate> _delegate;
    _Bool _allowsSaving;
    _Bool _ignoresIconsNotInIconState;
    _Bool _sortsIconsAlphabetically;
    NSSet *_archivedLeafIdentifiers;
}

- (_Bool)importState:(id)arg1;
- (id)exportFlattenedState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportPendingState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportState:(_Bool)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(_Bool)arg2;
- (id)description;
- (void)layout;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)saveIconStateIfNeeded;
- (void)_saveIconState;
- (void)_saveDesiredIconState;
- (void)deleteIconState;
- (id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(_Bool *)arg3 replaceExistingIconAtIndexPath:(id *)arg4;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(_Bool *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (void)clearDesiredIconStateIfPossible;
- (void)clearDesiredIconState;
- (_Bool)hasDesiredIconState;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)_unarchiveRootFolder;
- (id)_iconState;
- (id)iconState;
- (id)placeholdersByDisplayID;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)leafIconForIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)_applicationIcons;
- (id)iconsOfClass:(Class)arg1;
- (id)leafIconsWithIdentifiers:(id)arg1;
- (id)leafIcons;
- (id)visibleIconIdentifiers;
- (void)loadAllIcons;
- (void)addIconForApplication:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)downloadingIconForBundleIdentifier:(id)arg1;
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;
- (id)addDownloadingIconForDownload:(id)arg1;
- (_Bool)_canAddDownloadingIconForBundleID:(id)arg1;
- (_Bool)isIconVisible:(id)arg1;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (void)localeChanged;
- (id)rootFolder;
- (void)dealloc;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;

@end

