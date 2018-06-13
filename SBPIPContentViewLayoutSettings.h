
#import "NSObject.h"

@class NSMutableArray;

@interface SBPIPContentViewLayoutSettings : NSObject
{
    long long _position;
    double _size;
    NSMutableArray *_observers;
}

+ (void)removeObserver:(id)arg1;
+ (void)addObserver:(id)arg1;
+ (struct CGSize)maximumContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)minimumContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)defaultContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)currentContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (void)setContentViewSize:(struct CGSize)arg1;
+ (long long)currentContentViewPosition;
+ (void)setContentViewPosition:(long long)arg1;
+ (id)_sharedInstance;
- (void)_notifyObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(nonatomic) double size;
@property(nonatomic) long long position;
- (id)init;

@end

