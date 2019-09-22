

#import <UIKit/UIKit.h>

@protocol FFWeekHeaderCollectionViewProtocol <NSObject>
@required
- (void)headerDidScroll;
- (void)showHourLine:(BOOL)show;
@end

@interface FFWeekHeaderCollectionView : UICollectionView

@property id<FFWeekHeaderCollectionViewProtocol> protocol;

@end
