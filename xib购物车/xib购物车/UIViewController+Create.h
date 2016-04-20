

#import <UIKit/UIKit.h>

@interface UIViewController (Create)

+ (id)create;

+ (id)createFromStoryboardName:(NSString *)name WithIdentifier:(NSString *)identifier;

@end
