
#import <UIKit/UIKit.h>

@protocol FFMonthCalendarViewProtocol <NSObject>
@required
- (void)setNewDictionary:(NSDictionary *)dict;
@end

@interface FFMonthCalendarView : UIView

@property (nonatomic, strong) NSMutableDictionary *dictEvents;
@property (nonatomic, strong) id<FFMonthCalendarViewProtocol> protocol;

- (void)invalidateLayout;

@end
