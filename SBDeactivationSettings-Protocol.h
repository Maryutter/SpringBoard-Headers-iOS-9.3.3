
#import "NSObject.h"

@class SBDeactivationSettings;

@protocol SBDeactivationSettings <NSObject>
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(SBDeactivationSettings *)arg1;
- (SBDeactivationSettings *)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
@end

