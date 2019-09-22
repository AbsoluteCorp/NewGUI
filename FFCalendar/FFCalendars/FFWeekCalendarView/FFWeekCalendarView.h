
#import <UIKit/UIKit.h>

@protocol FFWeekCalendarViewProtocol <NSObject>
@required
- (void)setNewDictionary:(NSDictionary *)dict;
@end

@interface FFWeekCalendarView : UIView

@property (nonatomic, strong) id<FFWeekCalendarViewProtocol> protocol;
@property (nonatomic, strong) NSMutableDictionary *dictEvents;

- (void)invalidateLayout;

@end
