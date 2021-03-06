
#import "UIView.h"

@class NSDate, SBLockScreenTimerDialView, UILabel, _UILegibilityLabel;

@interface SBLockScreenTimerView : UIView
{
    NSDate *_endDate;
    SBLockScreenTimerDialView *_timerDial;
    UILabel *_layoutLabel;
    _UILegibilityLabel *_timerLabel;
}

+ (double)interItemSpacing;
+ (id)_timerFont;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)baselineOffsetFromBottom;
- (void)setTimerHidden:(_Bool)arg1;
- (void)updateTimerLabel;
- (void)setEndDate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2 dialStrength:(double)arg3;
- (id)_newTimerDialForSettings:(id)arg1 strength:(double)arg2;
- (id)_newLegibilityLabelForSettings:(id)arg1 strength:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

