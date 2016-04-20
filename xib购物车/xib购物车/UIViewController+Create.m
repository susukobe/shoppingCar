

#import "UIViewController+Create.h"
#import "UIStoryboard+Addition.h"

@implementation UIViewController (Create)

+ (id)create{
    
    NSString *className = NSStringFromClass([self class]);
    id newObj = [[UIStoryboard fromName:className] instantiateInitialViewController];
    return newObj;
}

+ (id)createFromStoryboardName:(NSString *)name WithIdentifier:(NSString *)identifier{
    
    if (name && identifier) {
        UIStoryboard *storyboard = [UIStoryboard fromName:name];
        return [storyboard instantiateViewControllerWithIdentifier:identifier];
        
    }
    return nil;
}

@end
