
#import "UIViewController.h"

#import "SBStarkNowPlayingServiceDelegate.h"

@class NSMutableArray, NSString, SBSUICarDisplayNowPlayingStateContext, SBStarkNowPlayingService, _UIAsyncInvocation;

@interface SBStarkNowPlayingController : UIViewController <SBStarkNowPlayingServiceDelegate>
{
    _UIAsyncInvocation *_cancelRequest;
    SBStarkNowPlayingService *_service;
    unsigned long long _reactivateAttempt;
    double _lastReactivationAttempt;
    NSMutableArray *_notifyBlocks;
    SBSUICarDisplayNowPlayingStateContext *_context;
}

- (void)nowPlayingService:(id)arg1 didTerminateWithError:(id)arg2;
- (void)_noteServiceFailure;
- (void)_switchToService:(id)arg1;
- (void)_reconnect;
- (void)_notifyTimedOut:(id)arg1;
- (void)_notifyActive:(_Bool)arg1;
- (void)loadView;
- (void)switchToState:(id)arg1;
- (void)notifyWhenActive:(id)arg1 withTimeout:(double)arg2;
- (_Bool)isActive;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

