
#import "NSObject.h"

@interface SBBrightnessController : NSObject
{
    _Bool _debounce;
    struct BKSDisplayBrightnessTransaction *_brightnessDownTransaction;
    struct BKSDisplayBrightnessTransaction *_brightnessUpTransaction;
}

+ (id)sharedBrightnessController;
- (void)cancelBrightnessEvent;
- (void)handleBrightnessEvent:(struct __IOHIDEvent *)arg1;
- (void)decreaseBrightnessAndRepeat;
- (void)increaseBrightnessAndRepeat;
- (void)setBrightnessLevel:(float)arg1;
- (void)_setBrightnessLevel:(float)arg1 showHUD:(_Bool)arg2;
- (void)adjustBacklightLevel:(_Bool)arg1;
- (float)_calcButtonRepeatDelay;

@end

