
#import "SBUIPluginHost.h"

@class BSEventQueue, FBDisplayLayoutElement, FBUIApplicationSceneDeactivationAssertion, NSHashTable, NSMutableSet, NSString, SBAssistantWindow, SBPasscodeLockDisableAssertion, UIViewController<SBUIPluginViewControllerInterface>;

@interface SBAssistantController : SBUIPluginHost
{
    BSEventQueue *_operationQueue;
    NSString *_appDisplayIDBeingHosted;
    SBAssistantWindow *_assistantWindow;
    _Bool _unlockedDevice;
    _Bool _launchedInStark;
    _Bool _isHidingOtherWindows;
    int _activationEvent;
    SBPasscodeLockDisableAssertion *_disableAssertion;
    NSMutableSet *_dismissingReasons;
    long long _pendingDismissViewType;
    NSHashTable *_observers;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    UIViewController<SBUIPluginViewControllerInterface> *_mainScreenViewController;
    FBDisplayLayoutElement *_mainDisplayLayoutElement;
    FBDisplayLayoutElement *_starkDisplayLayoutElement;
}

+ (_Bool)isAssistantRunningHidden;
+ (_Bool)isAssistantViewVisible:(long long)arg1;
+ (_Bool)isAssistantVisible;
+ (_Bool)shouldEnterAssistant;
+ (_Bool)supportedAndEnabled;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)uiPlugin:(id)arg1 isNowRunning:(_Bool)arg2;
- (void)uiPluginUserEventOccurred:(id)arg1;
- (_Bool)uiPlugin:(id)arg1 openURL:(id)arg2;
- (_Bool)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(_Bool)arg4;
- (_Bool)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
- (_Bool)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(id)arg3;
- (void)_dismissUIPlugin:(id)arg1 animated:(_Bool)arg2;
- (void)dismissPluginForEvent:(int)arg1;
- (_Bool)pluginSuppressesNotifications;
- (_Bool)pluginWantsScreenDimInterval:(double *)arg1;
- (_Bool)pluginWantsInterfaceOrientation:(long long *)arg1;
- (void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (_Bool)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 setShowsStatusBar:(_Bool)arg2;
- (void)_dismissForMainScreenWithFactory:(id)arg1 completion:(id)arg2;
- (id)_fakeStatusBarForOrientation:(long long)arg1;
- (void)_presentForMainScreenAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)_notifyObserversViewDidDisappear:(long long)arg1;
- (void)_notifyObserversViewWillDisappear:(long long)arg1;
- (void)_notifyObserversViewDidAppear:(long long)arg1;
- (void)_notifyObserversViewWillAppear:(long long)arg1;
- (void)_viewDidDisappearWithType:(long long)arg1;
- (void)_viewDidAppearWithType:(long long)arg1;
- (void)_bioAuthenticated:(id)arg1;
- (void)_starkSiriDidDisappear:(id)arg1;
- (void)_starkSiriWillDisappear:(id)arg1;
- (void)_starkSiriDidAppear:(id)arg1;
- (void)_starkSiriWillAppear:(id)arg1;
- (void)_viewDidDisappearOnMainScreen:(_Bool)arg1;
- (void)_viewWillDisappearOnMainScreen:(_Bool)arg1;
- (void)_viewDidAppearOnMainScreen:(_Bool)arg1;
- (void)_viewWillAppearOnMainScreen:(_Bool)arg1;
- (id)_activationSettingsWithDismissalDisallowed:(_Bool)arg1;
- (_Bool)_isPluginLoaded;
- (void)_loadPlugin;
- (_Bool)_isDismissingAllViews;
- (double)_defaultAnimatedDismissDurationForMainScreen;
- (id)transferOwnershipOfPasscodeLockDisableAssertion;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)mainScreenView;
- (id)window;
- (_Bool)activateIgnoringTouches;
- (_Bool)shouldShowLockStatusBarTime;
- (void)dismissAssistantView:(long long)arg1 forAlertActivation:(id)arg2;
- (void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 factory:(id)arg3 completion:(id)arg4;
- (void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 completion:(id)arg3;
- (void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2;
- (void)dismissAssistantViewIfNecessary:(long long)arg1;
- (id)activationSettings;
- (void)handleSiriPreheatCommand;
- (void)handleSiriButtonUpEventFromSource:(int)arg1;
- (_Bool)handleSiriButtonDownEventFromSource:(int)arg1 activationEvent:(int)arg2;
- (void)_notePluginVisibilityDidChange;
- (void)dealloc;
- (id)init;
- (_Bool)_runActivateAssistantTest:(id)arg1;
- (void)_activateSiriForPPT;
- (_Bool)isAssistantViewVisible:(long long)arg1;
- (_Bool)shouldEnterAssistant;
- (_Bool)supportedAndEnabled;

@end

