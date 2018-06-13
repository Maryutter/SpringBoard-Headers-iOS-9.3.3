
#import "NSObject.h"

@class NSString, SBLeafIcon, UIImage;

@protocol SBLeafIconDataSource <NSObject>
- (_Bool)icon:(SBLeafIcon *)arg1 launchFromLocation:(int)arg2 context:(id)arg3;
- (_Bool)iconAllowsLaunch:(SBLeafIcon *)arg1;
- (_Bool)iconCompleteUninstall:(SBLeafIcon *)arg1;
- (_Bool)iconSupportsUninstall:(SBLeafIcon *)arg1;
- (_Bool)iconIsBeta:(SBLeafIcon *)arg1;
- (_Bool)iconIsRecentlyUpdated:(SBLeafIcon *)arg1;
- (int)iconAccessoryType:(SBLeafIcon *)arg1;
- (NSString *)iconFormattedAccessoryString:(SBLeafIcon *)arg1;
- (id)iconBadgeNumberOrString:(SBLeafIcon *)arg1;
- (_Bool)iconProgressIsPaused:(SBLeafIcon *)arg1;
- (double)iconProgressPercent:(SBLeafIcon *)arg1;
- (long long)iconProgressState:(SBLeafIcon *)arg1;
- (_Bool)iconCanTightenLabel:(SBLeafIcon *)arg1;
- (_Bool)iconCanEllipsizeLabel:(SBLeafIcon *)arg1;
- (NSString *)iconDisplayName:(SBLeafIcon *)arg1 forLocation:(int)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 defaultImageWithFormat:(int)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(SBLeafIcon *)arg1;
@end

