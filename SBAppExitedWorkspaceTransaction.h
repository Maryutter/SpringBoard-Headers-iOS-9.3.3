
#import "SBToAppsWorkspaceTransaction.h"

@interface SBAppExitedWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
}

- (void)_didComplete;
- (void)_begin;

@end

