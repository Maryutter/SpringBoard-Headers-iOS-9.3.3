
#import "NSObject.h"

#import "SBDateTimeOverrideObserver.h"

@class NSArray, NSDateFormatter, NSHashTable, NSString, NSTimer, SBSStatusBarStyleOverridesAssertion, SBUserSessionController;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver>
{
    unsigned long long _coalescentBlockDepth;
    _Bool _hasPostedOnce;
    unsigned long long _itemPostState[29];
    _Bool _nonItemDataChanged;
    id _data;
    int _actions;
    NSHashTable *_postObservers;
    _Bool _notifyingPostObservers;
    long long _showsRecordingOverrides;
    NSDateFormatter *_timeItemDateFormatter;
    NSTimer *_timeItemTimer;
    NSString *_timeItemTimeString;
    NSString *_operatorName;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSArray *_countryCodesShowingEmergencyOnlyStatus;
    unsigned long long _airplaneTransitionToken;
    _Bool _suppressCellServiceForAirplaneModeTransition;
    _Bool _showsActivityIndicatorOnHomeScreen;
    long long _activityIndicatorEverywhereCount;
    long long _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    _Bool _showingNotChargingItem;
    NSString *_batteryDetailString;
    _Bool _alarmEnabled;
    _Bool _applyingAssistantStyle;
    int _locationStatusBarIconType;
    SBSStatusBarStyleOverridesAssertion *_siriEyesFreeStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_tetheringStatusBarStyleOverrideAssertion;
    SBUserSessionController *_lazy_userSessionController;
    NSString *_personName;
    NSString *_overridePersonName;
}

+ (int)_thermalColorForLevel:(int)arg1;
+ (id)sharedInstance;
- (void)_updateLocationState;
- (void)_buildLocationState;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)_noteNotChargingStatusChanged;
- (void)_setShowingNotChargingItem;
- (_Bool)_shouldShowNotChargingItem;
- (_Bool)_shouldShowEmergencyOnlyStatus;
- (id)_sbCarrierNameForOperator:(id)arg1;
- (id)_displayStringForRegistrationStatus:(int)arg1;
- (id)_displayStringForSIMStatus:(id)arg1;
- (_Bool)_simStatusMeansLocked:(id)arg1;
- (void)_noteAirplaneModeChanged;
- (_Bool)_shouldShowPersonName;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (void)_stopTimeItemTimer;
- (void)_requestActions:(int)arg1;
- (void)_notifyNonItemDataChanged;
- (void)_notifyItemChanged:(int)arg1;
- (_Bool)_setItem:(int)arg1 enabled:(_Bool)arg2;
- (void)_postItem:(int)arg1 withState:(unsigned long long)arg2;
- (void)updateStatusBarItem:(int)arg1;
- (void)_updateTetheringState;
- (void)_removeTetheringStatusBarStyleOverrideAssertion;
- (void)_updatePersonNameItem;
- (void)_updateCarPlayItem;
- (void)_updateThermalColorItem;
- (void)_updateAssistantItem;
- (void)_removeAssistantEyesFreeStatusBarStyleOverride;
- (void)_updateAirplayItem;
- (void)_updateQuietModeItem;
- (void)_updateRotationLockItem;
- (void)_updateLocationItem;
- (void)_updateActivityItem;
- (void)_updateCallForwardingItem;
- (void)_updateVPNItem;
- (void)_updateAlarmItem;
- (void)_updateTTYItem;
- (void)_updateBluetoothBatteryItem;
- (void)_updateBluetoothItem;
- (void)_updateBatteryItems:(id)arg1;
- (void)_updateAllInternalBatteryItems;
- (void)_updateDataNetworkItem;
- (void)_updateServiceItem;
- (void)_updateSignalStrengthItem;
- (void)_updateAirplaneMode;
- (void)_updateTimeItems;
- (void)_updateBatteryStuff;
- (void)_registerForNotifications;
- (void)removePostingObserver:(id)arg1;
- (void)addPostingObserver:(id)arg1;
- (void)sendStatusBarActions:(int)arg1;
- (void)setUserNameOverride:(id)arg1;
- (void)setShowsSyncActivityIndicator:(_Bool)arg1;
- (void)setShowsActivityIndicatorEverywhere:(_Bool)arg1;
- (void)setShowsActivityIndicatorOnHomeScreen:(_Bool)arg1;
- (void)setAlarmEnabled:(_Bool)arg1;
- (void)setShowsOverridesForRecording:(_Bool)arg1;
- (void)_tickRefCount:(long long *)arg1 up:(_Bool)arg2 withTransitionBlock:(id)arg3;
- (id)operatorName;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (const id *)_statusBarData;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

