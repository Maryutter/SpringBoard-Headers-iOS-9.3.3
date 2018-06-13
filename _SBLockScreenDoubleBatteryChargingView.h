
#import "SBLockScreenBatteryChargingView.h"

@class SBLockScreenBatteryFillView, UIImageView, UIView, _UIBackdropView, _UILegibilityLabel;

@interface _SBLockScreenDoubleBatteryChargingView : SBLockScreenBatteryChargingView
{
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    SBLockScreenBatteryFillView *_internalBatteryFillView;
    SBLockScreenBatteryFillView *_externalBatteryFillView;
    _UILegibilityLabel *_internalChargePercentLabel;
    _UILegibilityLabel *_externalChargePercentLabel;
    _UILegibilityLabel *_internalChargingNameLabel;
    _UILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

- (id)_chargePercentFont;
- (double)_deviceChargeBaselineOffset;
- (double)_deviceNameBaselineOffset;
- (double)_chargingBoltTopOffset;
- (double)_batteryTopPadding;
- (double)_spaceBetweenBatteryImages;
- (void)layoutSubviews;
- (void)setSecondaryChargePercentage:(long long)arg1 isCharging:(_Bool)arg2 deviceName:(id)arg3;
- (void)setPrimaryChargePercentage:(long long)arg1 isCharging:(_Bool)arg2 detailed:(_Bool)arg3;
- (void)setLegibilitySettings:(id)arg1;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(_Bool)arg1;
- (_Bool)batteryVisible;
- (id)initWithFrame:(struct CGRect)arg1;

@end

