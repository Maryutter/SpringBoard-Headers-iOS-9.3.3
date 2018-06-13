
#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSRecursiveLock, NSString;

@interface SBWiFiManager : NSObject
{
    NSRecursiveLock *_lock;
    struct __CFRunLoop *_callbackRunLoop;
    struct __WiFiManagerClient *_manager;
    struct __WiFiDeviceClient *_device;
    NSString *_deviceInterfaceName;
    _Bool _mainThread_devicePresent;
    struct __WiFiNetwork *_currentNetwork;
    struct __WiFiNetwork *_previousNetwork;
    _Bool _currentNetworkHasBeenSet;
    _Bool _currentNetworkIsIOSHotspot;
    _Bool _currentNetworkIsIOSHotspotHasBeenSet;
    _Bool _powered;
    _Bool _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    _Bool _mainThread_signalStrengthHasBeenSet;
    struct __SCDynamicStore *_SCDynamicStoreNetworkState;
    NSObject<OS_dispatch_source> *_SCUpdateTimeoutSource;
    struct __WiFiNetwork *_primaryInterface;
    _Bool _primaryInterfaceHasBeenSet;
    _Bool _isPrimaryInterface;
    _Bool _isPrimaryInterfaceChanging;
}

+ (id)sharedInstance;
- (void)_updateWiFiDevice;
- (void)_primaryInterfaceChanged:(_Bool)arg1;
- (void)_setPrimaryInterfaceHasBeenSet;
- (id)_wifiInterface;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (_Bool)isPrimaryInterface;
- (void)resetSettings;
- (id)knownNetworks;
- (void)updateSignalStrength;
- (void)updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (int)signalStrengthRSSI;
- (int)signalStrengthBars;
- (void)setWiFiEnabled:(_Bool)arg1;
- (_Bool)wiFiEnabled;
- (void)setPowered:(_Bool)arg1;
- (_Bool)isPowered;
- (id)currentNetworkName;
- (_Bool)_cachedIsAssociated;
- (_Bool)isAssociatedToIOSHotspot;
- (_Bool)isAssociated;
- (void)_updateCurrentNetwork;
- (void)_linkDidChange;
- (void)_powerStateDidChange;
- (void)_updateWiFiState;
- (void)_runManagerCallbackThread;
- (void)_lock_spawnManagerCallbackThread;
- (struct __WiFiManagerClient *)_lock_manager;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient *)arg1;
- (void)updateDevicePresence;
- (_Bool)devicePresent;
- (_Bool)wifiSupported;
- (id)init;

@end

