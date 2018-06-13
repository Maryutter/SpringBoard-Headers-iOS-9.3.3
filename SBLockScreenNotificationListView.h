
#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CADisplayLink, NSMutableDictionary, NSString, NSTimer, SBLockScreenNotificationTableView, SBNotificationRowActionFactory;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    SBLockScreenNotificationTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIView *_topPocketView;
    UIView *_bottomPocketView;
    UIView *_containerView;
    id <SBLockScreenNotificationViewDelegate> _delegate;
    id <SBLockScreenNotificationModel> _model;
    CADisplayLink *_displayLink;
    double _currentTextAlpha;
    double _fadeStartTimestamp;
    NSTimer *_oldTextDisabledTimer;
    unsigned long long _indexOfNewItem;
    _Bool _notificationCellIsScrollingToPasscode;
    double _notificationScrollDecelerationRatio;
    NSMutableDictionary *_heightForListItemCache;
    double _totalContentHeight;
    double _startingScrollOffset;
    double _lastDistanceScrolled;
    SBNotificationRowActionFactory *_cellButtonFactory;
    _Bool _updateCellsToVisibleOnPluginWillDisable;
}

- (void)_cellTextFadeTimerFired:(id)arg1;
- (void)_textDisabledTimerFired:(id)arg1;
- (void)_clearTextFadeTimer;
- (void)_clearTextDisabledTimer;
- (void)_resetAllFadeTimers;
- (void)_disableExistingContent;
- (_Bool)_disableIdleTimer:(_Bool)arg1;
- (void)_enableIdleTimerAfterScroll;
- (void)_pluginWillDisable:(id)arg1;
- (void)updateForRemovalOfItems;
- (void)updateForRemovalOfItemAtIndex:(unsigned long long)arg1 removedItem:(id)arg2;
- (void)_postludeForUpdateForRemoval:(_Bool)arg1;
- (void)updateForModificationOfItemWithOldIndex:(unsigned long long)arg1 andNewIndex:(unsigned long long)arg2;
- (void)updateForAdditionOfItemAtIndex:(unsigned long long)arg1 allowHighlightOnInsert:(_Bool)arg2;
- (long long)_rowAnimationForDelete;
- (long long)_rowAnimationForInsert;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollingEndedInScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_setNonSelectedCellsToVisible:(_Bool)arg1 withSelectedCell:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_handleAction:(id)arg1 forBulletin:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)_snoozedAlarmLocalNotificationForIndexPath:(id)arg1;
- (id)_alertItemForIndexPath:(id)arg1;
- (id)_activeBulletinForIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)lockScreenDidEndScrollingOnPage:(long long)arg1;
- (id)visibleNotificationCells;
- (void)scrollToTopOfListAnimated:(_Bool)arg1;
- (void)setInScreenOffMode:(_Bool)arg1;
- (void)_updateTotalContentHeight;
- (void)_updateBottomShadowVisibility;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)scrollingGesture;
- (struct CGRect)visibleRegionUsingPresentationLayer:(_Bool)arg1;
- (struct CGRect)scrollableRegion;
- (void)layoutSubviews;
- (void)prepareForRemoval;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_pocketLineColor;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

