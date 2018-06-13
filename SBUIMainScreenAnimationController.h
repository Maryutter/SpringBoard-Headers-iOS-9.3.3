
#import "SBUIWorkspaceAnimationController.h"

@class SBWorkspaceTransitionRequest;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController
{
}

- (void)_cleanupAnimation;
- (void)_removeWallpaperAnimationPriorityWithFactory:(id)arg1;
- (void)_begin;
- (void)_dismissBannerAnimated:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)__startAnimation;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (id)_getTransitionWindow;
- (id)deactivatingApp;
- (id)activatingApp;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

