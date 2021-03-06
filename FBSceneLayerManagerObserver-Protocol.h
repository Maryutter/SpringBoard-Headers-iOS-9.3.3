
#import "NSObject.h"

@class FBSceneLayer, FBSceneLayerManager;

@protocol FBSceneLayerManagerObserver <NSObject>

@optional
- (void)sceneLayerManager:(FBSceneLayerManager *)arg1 didRepositionLayer:(FBSceneLayer *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)sceneLayerManagerDidStopTrackingLayers:(FBSceneLayerManager *)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(FBSceneLayerManager *)arg1;
@end

