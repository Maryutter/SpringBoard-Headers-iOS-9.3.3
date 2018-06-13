
#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, SBInterfaceItemInfo, UINavigationController, UITableViewController;

@interface SBTodayViewSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <SBTodayViewSettingsViewControllerDelegate> _settingsViewControllerDelegate;
    UINavigationController *_navigationController;
    UITableViewController *_tableViewController;
    NSMutableArray *_enabledTodayItems;
    NSMutableArray *_enabledWidgetItems;
    NSMutableArray *_disabledItems;
    SBInterfaceItemInfo *_todayItem;
    SBInterfaceItemInfo *_tomorrowItem;
    SBInterfaceItemInfo *_coreRoutineItem;
    _Bool _coreRoutineIsAvailable;
    NSArray *_groupIDs;
}

- (_Bool)_updateCoreRoutineAvailability;
- (long long)_compareInterfaceItem:(id)arg1 andInterfaceItemConsideringIsNew:(id)arg2;
- (_Bool)_isNewInterfaceItem:(id)arg1;
- (_Bool)_isFixedSnippetsItem:(id)arg1;
- (long long)_indexOfLastEnabledWidgetInSection:(unsigned long long)arg1;
- (long long)_indexOfFirstEnabledWidgetInSection:(unsigned long long)arg1;
- (unsigned long long)_indexForInsertingItem:(id)arg1 intoArray:(id)arg2;
- (id)_interfaceItemForIndexPath:(id)arg1;
- (void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)_interfaceItemsInSection:(unsigned long long)arg1;
- (unsigned long long)_sectionIndexForGroupKey:(id)arg1;
- (id)_groupKeyForSectionAtIndex:(unsigned long long)arg1;
- (void)_saveInterfaceItemsState;
- (void)_acknowledgeInterfaceItemsAndResetNewWidgetsCount;
- (void)_saveInterfaceItemsArrangement;
- (void)_loadInterfaceItems;
- (id)_enabledItemsForGroupID:(id)arg1;
- (id)_newBackgroundView;
- (void)_dismissWidgetsSettings;
- (void)_cancelWidgetsSettings;
- (void)_cancelWidgetsSettingsAcknowledgingInterfaceItemsAndResettingNewWidgetsCount:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)_layoutMode;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSettingsViewControllerDelegate:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

