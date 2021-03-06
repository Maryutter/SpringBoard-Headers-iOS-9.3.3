
#import "SBWidgetHandlingNCColumnViewController.h"

#import "NCSnippetDataSourceObserver.h"

@class EKUIMiniMonthView, NSArray, NSString;

@interface SBTodayViewController : SBWidgetHandlingNCColumnViewController <NCSnippetDataSourceObserver>
{
    NSArray *_todaySnippetIdentifierOrder;
    NSArray *_tomorrowSnippetIdentifierOrder;
    EKUIMiniMonthView *_miniMonth;
}

+ (id)interfaceItemForDatum:(id)arg1 fromDataSourceWithIdentifier:(id)arg2;
- (void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)notificationCenterTableViewController:(id)arg1 didSelectAction:(id)arg2 forRow:(id)arg3 inSection:(id)arg4;
- (_Bool)notificationCenterTableViewController:(id)arg1 didSelectRow:(id)arg2 inSection:(id)arg3;
- (_Bool)notificationCenterTableViewController:(id)arg1 shouldHighlightRow:(id)arg2 inSection:(id)arg3;
- (id)_widgetHandlingBulletinViewController;
- (id)todayTableFooterView;
- (id)todayTableHeaderView;
- (void)widgetsEditButtonTapped:(id)arg1;
- (void)forceUpdateTableHeader;
- (void)_updateTableHeaderIfNecessary;
- (void)_updateTableHeader:(_Bool)arg1;
- (id)_lazyMiniMonth;
- (void)updateTableFooter;
- (id)_orderedEnabledInterfaceItems;
- (void)snippetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (void)_replaceWithSnippetDatum:(id)arg1 inSection:(id)arg2;
- (id)_tomorrowSectionInfo;
- (id)_todaySectionInfo;
- (id)_sectionInfoForSnippetCategory:(long long)arg1;
- (void)_removeSnippetWithIdentifierIfPossible:(id)arg1 inSection:(id)arg2;
- (void)_replaceWithSnippetIfPossible:(id)arg1 snippet:(id)arg2 inSection:(id)arg3;
- (id)_snippetRowInfoWithIdentifier:(id)arg1 inSection:(id)arg2;
- (void)_insertSnippetIfPossible:(id)arg1 inSection:(id)arg2 sortGuide:(id)arg3;
- (void)_removeSnippetSectionIfPossible:(id)arg1;
- (void)_insertSnippetSectionIfPossible:(id)arg1;
- (_Bool)_isElementWithIdentifierEnabled:(id)arg1;
- (id)_snippetAfterSnippet:(id)arg1 inCollection:(id)arg2;
- (void)_sortSnippets:(id)arg1 usingGuide:(id)arg2;
- (id)_bulletinOrderStringForSnippetInfo:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) struct CGAffineTransform contentTransform;
- (id)_todayViewControllerDelegate;
- (id)_representedGroup;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

