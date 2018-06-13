
#import "NSObject.h"

#import "FBApplicationPlaceholderObserver.h"
#import "SBLeafIconDataSource.h"

@class FBApplicationPlaceholder, NSMutableDictionary, NSMutableSet, NSString;

@interface SBApplicationPlaceholder : NSObject <FBApplicationPlaceholderObserver, SBLeafIconDataSource>
{
    FBApplicationPlaceholder *_placeholderProxy;
    id <SBApplicationPlaceholderDelegate> _delegate;
    NSString *_applicationBundleID;
    NSString *_applicationDisplayName;
    double _fractionProgress;
    _Bool _installing;
    _Bool _observingKVO;
    unsigned long long _installType;
    _Bool _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
}

+ (id)backgroundQueue;
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (_Bool)iconIsBeta:(id)arg1;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(int)arg2;
- (void)_reloadThumbnailImage;
- (void)_generatePendingIconFormats;
- (void)_generateIconImageWithFormat:(int)arg1;
- (id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2;
- (id)_defaultIconImageWithFormat:(int)arg1;
- (id)_getOrGenerateIconImageWithFormat:(int)arg1;
- (void)placeholderDidChangeSignificantly:(id)arg1;
- (void)placeholderInstallPhaseDidChange:(id)arg1;
- (void)placeholderInstallStateDidChange:(id)arg1;
- (void)placeholderPausabilityDidChange:(id)arg1;
- (void)placeholderCancellabilityDidChange:(id)arg1;
- (void)placeholderPercentCompleteDidChange:(id)arg1;
- (void)_progressChanged;
- (_Bool)_shouldDisplayAppName;
- (id)_downloadingLabel;
- (void)_prioritize;
- (void)_pause;
- (void)cancel;
- (_Bool)isContentRestricted;
- (_Bool)isInstalling;
- (_Bool)isDownloading;
- (_Bool)isCancelable;
- (_Bool)isPausable;
- (_Bool)isFailed;
- (_Bool)isPaused;
- (_Bool)isActive;
- (_Bool)isDone;
- (unsigned long long)installType;
- (id)fetchIconImageWithFormat:(int)arg1;
- (void)iconChanged;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPlaceholderProxy:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

