
#import "NSObject.h"

@class UIView, UIWindow;

@protocol UIWindowDelegate <NSObject>

@optional
- (void)window:(UIWindow *)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)getRotationContentSettings:(id *)arg1 forWindow:(UIWindow *)arg2;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(UIWindow *)arg1;
- (void)window:(UIWindow *)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (UIView *)rotatingFooterViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingHeaderViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingSnapshotViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingContentViewForWindow:(UIWindow *)arg1;
- (_Bool)window:(UIWindow *)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
@end

