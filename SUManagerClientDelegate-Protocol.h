
#import "NSObject.h"

@class NSError, SUDescriptor, SUDownload, SUManagerClient, SUScanOptions;

@protocol SUManagerClientDelegate <NSObject>

@optional
- (void)client:(SUManagerClient *)arg1 installDidFinish:(SUDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 installDidFail:(SUDescriptor *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 installDidStart:(SUDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadDidFinish:(SUDownload *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadDidFail:(SUDownload *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 downloadProgressDidChange:(SUDownload *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadDidStart:(SUDownload *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 scanRequestDidFinishForOptions:(SUScanOptions *)arg2 update:(SUDescriptor *)arg3 error:(NSError *)arg4;
- (void)client:(SUManagerClient *)arg1 scanRequestDidStartForOptions:(SUScanOptions *)arg2;
@end

