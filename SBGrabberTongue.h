
#import "NSObject.h"

#import "SBSystemGestureRecognizerDelegate.h"

@class NSString, SBChevronView, SBScreenEdgePanGestureRecognizer, UIView, _UIBackdropView;

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate>
{
    id <SBGrabberTongueDelegate> _delegate;
    _Bool _invalidated;
    SBScreenEdgePanGestureRecognizer *_edgePullGestureRecognizer;
    UIView *_tongueContainer;
    _UIBackdropView *_tongueBackdropView;
    SBChevronView *_tongueChevron;
    _Bool _tongueVisible;
    _Bool _inPullGesture;
    _Bool _inTongueGesture;
    _Bool _inTongueDismissGesture;
    unsigned long long _screenEdge;
    unsigned long long _systemGestureType;
    UIView *_containingView;
}

- (void)_handlePullGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_updateCancelsTouchesWithRecognizer:(id)arg1;
- (_Bool)_recognizerIsWithinGrabberActiveZone:(id)arg1;
- (_Bool)_recognizerIsWithinGrabberZone:(id)arg1;
- (_Bool)_recognizerIsOutsideGrabberFreeZone:(id)arg1;
- (double)_edgeOrientedVelocityForRecognizer:(id)arg1;
- (double)_distanceFromEdgeForRecognizer:(id)arg1;
- (struct CGAffineTransform)_transformForTongue;
- (struct CGRect)_chevronFrameForTongueBounds:(struct CGRect)arg1;
- (struct CGRect)_frameForTongueWhenVisible:(_Bool)arg1;
- (void)_presentTongue;
- (void)_dismissTongueWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_cancelPendingTongueDismissRequests;
- (void)_dismissTongue:(id)arg1;
- (id)_newLightChevronView;
- (id)_newDarkChevronView;
- (id)_newBackdropViewWithColorStyle:(long long)arg1;
- (void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1;
- (void)_willPresent;
- (void)_pullGestureCanceled:(id)arg1;
- (void)_pullGestureEnded:(id)arg1;
- (void)_pullGestureUpdated:(id)arg1;
- (void)_pullGestureBegan:(id)arg1;
- (double)_widthOfActiveEdgeCenteredAtTongue;
- (double)_widthOfGrabberFreeRegionAroundTongue;
- (double)_centerOnScreenEdge;
- (_Bool)_requiresTongue;
- (_Bool)_requiresTongueOutsideGrabberFreeRegion;
- (_Bool)_tongueOrPullEnabled;
- (double)distanceFromEdge;
- (id)edgePullGestureRecognizer;
- (_Bool)dismissWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)installInView:(id)arg1 withColorStyle:(long long)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

