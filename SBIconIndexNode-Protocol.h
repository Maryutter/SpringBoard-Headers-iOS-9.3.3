
#import "NSObject.h"

@class NSIndexPath, NSMutableArray, NSMutableSet, NSString;

@protocol SBIconIndexNode <NSObject>
- (NSString *)nodeDescriptionWithPrefix:(NSString *)arg1;
- (void)removeNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (void)addNodeObserver:(id <SBIconIndexNodeObserver>)arg1;
- (NSMutableArray *)nodesAlongIndexPath:(NSIndexPath *)arg1 consumedIndexes:(unsigned long long)arg2;
- (NSMutableSet *)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(NSIndexPath *)arg2;
- (NSMutableSet *)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
@end

