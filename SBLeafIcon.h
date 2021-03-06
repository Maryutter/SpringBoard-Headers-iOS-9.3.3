
#import "SBIcon.h"

#import "NSCopying.h"

@class NSMutableSet, NSString;

@interface SBLeafIcon : SBIcon <NSCopying>
{
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableSet *_dataSources;
    id <SBLeafIconDataSource> _activeDataSource;
    id <SBLeafIconDataSource> _dataSourceAtUninstallation;
}

- (id)nodeIdentifier;
- (void)launchFromLocation:(int)arg1 context:(id)arg2;
- (_Bool)launchEnabled;
- (void)completeUninstall;
- (void)setUninstalled;
- (_Bool)isUninstallSupported;
- (_Bool)isBeta;
- (_Bool)isRecentlyUpdated;
- (int)accessoryTypeForLocation:(int)arg1;
- (id)accessoryTextForLocation:(int)arg1;
- (id)badgeNumberOrString;
- (_Bool)progressIsPaused;
- (double)progressPercent;
- (long long)progressState;
- (_Bool)canTightenLabel;
- (_Bool)canEllipsizeLabel;
- (id)displayNameForLocation:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)_noteDataSourceDidInvalidateNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1;
- (void)_noteActiveDataSourceDidChangeNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateIconFormat:(int)arg1;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(_Bool)arg1;
- (id)activeDataSource;
- (void)removeIconDataSourcesOfClass:(Class)arg1;
- (void)removeIconDataSource:(id)arg1;
- (void)addIconDataSource:(id)arg1;
- (void)_updateActiveDataSource;
- (id)applicationBundleID;
- (id)leafIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)init;

@end

