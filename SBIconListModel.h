
#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "SBIconIndexNode.h"

@class NSHashTable, NSString, SBFolder, SBIconIndexMutableList;

@interface SBIconListModel : NSObject <SBIconIndexNode, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    unsigned long long _maxIconCount;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    _Bool _iconStateIsDirty;
    SBFolder *_folder;
}

- (unsigned long long)countByEnumeratingWithState:(id *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)_notifyListObservers:(id)arg1;
- (void)removeListObserver:(id)arg1;
- (void)addListObserver:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (void)warmUpIconImagesForLocation:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)markIconStateClean;
- (_Bool)isIconStateDirty;
- (id)iconsOfClass:(Class)arg1;
- (unsigned long long)compactIcons;
- (_Bool)needsCompacting;
- (_Bool)isFull;
- (_Bool)isEmpty;
- (unsigned long long)firstFreeSlotIndexForType:(int)arg1;
- (unsigned long long)firstFreeSlotIndex;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long *)arg2;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long *)arg2;
- (_Bool)addIcon:(id)arg1 asDirty:(_Bool)arg2;
- (_Bool)addIcon:(id)arg1;
- (_Bool)allowsAddingIcon:(id)arg1;
- (void)enumerateFolderIconsUsingBlock:(id)arg1;
- (void)enumerateIconsUsingBlock:(id)arg1;
- (_Bool)containsLeafIconWithIdentifier:(id)arg1;
- (_Bool)containsIcon:(id)arg1;
- (unsigned long long)indexForLeafIconWithIdentifier:(id)arg1;
- (unsigned long long)indexForIcon:(id)arg1;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)icons;
- (unsigned long long)maxNumberOfIcons;
- (unsigned long long)numberOfIcons;
- (void)dealloc;
- (id)init;
- (id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

