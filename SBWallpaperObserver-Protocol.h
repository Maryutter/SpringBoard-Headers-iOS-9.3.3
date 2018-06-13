
#import "NSObject.h"

@class _UILegibilitySettings;

@protocol SBWallpaperObserver <NSObject>

@optional
- (void)wallpaperGeometryDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(_UILegibilitySettings *)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperWillChangeForVariant:(long long)arg1;
@end

