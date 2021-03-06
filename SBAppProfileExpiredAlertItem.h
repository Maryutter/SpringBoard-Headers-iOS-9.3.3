
#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class NSString, SBApplicationIcon;

@interface SBAppProfileExpiredAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBApplicationIcon *_icon;
}

- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithIcon:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

