
#import "SBRootFolder.h"

#import "SBIconIndexNodeObserver.h"

@class NSString, SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver>
{
    SBIconListModel *_dock;
}

- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(id)arg3;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)enumerateAllIconsUsingBlock:(id)arg1;
- (void)sort;
- (id)iconsOfClass:(Class)arg1;
- (void)markIconStateClean;
- (_Bool)isIconStateDirty;
- (void)removeEmptyList:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (id)listContainingIcon:(id)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (id)listAtIndex:(unsigned long long)arg1;
- (void)_setDock:(id)arg1;
- (id)dock;
- (_Bool)supportsDock;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

