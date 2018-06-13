
#import "NSObject.h"

@class FBSSceneSettings, FBSSceneTransitionContext, FBScene, FBSceneManager;

@protocol FBSceneManagerObserver <NSObject>

@optional
- (void)sceneManager:(FBSceneManager *)arg1 didCommitUpdateForScene:(FBScene *)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)sceneManager:(FBSceneManager *)arg1 willDestroyScene:(FBScene *)arg2;
- (void)sceneManager:(FBSceneManager *)arg1 didCommitUpdateForScene:(FBScene *)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)sceneManager:(FBSceneManager *)arg1 willCommitUpdateForScene:(FBScene *)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 willUpdateScene:(FBScene *)arg2 withSettings:(FBSSceneSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)sceneManager:(FBSceneManager *)arg1 didCreateScene:(FBScene *)arg2 withClient:(id <FBSceneClient>)arg3;
@end

