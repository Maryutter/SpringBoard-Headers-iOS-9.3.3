
#import "SBAlertItem.h"

@class BBBulletin, NSArray;

@interface SBBulletinModalAlert : SBAlertItem
{
    BBBulletin *_bulletin;
    NSArray *_buttons;
    NSArray *_bulletinButtonIndices;
    _Bool _playedSound;
    SBBulletinModalAlert *_superseded;
    NSArray *_actions;
}

- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)willDeactivateForReason:(int)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)_actionsWithOptions;
- (id)_snoozeAppearance;
- (id)_optionsAppearance;
- (id)_dismissAppearance;
- (id)_defaultAppearance;
- (id)_snoozeAction;
- (id)_dismissAction;
- (id)_defaultAction;
- (id)_defaultActions;
- (id)_actionsFromBulletin;
- (void)_configureSheetWithBulletinActions;
- (void)_configureSheetWithBulletinButtons;
- (void)dismiss:(int)arg1;
- (id)_actionForAlertViewButtonIndex:(long long)arg1;
- (void)_handleAction:(id)arg1 atIndex:(long long)arg2;
- (void)_handleActionGroup:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 supersededAlert:(id)arg2;
- (id)initWithBulletin:(id)arg1;

@end

