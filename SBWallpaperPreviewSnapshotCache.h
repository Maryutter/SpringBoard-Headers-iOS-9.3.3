
#import "NSObject.h"

#import "SBIconIndexNodeObserver.h"

@class NSString, SBFMappedImageCache;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver>
{
    SBFMappedImageCache *_imageCache;
    long long _invalidatedLocations;
}

- (id)_lockScreenSnapshotProvider;
- (id)_homeScreenSnapshotProvider;
- (void)_backlightFadeFinished;
- (void)_modelDidLayout;
- (void)_modelWillLayout;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)regenerateSnapshotsForLocations:(long long)arg1 withCompletion:(id)arg2;
- (id)homeScreenSnapshot;
- (id)lockScreenSnapshot;
- (void)invalidateSnapshotsForLocations:(long long)arg1;
- (void)dealloc;
- (id)initWithImageCache:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

