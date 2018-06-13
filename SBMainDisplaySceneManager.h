
#import "SBSceneManager.h"

#import "SBApplicationRestrictionObserver.h"

@class FBSSceneClientSettingsDiffInspector, NSMutableDictionary, NSString, SBMainDisplaySceneLayoutViewController, SBSideAppState, UIApplicationSceneClientSettingsDiffInspector, UISystemNavigationAction;

@interface SBMainDisplaySceneManager : SBSceneManager <SBApplicationRestrictionObserver>
{
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    long long _validInterfaceOrientation;
    unsigned long long _validInterfaceOrientationChangeCount;
    unsigned long long _processedValidInterfaceOrientationChangeCount;
    SBSideAppState *_sideAppState;
    NSMutableDictionary *_windowOverlayInsetsForSource;
    UISystemNavigationAction *_currentBreadcrumbNavigationAction;
}

- (void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2;
- (double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1;
- (void)_updatePictureInPictureOverlayInsetsWithDuration:(double)arg1;
- (void)_bulletinWillDismiss:(id)arg1;
- (void)_bulletinWillPresent:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_keyboardWillDisappear:(id)arg1;
- (void)_keyboardWillRotate:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1;
- (void)_appKilledInAppSwitcher:(id)arg1;
- (_Bool)_animateGeometryChangesForExternalForegroundApplicationScenes;
- (void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(_Bool)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6;
- (id)_rotationAnimationSettingsForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 medusaSettings:(id)arg3;
- (id)_externalClientSettingsDiffInspector;
- (id)_appClientSettingsDiffInspector;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (id)_newLayoutControllerForDisplay:(id)arg1;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;
- (id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)_isActivatingPinnedBreadcrumbApp:(id)arg1 withTransitionContext:(id)arg2;
- (id)_breadcrumbNavigationActionForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 transitionContext:(id)arg3 wasFromSpotlight:(_Bool)arg4 previousBreadcrumb:(id)arg5;
- (void)_activateBreadcrumbApplication:(id)arg1;
- (long long)_openStrategyForAppLinkState:(id)arg1;
- (id)_applicationForAppLink:(id)arg1;
- (void)_presentSpotlightFromEdge:(unsigned long long)arg1 fromBreadcrumb:(_Bool)arg2;
- (void)_presentSpotlightFromEdge:(unsigned long long)arg1;
- (id)_destinationContextsForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (id)_breadcrumbBundleIdForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)_shouldBreadcrumbApplication:(id)arg1 withTransitionContext:(id)arg2;
- (void)applyWindowOverlayInsets:(struct UIEdgeInsets)arg1 fromSource:(long long)arg2 duration:(double)arg3;
@property(retain, nonatomic) SBSideAppState *sideAppState;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
