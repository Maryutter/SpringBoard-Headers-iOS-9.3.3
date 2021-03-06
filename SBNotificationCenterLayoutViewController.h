
#import "UIViewController.h"

#import "NCSnippetDataSourceObserver.h"
#import "NCWidgetDataSourceObserver.h"
#import "SBBulletinActionHandler.h"
#import "SBModeViewControllerDelegate.h"
#import "SBNotificationCenterWidgetHost.h"
#import "SBTodayViewControllerDelegate.h"
#import "SBTodayViewSettingsViewControllerDelegate.h"
#import "SBWidgetHandlingNCColumnViewControllerDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, SBModeViewController, SBNotificationSeparatorView, SBNotificationsViewController, SBSnippetSectionInfo, SBTodayViewController, SBWidgetHandlingNCColumnViewController;

@interface SBNotificationCenterLayoutViewController : UIViewController <SBBulletinActionHandler, NCSnippetDataSourceObserver, NCWidgetDataSourceObserver, SBWidgetHandlingNCColumnViewControllerDelegate, SBTodayViewControllerDelegate, SBModeViewControllerDelegate, SBNotificationCenterWidgetHost, SBTodayViewSettingsViewControllerDelegate>
{
    SBTodayViewController *_todayViewController;
    SBWidgetHandlingNCColumnViewController *_widgetsViewController;
    long long _supportedNotificationCenterLayoutModes;
    long long _lastPresentedNotificationCenterLayoutMode;
    struct NSMutableDictionary *_archive;
    NSObject<OS_dispatch_queue> *_archiveWriteQueue;
    NSObject<OS_dispatch_queue> *_newWidgetsCountPostQueue;
    NSMutableSet *_defaultEnabledIDs;
    NSMutableDictionary *_identifiersToSnippetDataSources;
    NSMutableDictionary *_identifiersToWidgetDataSources;
    NSMutableDictionary *_identifiersToDatums;
    NSMutableDictionary *_dataSourceIdentifiersToDatumIdentifiers;
    NSMutableDictionary *_identifiersToDisabledInterfaceItems;
    NSMutableDictionary *_groupNamesToPendingOrderedInterfaceItems;
    SBSnippetSectionInfo *_todaySectionInfo;
    SBSnippetSectionInfo *_tomorrowSectionInfo;
    NSMutableDictionary *_identifiersToChildSections;
    SBNotificationSeparatorView *_topSeparatorView;
    _Bool _presentingEditView;
    id <SBWidgetViewControllerDelegate> _widgetDelegate;
    id <SBBulletinActionHandler> _bulletinActionHandler;
    SBNotificationsViewController *_notificationsViewController;
    SBModeViewController *_modeViewController;
}

