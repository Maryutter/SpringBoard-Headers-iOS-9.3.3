
#import "NSObject.h"

#import "SBRemoteAlertAdapterDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SBRemoteAlertAdapter, SBSRemoteAlertConfiguration;

@interface SBRemoteAlertController : NSObject <SBRemoteAlertAdapterDelegate>
{
    SBSRemoteAlertConfiguration *_configuration;
    unsigned int _tokenPort;
    NSObject<OS_dispatch_queue> *_queue;
    id <SBRemoteAlertControllerDelegate> _delegate;
    SBRemoteAlertAdapter *_alert;
    NSMutableArray *_pendedActivations;
    _Bool _active;
}

+ (_Bool)isConfiguration:(id)arg1 allowedForAuditToken:(id)arg2;
- (void)remoteAlertAdapter:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteAlertAdapterDidRequestDismissal:(id)arg1;
- (void)remoteAlertAdapterDidDeactivate:(id)arg1;
- (void)remoteAlertAdapterDidActivate:(id)arg1;
- (void)_queue_setActive:(_Bool)arg1;
- (void)queue_invalidate;
- (_Bool)queue_isActive;
- (void)queue_activateWithOptions:(id)arg1;
- (unsigned int)queue_tokenPort;
- (_Bool)queue_matchesConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 tokenPort:(unsigned int)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

