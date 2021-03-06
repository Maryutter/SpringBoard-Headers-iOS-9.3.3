
#import "FBProcessObserver.h"

@class FBApplicationProcess, FBApplicationProcessExitContext;

@protocol FBApplicationProcessObserver <FBProcessObserver>

@optional
- (void)applicationProcessDebuggingStateDidChange:(FBApplicationProcess *)arg1;
- (void)applicationProcessDidExit:(FBApplicationProcess *)arg1 withContext:(FBApplicationProcessExitContext *)arg2;
- (void)applicationProcessDidLaunch:(FBApplicationProcess *)arg1;
- (void)applicationProcessWillLaunch:(FBApplicationProcess *)arg1;
@end

