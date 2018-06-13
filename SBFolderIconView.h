
#import "SBIconView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBFolderSettings;

@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver>
{
    SBFolderSettings *_folderSettings;
}

+ (_Bool)canShowLabelAccessoryView;
- (id)_folderIconImageView;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setShouldRasterizeImageView:(_Bool)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)_updateAdaptiveColors;
- (void)_applyEditingStateAnimated:(_Bool)arg1;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(_Bool)arg2;
- (void)removeDropGlow;
- (void)showDropGlow:(_Bool)arg1;
- (void)prepareDropGlow;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (void)setIconGridImageAlpha:(double)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (_Bool)allowsTapWhileEditing;
@property(readonly, copy) NSString *description;
- (id)folder;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToFirstGapAnimated:(_Bool)arg1;
- (void)scrollToTopOfFirstPageAnimated:(_Bool)arg1;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)lastVisibleMiniIconIndex;
- (unsigned long long)centerVisibleMiniIconIndex;
- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)visibleMiniIconListIndex;
- (unsigned long long)visibleMiniIconCount;
- (id)iconBackgroundView;
- (id)dropGlow;
- (void)setIcon:(id)arg1;
- (id)folderIcon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

