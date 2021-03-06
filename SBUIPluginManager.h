
#import "SBPluginManager.h"

@class NSMutableDictionary, SBUIPluginHost;

@interface SBUIPluginManager : SBPluginManager
{
    NSMutableDictionary *_uiPlugins;
    SBUIPluginHost *_pendingActivation;
    SBUIPluginHost *_hostPendingActivation;
}

+ (id)sharedInstance;
- (_Bool)overrideScreenDimInterval:(double *)arg1;
- (_Bool)suppressingNotifications;
- (_Bool)overrideInterfaceOrientation:(long long *)arg1;
- (_Bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 withContext:(id)arg3;
- (void)cancelPendingActivationEvent:(int)arg1;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (_Bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (_Bool)handleButtonTapFromSource:(int)arg1;
- (_Bool)handleButtonUpEventFromSource:(int)arg1;
- (_Bool)handleButtonDownEventFromSource:(int)arg1;
- (id)loadedUIPluginHosts;
- (id)_loadedUIPluginHostsVisible:(_Bool)arg1;
- (id)loadedUIPlugins;
- (_Bool)unloadUIPlugin:(id)arg1 forHost:(id)arg2;
- (id)loadUIPluginNamed:(id)arg1 withHost:(id)arg2;

@end

