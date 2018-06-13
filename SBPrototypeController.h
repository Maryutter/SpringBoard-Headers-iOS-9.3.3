
#import "NSObject.h"

#import "SBVolumePressBandit.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSString, PTSettingsController, SBRootSettings, UIWindow, _SBFallbackSettingsHelper;

@interface SBPrototypeController : NSObject <SBVolumePressBandit, _UISettingsKeyObserver>
{
    SBRootSettings *_rootSettings;
    UIWindow *_settingsWindow;
    PTSettingsController *_settingsController;
    _SBFallbackSettingsHelper *_fallbackHelper;
    NSArray *_testRecipeClassNames;
    id <SBTestRecipe> _activeTestRecipe;
    _Bool _showingSettings;
    _Bool _hasPreviousSettings;
    _Bool _showingSettingsForFallback;
    _Bool _hasActiveEventRouters;
}

+ (id)sharedInstance;
+ (void)migrateSettings;
+ (void)reloadDefaults;
- (void)_updateEventRouters;
- (void)_updatePreventingLockover;
- (void)_configureForDefaults;
- (void)_changeActiveTestRecipeIfNecessary;
- (void)_tearDownSettingsWindow;
- (struct CGRect)_offscreenFrame;
- (void)_hideSettings;
- (void)showSettingsForFallback;
- (void)_showSettings;
- (id)_testRecipeClassNames;
- (_Bool)_restorePreviousSettings;
- (_Bool)_hasPreviousSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (_Bool)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
@property(retain, nonatomic) id <SBTestRecipe> activeTestRecipe;
- (void)showOrHide;
- (_Bool)isPrototypingEnabled;
- (_Bool)isShowingSettingsUI;
- (id)rootSettings;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

