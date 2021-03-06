
#import "SBAppSwitcherPageView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBIconView, SBIconViewMap, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SBSideSwitcherPageView : SBAppSwitcherPageView <UIGestureRecognizerDelegate>
{
    _Bool _shouldShowAppIconAsOverlay;
    _Bool _isShowingAppIconAsOverlay;
    _Bool _isActivating;
    SBIconViewMap *_iconViewMap;
    SBIconView *_iconViewSetAsOverlay;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
}

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_unsquishAfterDelay:(double)arg1;
- (void)_squishAfterDelay:(double)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePressDownGesture:(id)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (struct CGAffineTransform)_overlayTransform;
- (void)_removeAppIconAsOverlayIfNecessary;
- (void)_configureAppIconAsOverlayIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
@property(nonatomic) __weak id <SBSideSwitcherPageViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

