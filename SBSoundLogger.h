
#import "SBFileLogger.h"

@interface SBSoundLogger : SBFileLogger
{
}

- (id)logPreferenceName;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;

@end

