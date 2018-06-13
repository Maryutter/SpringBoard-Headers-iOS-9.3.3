
#import "SBIconImageView.h"

#import "SBControlCenterObserver.h"

@class NSString;

@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver>
{
    unsigned long long _pauseCauses;
}

+ (void)_applicationDidExit:(id)arg1;
+ (void)_displayDidDeactivate:(id)arg1;
+ (void)_displayWillActivate:(id)arg1;
+ (void)initialize;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)_spotlightWillDismiss:(id)arg1;
- (void)_spotlightWillAppear:(id)arg1;
- (void)_significantAnimationDidEnd:(id)arg1;
- (void)_significantAnimationWillBegin:(id)arg1;
- (void)_activeDisplayChanged:(id)arg1;
- (void)_didEndScrolling:(id)arg1;
- (void)_willBeginScrolling:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)snapshot;
- (void)prepareForReuse;
- (void)updateImageAnimated:(_Bool)arg1;
- (void)updateUnanimated;
- (void)updateAnimatingState;
- (void)setPaused:(_Bool)arg1;
- (void)_removePauseCause:(unsigned long long)arg1;
- (void)_addPauseCause:(unsigned long long)arg1;
- (_Bool)_isPausedForCause:(unsigned long long)arg1;
- (id)_stringForPauseCause:(unsigned long long)arg1;
- (_Bool)isAnimationAllowed;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

