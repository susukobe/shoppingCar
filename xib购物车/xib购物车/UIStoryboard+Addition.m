

#import "UIStoryboard+Addition.h"

@implementation UIStoryboard (Addition)

+ (UIStoryboard*)fromName:(NSString*)name
{
    return [UIStoryboard storyboardWithName:name bundle:[NSBundle mainBundle]];
}

@end
