
#import "NSObject.h"

@interface SBVoiceControlController : NSObject
{
    _Bool _delayedAssistantActivationPending;
    _Bool _headsetDownDelayedActionPerformed;
}

+ (_Bool)isVoiceControlVisible;
+ (id)sharedInstance;
- (void)_updateNextRecognitionAudioInputPaths:(id)arg1;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_assistantActivationSettingsDidChange:(id)arg1;
- (void)headsetAvailabilityChanged;
- (_Bool)handleHeadsetButtonUpNotInCall;
- (_Bool)handleHeadsetButtonUp;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1;
- (void)_cancelDelayedHeadsetAction;
- (void)_prepareDelayedHeadsetAction;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_performDelayedHeadsetActionForAssistant;
- (_Bool)handleHomeButtonHeld;
- (void)preheatForMenuButtonWithFireDate:(id)arg1;
- (void)configureVoiceControl;
- (id)init;

@end

