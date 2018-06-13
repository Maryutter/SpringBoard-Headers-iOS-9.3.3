
#import "NSObject.h"

@class SBSearchGesture;

@protocol SBSearchGestureObserver <NSObject>
- (void)searchGesture:(SBSearchGesture *)arg1 changedPercentComplete:(double)arg2;

@optional
- (void)searchGesture:(SBSearchGesture *)arg1 resetAnimated:(_Bool)arg2;
- (void)searchGesture:(SBSearchGesture *)arg1 completedShowing:(_Bool)arg2;
@end