- (void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 useAAGView:(_Bool)arg4;
- (void)todayViewSettingsViewController:(id)arg1 acknowledgeInterfaceItems:(id)arg2;
- (_Bool)todayViewSettingsViewController:(id)arg1 setEnabled:(_Bool)arg2 forInterfaceItems:(id)arg3;
- (_Bool)todayViewSettingsViewController:(id)arg1 isInterfaceItemWithIdentifierNew:(id)arg2;
- (_Bool)todayViewSettingsViewController:(id)arg1 isInterfaceItemWithIdentifierEnabled:(id)arg2;
- (void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3;
- (id)todayViewSettingsViewController:(id)arg1 defaultGroupForInterfaceItem:(id)arg2;
- (_Bool)todayViewSettingsViewController:(id)arg1 canReorderInterfaceItem:(id)arg2;
- (id)disabledInterfaceItemsForTodayViewSettingsViewController:(id)arg1;
- (id)todayViewSettingsViewController:(id)arg1 interfaceItemsForGroup:(id)arg2;
- (id)_childDelegateForGroup:(id)arg1;
- (id)todayViewSettingsViewController:(id)arg1 displayNameForGroup:(id)arg2;
- (id)groupsForTodayViewSettingsViewController:(id)arg1;
- (long long)layoutModeForTodayViewSettingsViewController:(id)arg1;
- (void)todayViewSettingsViewControllerWillDismiss:(id)arg1;
- (void)todayViewSettingsViewControllerWillPresent:(id)arg1;
- (id)presentationContextDefininingViewControllerForTodayViewController:(id)arg1;
- (void)todayViewController:(id)arg1 visibleContentIsClipping:(_Bool)arg2;
- (id)todayViewController:(id)arg1 snippetsForChildSectionWithIdentifier:(id)arg2;
- (id)todayViewController:(id)arg1 childSectionInfoForIdentifier:(id)arg2;
- (id)childSectionIdentifiersForTodayViewController:(id)arg1;
- (id)tomorrowSectionInfoForTodayViewController:(id)arg1;
- (id)todaySectionInfoForTodayViewController:(id)arg1;
- (_Bool)widgetHandlingNCColumnViewControllerShouldRequestWidgetRemoteViewControllers:(id)arg1;
- (void)widgetHandlingNCColumnViewController:(id)arg1 requestsEnablingForDebuggingWidgetsWithIdentifiers:(id)arg2;
- (void)_registerDefaultEnabledWidgetIdentifiers:(id)arg1;
- (void)widgetHandlingNCColumnViewControllerVisibleContentDidChange:(id)arg1;
- (id)orderedInterfaceItemIdentifiersForWidgetHandlingNCColumnViewController:(id)arg1;
- (id)_groupKeyForWidgetHandlingNCColumnViewController:(id)arg1;
- (void)_batteryDevicesDidChange:(id)arg1;
- (void)_publishBatteryWidget;
- (long long)_insertionIndexForBatteryWidgetInIdentifiers:(id)arg1;
- (_Bool)_shouldPublishBatteryWidget;
- (void)widgetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (void)_calculateAndPostNewWidgetsCount;
- (id)_targetViewControllerForWidgetDatum:(id)arg1;
- (_Bool)_shouldPublishWidgetDatum:(id)arg1;
- (void)snippetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (id)_parentSectionInfoForSnippetCategory:(long long)arg1;
- (_Bool)_setEnabled:(_Bool)arg1 forElementWithIdentifier:(id)arg2;
- (id)_snippetSectionInfoForElementWithIdentifier:(id)arg1;
- (_Bool)_isParentElementEnabledForElementWithID:(id)arg1;
- (_Bool)_isElementWithIdentifierEnabled:(id)arg1;
- (_Bool)_isElementWithIdentifierKnown:(id)arg1;
- (void)buddyCompleted:(id)arg1;
- (void)_beginObservingDataSourcesIfNecessary;
- (void)_widgetDataSourcesDidChange:(id)arg1;
- (void)_snippetDataSourcesDidChange:(id)arg1;
- (void)_dataSourcesDidChange:(id)arg1 withExistingCollection:(id)arg2 addObserverBlock:(id)arg3 removeObserverBlock:(id)arg4;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(id)arg3;
- (struct UIEdgeInsets)contentInsetsForModeViewController:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *visibleContentViewControllers;
- (id)widgetHandlingViewControllerForWidgetWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *widgetHandlingViewControllers;
- (void)viewWillLayoutSubviews;
- (void)_repopulateWidgetHandlingViewController:(id)arg1;
- (id)_widgetHandlingViewControllerForGroup:(id)arg1;
- (id)_defaultGroupForInterfaceItemWithIdentifier:(id)arg1;
- (long long)_notificationCenterLayoutModeForCurrentState;
- (void)_layoutModeViewController;
- (void)_layoutTodayViewControllerIfNecessary;
- (long long)layoutMode;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_loadContentViewControllers;
- (_Bool)_needsLayoutAfterLoadingContentViewControllers;
- (_Bool)_areNotificationsViewControllersAvailable;
- (_Bool)_areWidgetViewControllersAvailable;
- (_Bool)_isDeviceMoreThanUILocked;
- (id)_notificationsViewControllerCreateIfNecessary:(_Bool)arg1;
- (id)_widgetsViewControllerCreateIfNecessary:(_Bool)arg1;
- (id)_todayViewControllerCreateIfNecessary:(_Bool)arg1;
- (void)_setUpWidgetHandlingNCColumnViewController:(id)arg1;
- (void)_setUpColumnViewController:(id)arg1;
- (_Bool)_shouldLayoutInTwoColumnsInActiveLayoutMode;
- (_Bool)_shouldLayoutInTwoColumnsInLayoutMode:(long long)arg1;
- (_Bool)_managesTwoColumns;
- (id)_localizableTitleForColumnViewController:(id)arg1;
- (void)dealloc;
- (id)initForNotificationCenterLayoutMode:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

