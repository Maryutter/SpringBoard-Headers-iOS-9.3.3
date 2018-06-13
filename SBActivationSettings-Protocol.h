
#import "NSObject.h"

@class SBActivationSettings;

@protocol SBActivationSettings <NSObject>
- (void)clearActivationSettings;
- (void)applyActivationSettings:(SBActivationSettings *)arg1;
- (SBActivationSettings *)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
@end

