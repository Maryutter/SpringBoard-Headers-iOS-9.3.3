
#import "NSObject.h"

#import "PGPictureInPictureControllerDelegate.h"
#import "SBAlertItemsControllerObserver.h"
#import "SBAlertManagerObserver.h"
#import "SBAssistantObserver.h"
#import "SBControlCenterObserver.h"
#import "SBUIActiveOrientationObserver.h"

@class NSMutableSet, NSString, PGPictureInPictureController, SBWindow;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, SBUIActiveOrientationObserver, SBControlCenterObserver, SBAlertManagerObserver, SBAlertItemsControllerObserver, SBAssistantObserver>
{
    PGPictureInPictureController *_pictureInPictureController;
    SBWindow *_pictureInPictureWindow;
    struct UIEdgeInsets _pictureInPictureWindowMargin;
    NSMutableSet *_pictureInPictureWindowHiddenReasons;
}

+ (id)sharedInstance;
+ (_Bool)isAutoPictureInPictureSupported;
+ (_Bool)isPictureInPictureSupported;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (_Bool)_pointInside:(struct CGPoint)arg1;
- (id)_pipWindow;
- (void)_nowPlayingStateChangedForPartialMedusaDevice;
- (void)_appSwitcherWillQuitApp:(id)arg1;
- (void)_lockStateDidChange:(id)arg1;
- (void)_managePictureInPictureWindowLevel;
- (void)_managePictureInPictureWindowVisibilityAnimated:(_Bool)arg1;
- (void)_destroyWindowAndRootViewControllerIfPossible;
- (void)_createWindowAndRootViewControllerIfNeeded;
- (id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1;
- (void)assistant:(id)arg1 viewDidDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionBegan;
- (void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 animated:(_Bool)arg2 completionHandler:(id)arg3;
- (_Bool)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1;
- (_Bool)isPictureInPictureWindowVisible;
- (void)setPictureInPictureWindowHidden:(_Bool)arg1 withReason:(id)arg2;
- (void)setPictureInPictureWindowMargin:(struct UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

