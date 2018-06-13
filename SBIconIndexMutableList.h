
#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "SBIconIndexNodeObserver.h"

@class NSMapTable, NSMutableArray, NSString;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration>
{
    NSMutableArray *_nodes;
    NSMapTable *_index;
    id <SBIconIndexMutableListObserver> _observer;
}

- (id)indexDescriptionWithPrefix:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(id *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)enumerateNodesUsingBlock:(id)arg1;
- (void)removeAllNodes;
- (void)removeNodesAtIndexes:(id)arg1;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)removeNode:(id)arg1;
- (void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2;
- (void)addNode:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (_Bool)containsNode:(id)arg1;
- (unsigned long long)indexOfNode:(id)arg1;
- (unsigned long long)count;
- (id)nodes;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

