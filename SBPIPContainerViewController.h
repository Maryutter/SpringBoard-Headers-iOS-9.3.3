
#import "UIViewController.h"

#import "PGPictureInPictureViewControllerContentContainer.h"
#import "SBPIPContentViewLayoutSettingsObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class FBDisplayLayoutElement, NSLayoutConstraint, NSMutableArray, NSString, PGPictureInPictureViewController, UIView;

@interface SBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer, SBPIPContentViewLayoutSettingsObserver, UIGestureRecognizerDelegate>
{
    UIView *_contentView;
    struct CGSize _preferredContentSize;
    long long _contentViewPosition;
    struct CGSize _contentViewSize;
    struct UIEdgeInsets _contentViewPadding;
    unsigned int _addContentViewLayoutConstraints:1;
    unsigned int _stashContentView:1;
    unsigned int _updateContentViewLayoutSettingsAndLayoutIfNeeded:1;
    unsigned int _panGestureHandled:1;
    unsigned int _rotationGestureHandled:1;
    unsigned int _pinchGestureHandled:1;
    double _initialGestureScale;
    struct CGPoint _panGestureVelocity;
    double _pinchGestureScaleFactor;
    unsigned int _handlePanRotationPinchGestureEndedState:1;
    NSMutableArray *_layoutConstraints;
    NSLayoutConstraint *_contentViewGestureCenterXLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureCenterYLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureWidthLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureHeightLayoutConstraint;
    FBDisplayLayoutElement *_displayLayoutElement;
    double _displayLayoutElementLevel;
    PGPictureInPictureViewController *_pictureInPictureViewController;
}

- (void)_actuallyHandlePanRotationPinchGestureEndedState;
- (void)_handlePanRotationPinchGestureEndedState;
- (void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg1;
- (void)_handlePanRotationPinchGestureBeganState;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)_stashContentViewWithContentViewCenter:(struct CGPoint)arg1;
- (struct CGPoint)_contentViewCenter;
- (void)_actuallyUpdateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_updateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_updateDisplayLayoutElementReferenceFrame;
- (struct CGRect)_contentViewFrameInDisplayReferenceSpace;
- (void)_updateContentViewLayoutConstraintsWithFrame:(struct CGRect)arg1;
- (void)_updateContentViewLayoutConstraintsWithContentViewSize;
- (struct CGRect)_convertContentViewFrameFromReferenceSpace:(struct CGRect)arg1;
- (struct CGSize)_constrainContentViewSize:(struct CGSize)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)contentViewLayoutSettingsDidChange;
- (_Bool)handleDoubleTapGesture;
- (_Bool)handleTapGesture;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(id)arg2;
- (void)performStopAnimationWithFinalLayerFrame:(struct CGRect)arg1 animationHandler:(id)arg2 completionHandler:(id)arg3;
- (void)performStartAnimationWithAnimationHandler:(id)arg1 completionHandler:(id)arg2;
- (void)prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg1 completionHandler:(id)arg2;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
@property(nonatomic) double displayLayoutElementLevel;
- (void)setContentViewPadding:(struct UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPictureViewController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

