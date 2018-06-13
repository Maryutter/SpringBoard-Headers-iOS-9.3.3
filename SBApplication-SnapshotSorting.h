
#import "SBApplication.h"

@interface SBApplication (SnapshotSorting)
+ (id)snapshotSortDescriptorForCreationDate;
+ (id)snapshotSortDescriptorForRequiredOSVersion:(id)arg1;
+ (id)snapshotSortDescriptorForContentTypeMask;
+ (id)snapshotSortDescriptorForInterfaceOrientationMask:(unsigned long long)arg1;
+ (id)snapshotSortDescriptorForStatusBarStateMask:(unsigned long long)arg1;
+ (id)snapshotSortDescriptorForImageScale:(double)arg1;
+ (id)snapshotSortDescriptorForLaunchInterfaceIdentifier:(id)arg1;
+ (id)snapshotSortDescriptorForScheme:(id)arg1;
+ (id)snapshotSortDescriptorForNames:(id)arg1;
+ (id)snapshotSortDescriptorsForNames:(id)arg1 scheme:(id)arg2 imageScale:(double)arg3 statusBarStateMask:(unsigned long long)arg4 interfaceOrientationMask:(unsigned long long)arg5 requiredOSVersion:(id)arg6;
@end

