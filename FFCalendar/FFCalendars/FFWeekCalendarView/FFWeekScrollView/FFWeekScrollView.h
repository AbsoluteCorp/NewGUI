
#import <UIKit/UIKit.h>

#import "FFWeekCollectionView.h"

@interface FFWeekScrollView : UIScrollView

@property (nonatomic, strong) NSMutableDictionary *dictEvents;
@property (nonatomic, strong) FFWeekCollectionView *collectionViewWeek;
@property (nonatomic, strong) UILabel *labelWithActualHour;
@property (nonatomic, strong) UILabel *labelGrayWithActualHour;

- (void)showlabelsWithActualHourWithAlpha:(BOOL)show;

@end
