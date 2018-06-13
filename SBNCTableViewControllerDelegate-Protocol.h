
#import "UIScrollViewDelegate.h"

@class BBAction, SBNCTableViewController, SBRowInfo, SBSectionInfo;

@protocol SBNCTableViewControllerDelegate <UIScrollViewDelegate>

@optional
- (long long)layoutModeForNotificationCenterTableViewController:(SBNCTableViewController *)arg1;
- (_Bool)notificationCenterTableViewController:(SBNCTableViewController *)arg1 didSelectAction:(BBAction *)arg2 forRow:(SBRowInfo *)arg3 inSection:(SBSectionInfo *)arg4;
- (_Bool)notificationCenterTableViewController:(SBNCTableViewController *)arg1 didSelectRow:(SBRowInfo *)arg2 inSection:(SBSectionInfo *)arg3;
- (_Bool)notificationCenterTableViewController:(SBNCTableViewController *)arg1 shouldHighlightRow:(SBRowInfo *)arg2 inSection:(SBSectionInfo *)arg3;
- (long long)notificationCenterTableViewController:(SBNCTableViewController *)arg1 replacementAnimationForRow:(SBRowInfo *)arg2 inSection:(SBSectionInfo *)arg3;
- (long long)notificationCenterTableViewController:(SBNCTableViewController *)arg1 removalAnimationForRow:(SBRowInfo *)arg2 inSection:(SBSectionInfo *)arg3;
- (long long)notificationCenterTableViewController:(SBNCTableViewController *)arg1 insertionAnimationForRow:(SBRowInfo *)arg2 inSection:(SBSectionInfo *)arg3;
@end

