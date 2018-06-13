
#import "UIView.h"

@class UILabel;

@interface SBTodayTableHeaderView : UIView
{
    UILabel *_dateLabel;
    UILabel *_lunarDateLabel;
    _Bool _isContentValid;
    struct CGRect _calculatedDateLabelFrame;
    _Bool _achievedPreferredDateLabelLayout;
    struct CGSize _sizeThatFitsCalculatedDateLabelFrame;
    struct CGRect _calculatedLunarDateLabelFrame;
    long long _layoutMode;
    UIView *_miniMonthView;
}

+ (double)lunarDateBaselineOffset;
+ (id)defaultLunarDateFont;
+ (id)defaultDateFontForMode:(long long)arg1;
+ (id)defaultTextColor;
+ (id)defaultBackgroundColor;
- (void)layoutSubviews;
- (void)_layoutLunarDateLabel;
- (struct CGRect)_lunarDateLabelFrameForBounds:(struct CGRect)arg1;
- (void)_layoutDateLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_isCachedSizeThatFitsValidForSize:(struct CGSize)arg1;
- (struct CGRect)dateLabelFrameForBounds:(struct CGRect)arg1 force:(_Bool)arg2;
- (_Bool)_dateLabelNeedsLayoutForSize:(struct CGSize)arg1;
- (double)_dateLabelWidthForSize:(struct CGSize)arg1 layoutMode:(long long)arg2;
- (id)lunarDateHeaderString;
- (_Bool)showsLunarDate;
- (id)lunarCalendarIdentifier;
- (id)dateHeaderAttributedStringOnSingleLine:(_Bool)arg1;
- (id)dateHeaderOnSingleLine:(_Bool)arg1;
- (void)invalidateContent;
- (void)_updateForContentCategorySizeDidChange;
@property(readonly, nonatomic) double visibleMinY;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

