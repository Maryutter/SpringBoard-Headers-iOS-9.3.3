
#import "SBIcon.h"

#import "SBFolderObserver.h"
#import "SBIconIndexNodeObserver.h"
#import "SBIconObserver.h"

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, SBFolder;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver>
{
    NSMutableArray *_cachedMiniGrids;
    SBFolder *_folder;
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    long long _progressState;
    double _progressPercent;
}

+ (Class)_iconGridImageClass;
+ (unsigned long long)_maxIconsInGridImage;
- (_Bool)hasFolderIconView;
- (id)folder;
- (_Bool)isFolderIcon;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (id)miniGridCellImageForIcon:(id)arg1;
- (id)gridImages;
- (void)purgeCachedImages;
- (id)_miniIconGridForPage:(long long)arg1;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;
- (unsigned long long)listIndexForContainedIcon:(id)arg1;
- (void)rootFolderDelegateDidChange:(id)arg1;
- (void)_containedIconImageChanged:(id)arg1;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (double)progressPercent;
- (_Bool)shouldAnimateProgress;
- (_Bool)progressIsPaused;
- (long long)progressState;
- (void)_updateProgress;
- (void)_appPlaceholdersDidChange:(id)arg1;
- (void)_updateBadgeValue;
- (void)updateLabel;
- (void)launchFromLocation:(int)arg1 context:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)localeChanged;
- (id)displayNameForLocation:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)rootFolder;
- (void)dealloc;
- (id)initWithFolder:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

