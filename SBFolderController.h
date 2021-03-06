
#import "NSObject.h"

#import "SBFolderControllerDelegate.h"
#import "SBFolderObserver.h"
#import "SBFolderViewDelegate.h"

@class NSArray, NSMapTable, NSString, NSTimer, SBFolder, SBFolderContext, SBFolderControllerAnimationContext, SBFolderView, SBIcon, SBIconAnimator, SBIconViewMap, _UILegibilitySettings;

@interface SBFolderController : NSObject <SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;
    SBFolderView *_contentView;
    _Bool _didAutoScroll;
    NSTimer *_autoScrollTimer;
    struct CGPoint _dragPausePoint;
    NSTimer *_dragPauseTimer;
    NSTimer *_closeFolderTimer;
    _Bool _grabbedIconHasEverEnteredFolderView;
    long long _dropDestinationPageIndex;
    NSMapTable *_editingContextsByFolder;
    SBIconAnimator *_iconAnimator;
    _Bool _isOpen;
    _Bool _isEditing;
    _Bool _isAnimating;
    _Bool _active;
    _Bool _rotating;
    id <SBFolderControllerDelegate> _delegate;
    SBFolder *_folder;
    long long _orientation;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderController *_outerFolderController;
    SBFolderController *_innerFolderController;
    SBFolderControllerAnimationContext *_animationContext;
    id _postScrollingAction;
    SBIcon *_grabbedIcon;
    SBFolderContext *_lastContext;
}

+ (double)wallpaperScaleForDepth:(unsigned long long)arg1;
+ (unsigned long long)maxFolderDepth;
+ (Class)listViewClass;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;
- (void)folderViewDidReceiveCancelReachabilityAction:(id)arg1;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)_noteFolderListsDidChange;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
- (_Bool)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;
- (Class)controllerClassForFolder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(id)arg2;
- (void)cleanUpAfterZoomAnimation;
- (void)prepareForZoomAnimation;
- (void)addAdditionalInnerFolderAnimations;
- (id)currentIndexPath;
- (void)popToIndexPath:(id)arg1;
- (_Bool)popFolderAnimated:(_Bool)arg1 completion:(id)arg2;
- (_Bool)pushFolder:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)_animateFloatyFolderOpen:(_Bool)arg1 settings:(id)arg2 completion:(id)arg3;
- (void)prepareToClose;
- (void)prepareToOpen;
- (void)_setInnerFolderOpen:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (_Bool)_iconAppearsOnCurrentPage:(id)arg1;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
- (unsigned long long)_depth;
- (id)_newAnimatorForZoomUp:(_Bool)arg1;
- (void)_clearIconAnimator;
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(id)arg3;
- (void)noteGrabbedIcon:(id)arg1 locationDidChangeWithTouch:(id)arg2;
- (void)noteGrabbedIconDidChange:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
- (void)_updateAutoScrollForTouch:(id)arg1;
@property(readonly, nonatomic) struct CGRect _autoscrollExclusionRegion;
- (void)_cancelAutoScroll;
- (void)_doAutoScrollByPageCount:(long long)arg1;
- (void)_scrollRight:(id)arg1;
- (void)_scrollLeft:(id)arg1;
- (void)_updateDragPauseForTouch:(id)arg1;
- (void)_dragPauseTimerFired:(id)arg1;
- (_Bool)_canDropIconInListView:(id)arg1;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint)arg1 inIconListView:(id)arg2;
- (void)_cancelDragPauseTimer;
- (void)_updateDropDestinationForTouch:(id)arg1;
- (void)_updateCloseFolderForTouch:(id)arg1;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_closeFolderTimerFired;
- (void)_cancelCloseFolderTimer;
- (void)_cancelAllInteractionTimers;
- (_Bool)_allowUserInteraction;
- (unsigned long long)_indexOfIconListForIcon:(id)arg1;
- (void)_compactFolder;
- (id)_addEmptyListForce:(_Bool)arg1;
- (id)addEmptyListView;
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;
- (void)_resetIconLists;
- (void)prepareToTearDown;
- (void)_updateAssociatedControllerStateAnimated:(_Bool)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimateWithSettings:(id)arg1;
- (void)setDockVerticalStretch:(double)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (id)dockListView;
- (_Bool)hasDock;
- (_Bool)isDisplayingIcon:(id)arg1;
- (id)iconListViewContainingIcon:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (_Bool)doesPageContainIconListView:(long long)arg1;
- (id)currentIconListView;
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (_Bool)_restoreFromContext:(id)arg1;
- (id)_createContext;
- (id)folderControllerForFolder:(id)arg1;
- (id)deepestFolderController;
- (_Bool)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(_Bool)arg2;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (id)_iconPageIndicatorImageSetCache;
- (Class)_contentViewClass;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

