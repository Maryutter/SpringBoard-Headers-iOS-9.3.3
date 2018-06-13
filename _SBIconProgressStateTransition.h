
#import "_SBIconProgressTransition.h"

@class CAMediaTimingFunction;

@interface _SBIconProgressStateTransition : _SBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _fromState;
    long long _toState;
    double _fraction;
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)_updateView:(id)arg1;
- (_Bool)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;

@end

