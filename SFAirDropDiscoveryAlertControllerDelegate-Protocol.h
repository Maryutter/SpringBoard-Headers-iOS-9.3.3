
#import "NSObject.h"

@class SFAirDropDiscoveryController, UIAlertController;

@protocol SFAirDropDiscoveryAlertControllerDelegate <NSObject>

@optional
- (void)discoveryController:(SFAirDropDiscoveryController *)arg1 alertControllerDidDismiss:(UIAlertController *)arg2;
@end

