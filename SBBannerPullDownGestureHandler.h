
#import "SBBannerGestureHandler.h"

@class _UIDynamicValueAnimation;

@interface SBBannerPullDownGestureHandler : SBBannerGestureHandler
{
    _Bool _pulledDown;
    _Bool _startedPulledDown;
    _UIDynamicValueAnimation *_animation;
    _Bool _invalidated;
    _Bool _completed;
}

- (void)_stopAnimating;
- (double)_finalDisplacementForShow:(_Bool)arg1;
- (id)_pullForShow:(_Bool)arg1 finalDisplacement:(double)arg2;
- (id)_boundaryForShow:(_Bool)arg1 finalDisplacement:(double)arg2;
- (id)_newAnimationForShow:(_Bool)arg1 withDisplacement:(double)arg2 velocity:(double)arg3;
- (double)_pullDownDistance;
- (void)_updateWithDisplacement:(double)arg1 velocity:(double)arg2;
- (void)_finishGestureWithDisplacement:(double)arg1 velocity:(double)arg2;
- (_Bool)_shouldFinishWithLocation:(struct CGPoint)arg1 velocity:(double)arg2;
- (void)invalidate;
- (_Bool)handleGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5;
- (void)dealloc;

@end

