
#import <UIKit/UIKit.h>

@protocol FFYearCalendarViewProtocol <NSObject>
@required
- (void)showMonthCalendar;
@end

@interface FFYearCalendarView : UIView

@property (nonatomic, strong) id<FFYearCalendarViewProtocol> protocol;

- (void)invalidateLayout;

@end
