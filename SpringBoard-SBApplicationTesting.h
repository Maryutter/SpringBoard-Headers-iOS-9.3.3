
#import "SpringBoard.h"

@interface SpringBoard (SBApplicationTesting)
- (void)failedTest:(id)arg1 withResults:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(id)arg4;
- (void)startedTest:(id)arg1;
- (void)_handleApplicationExit:(id)arg1;
- (_Bool)_shouldPendAlertsForTest:(id)arg1;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_runNotificationCenterWidgetLaunchTest:(id)arg1;
- (void)_runScrollNotificationCenterTest:(id)arg1;
- (void)_runNotificationCenterBringupTest;
- (void)_runNotificationCenterDismissTest;
- (void)_runAppSwitcherBringupTest;
- (void)_runAppSwitcherDismissTest;
- (void)_runScrollAppSwitcherTest:(id)arg1;
- (void)_runDisplayAlertTest:(id)arg1;
- (void)_runScrollIconListTest;
- (void)_endSpotlightPulldownTest;
- (void)_runSpotlightPulldownTest;
- (void)_runSearchTest:(id)arg1;
- (void)_runScrollSearchResultsTest:(id)arg1;
- (void)_runSearch:(id)arg1 onCompletion:(id)arg2;
- (void)_bringUPSpotlight:(id)arg1;
- (void)_runSpotlightSwipeLeft;
- (void)runRotationTest:(int)arg1;
- (void)endLaunchTest;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_cleanUpLaunchTestState;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_workspaceTransactionCompleted:(id)arg1;
- (void)_unscatterWillBegin:(id)arg1;
- (void)_runUnlockTest;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(id)arg3;
@end

