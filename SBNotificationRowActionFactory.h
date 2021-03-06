
#import "NSObject.h"

@interface SBNotificationRowActionFactory : NSObject
{
    _Bool _shouldUseNarrowWidthForLonelyDismissAction;
    _Bool _shouldUseExteriorDismissActionSeparators;
    Class _separatorClass;
}

+ (id)notificationCenterRowActionFactory;
+ (id)lockScreenRowActionFactory;
- (Class)_actionButtonClassForAppearance:(id)arg1;
- (id)_dismissActionForBulletin:(id)arg1 shouldUseNarrowWidth:(_Bool)arg2 isFirst:(_Bool)arg3 isLast:(_Bool)arg4 handler:(id)arg5;
- (id)_backgroundColorForActionStyle:(long long)arg1;
- (_Bool)_isCustomAppearance:(id)arg1;
- (unsigned long long)_tableViewStyleForBulletinActionStyle:(long long)arg1;
- (long long)_actionButtonStyleForAppearance:(id)arg1 primaryActionExists:(_Bool)arg2;
- (id)_rowActionWithBBAction:(id)arg1 button:(id)arg2 handler:(id)arg3;
- (id)_rowActionWithBBAction:(id)arg1 bulletinActionStyle:(long long)arg2 bulletinContext:(id)arg3 handler:(id)arg4;
- (void)_updateSeparatorsForDismissButton:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;
- (id)rowActionsForSnoozedAlarmLocalNotification:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 handler:(id)arg4;
- (id)rowActionsForAlertItem:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 handler:(id)arg4;
- (id)rowActionsForBulletin:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 handler:(id)arg4;
- (_Bool)shouldSuppressSupplementaryActionsForPrivacy:(id)arg1;

@end

