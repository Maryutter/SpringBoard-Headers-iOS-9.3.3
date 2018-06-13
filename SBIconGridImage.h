
#import "UIImage.h"

@interface SBIconGridImage : UIImage
{
    unsigned long long _numberOfCells;
}

+ (struct CGSize)sizeForNumberOfRows:(unsigned long long)arg1;
+ (struct CGRect)rectAtIndex:(unsigned long long)arg1 maxCount:(unsigned long long)arg2;
+ (struct CGSize)cellSpacing;
+ (struct CGSize)cellSize;
+ (unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)arg1;
+ (unsigned long long)numberOfColumns;
+ (id)gridImageForNumberOfCells:(unsigned long long)arg1 withCellImageProviderBlock:(id)arg2;
+ (id)_gridImageForNumberOfCells:(unsigned long long)arg1 withPreviousGridImage:(id)arg2 cellImageProviderBlock:(id)arg3;
- (id)iconImageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfRows;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfCells;
- (id)gridImageByPatchingWithCellImageProviderBlock:(id)arg1;

@end
