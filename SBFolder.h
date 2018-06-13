
#import "NSObject.h"

#import "SBIconIndexMutableListObserver.h"
#import "SBIconIndexNode.h"
#import "SBIconListModelObserver.h"

@class NSArray, NSCountedSet, NSHashTable, NSMutableSet, NSString, SBFolderIcon, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver>
{
    NSString *_displayName;
    NSString *_defaultDisplayName;
    _Bool _displayNameDirty;
    _Bool _open;
    SBFolderIcon *_icon;
    _Bool _cancelable;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSCountedSet *_coalesceChangesRequests;
    unsigned long long _maxListCount;
    unsigned long long _maxIconCountInLists;
    NSHashTable *_nodeObservers;
    NSHashTable *_folderObservers;
    SBIconIndexMutableList *_lists;
    SBFolder *_parentFolder;
}

- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)didRemoveFolder:(id)arg1;
- (void)didAddFolder:(id)arg1;
- (void)sort;
- (void)enumerateAllIconsUsingBlock:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(_Bool)arg2;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1;
- (void)startCoalescingContentChangesWithRequestID:(id)arg1;
- (_Bool)_isCoalescingContentChanges;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (id)iconAtIndexPath:(id)arg1;
- (id)indexPathForIconWithIdentifier:(id)arg1;
- (id)indexPathForIcon:(id)arg1 includingPlaceholders:(_Bool)arg2;
- (id)indexPathForIcon:(id)arg1;
- (id)indexPathForNodeIdentifier:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (id)listContainingIcon:(id)arg1;
- (id)orderedIcons;
- (id)visibleIcons;
- (id)folderIcons;
- (id)leafIcons;
- (id)allIcons;
- (id)iconsOfClass:(Class)arg1;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(_Bool)arg1;
- (id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3;
- (id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2;
- (_Bool)canAddIcon;
- (id)addIcon:(id)arg1;
- (void)removeIconAtIndexPath:(id)arg1;
- (id)insertIcon:(id)arg1 atIndexPath:(id *)arg2;
- (id)placeIcon:(id)arg1 atIndexPath:(id *)arg2;
- (void)purgeLists;
- (unsigned long long)indexOfList:(id)arg1;
- (id)listAtIndex:(unsigned long long)arg1;
- (id)_createNewListWithIcon:(id)arg1;
- (void)markIconStateClean;
- (_Bool)isIconStateDirty;
- (void)removeEmptyList:(id)arg1;
- (id)addEmptyList;
- (void)_removeLists:(id)arg1;
- (void)_setLists:(id)arg1;
- (void)_addList:(id)arg1;
- (void)compactIconsAndLists;
- (_Bool)compactLists;
- (id)_listsForCompaction;
- (_Bool)canEditDisplayName;
- (_Bool)canRemoveIcons;
- (_Bool)shouldRemoveWhenEmpty;
- (_Bool)isFull;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long maxListCount;
@property(readonly, nonatomic) unsigned long long listCount;
@property(readonly, copy, nonatomic) NSArray *lists;
- (void)setDefaultDisplayName:(id)arg1;
- (id)defaultDisplayName;
- (void)removeFolderObserver:(id)arg1;
- (void)addFolderObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMaxListCount:(unsigned long long)arg1 maxIconCountInLists:(unsigned long long)arg2;
- (Class)listModelClass;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

