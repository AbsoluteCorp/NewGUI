
#import <UIKit/UIKit.h>

@interface FFWeekHeaderCell : UICollectionViewCell

@property (nonatomic, strong) UILabel *label;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) NSDate *date;

- (void)cleanCell;

@end
