
#import "NSObject.h"

@class NSLock, NSObject<OS_dispatch_semaphore>, PKPassLibrary;

@interface SBResetManager : NSObject
{
    _Bool _threadRunning;
    NSLock *_lock;
    int _mode;
    NSLock *_progressLock;
    float _progress;
    _Bool _paymentCardsExist;
    PKPassLibrary *_passLibrary;
    struct {
        float _field1;
        struct __CFArray *_field2;
        float _field3;
    } *_paymentCardDeletionProgressStack;
    id _postCardDeletionHandler;
    NSObject<OS_dispatch_semaphore> *_resetThreadSemaphore;
}

+ (id)sharedInstance;
- (void)_resetFinished;
- (void)_postResetEnded;
- (void)_resetThread;
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
- (void)performPaymentCardDeletionWithCompletion:(id)arg1;
- (void)_beginReset:(id)arg1;
- (void)beginReset;
- (float)progress;
- (void)_setProgress:(float)arg1;
- (void)prepareToResetInMode:(int)arg1;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (id)init;

@end

