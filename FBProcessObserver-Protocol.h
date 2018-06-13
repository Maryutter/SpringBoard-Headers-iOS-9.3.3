
#import "NSObject.h"

@class FBProcess, FBProcessState;

@protocol FBProcessObserver <NSObject>

@optional
- (void)process:(FBProcess *)arg1 stateDidChangeFromState:(FBProcessState *)arg2 toState:(FBProcessState *)arg3;
- (void)processDidExit:(FBProcess *)arg1;
@end

