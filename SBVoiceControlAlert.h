
#import "SBAlert.h"

@interface SBVoiceControlAlert : SBAlert
{
    struct {
        unsigned int shouldBeActivated:1;
        unsigned int isReadyToBeActivated:1;
        unsigned int hasBeenActivated:1;
    } _voiceControlFlags;
    _Bool _expectsFaceContact;
    _Bool _expectsFaceContactInLandscape;
}

+ (void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(_Bool)arg2;
+ (void)setNextRecognitionAudioInputPaths:(id)arg1;
+ (void)_configureSession:(id)arg1 forAlert:(id)arg2;
+ (_Bool)_bluetoothDevicesPickable;
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)arg1;
+ (void)bluetoothDeviceRequestedVoiceControl:(id)arg1;
+ (_Bool)resetVoiceControlIfNecessary:(_Bool)arg1;
+ (_Bool)shouldEnterVoiceControl;
+ (void)unregisterForAlerts;
+ (void)registerForAlerts;
+ (id)pendingOrActiveAlert;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (double)autoDimTime;
- (_Bool)handleMenuButtonTap;
- (void)handleHeadsetButtonUpFromActivation:(_Bool)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)cancelIfNotActivated;
- (void)activateWhenReady;
- (id)initFromMenuButton;
- (_Bool)expectsFaceContactInLandscape;
- (_Bool)expectsFaceContact;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (void)activate;
- (void)deactivate;
- (_Bool)allowsEventOnlySuspension;
- (id)initFromBluetoothDevice:(id)arg1;
- (id)initFromWiredHeadsetButton;
- (id)init;
- (void)_setRoutingAttributesForWiredHeadset:(_Bool)arg1;
- (_Bool)recognitionSessionWillBeginAction:(id)arg1;
- (void)_workspaceActivate;
- (id)_session;
- (void)_makeActive;
- (void)_resign;

@end

