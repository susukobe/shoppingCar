//
//  SuMarco.h
//  xib购物车
//
//  Created by 大神ke on 16/4/20.
//  Copyright © 2016年 大神ke. All rights reserved.
//

#ifndef SuMarco_h
#define SuMarco_h

/**************************************系统单例**********************************************************/
#pragma mark - App Singleton

#define kAppDelegate        (AppDelegate *)[[UIApplication sharedApplication] delegate]
#define kKeyWindow          [UIApplication sharedApplication].keyWindow
#define kFileManager        [NSFileManager defaultManager]
#define kApplication        [UIApplication sharedApplication]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kMainScreen         [UIScreen mainScreen]
// 屏幕大小
#define kMainScreenBounds [UIScreen mainScreen].bounds
// 当前屏幕宽
#define SU_ScreenWidth   ([UIScreen mainScreen].bounds.size.width)
// 当前屏幕高
#define SU_ScreenHeight  ([UIScreen mainScreen].bounds.size.height)
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/

/**************************************NSString*********************************************************/
#pragma mark - NSString

// int → string
#define kIntToString(_i) [NSString stringWithFormat:@"%d", _i]
// float,double → string
#define kFloatToString(_f) [NSString stringWithFormat:@"%f", _f]
// float,double → string ,,, format
#define kGToString(_g) [NSString stringWithFormat:@"%g", _g]
// object → string
#define kToString(o) [NSString stringWithFormat:@"%@", (o)]
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/

/**************************************Weak*************************************************************/
#pragma mark - Weak & Strong

// 自身弱引用
#define WEAK_SELF()  __weak __typeof(self) weakSelf = self;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/

/**************************************Device***********************************************************/
#pragma mark - Device

// 当前手机语言
#define kDeviceLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])
// 当前系统版本号
#define kDeviceVersion  ([[[UIDevice currentDevice] systemVersion] floatValue])
// 应用当前语言是否为简体中文
#define kIsChinese (([DeviceLanguage isEqualToString:@"zh-Hans"]) ? YES : NO)
// 获取当前应用版本
#define kAppVersion    ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"])
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/

/**************************************Device***********************************************************/
#pragma mark - UIColor

#define kBlackColor     [UIColor blackColor]      // 0.0 white
#define kDarkGrayColor  [UIColor darkGrayColor]   // 0.333 white
#define kLightGrayColor [UIColor lightGrayColor]  // 0.667 white
#define kWhiteColor     [UIColor whiteColor]      // 1.0 white
#define kGrayColor      [UIColor grayColor]       // 0.5 white
#define kRedColor       [UIColor redColor]        // 1.0, 0.0, 0.0 RGB
#define kGreenColor     [UIColor greenColor]      // 0.0, 1.0, 0.0 RGB
#define kBlueColor      [UIColor blueColor]       // 0.0, 0.0, 1.0 RGB
#define kCyanColor      [UIColor cyanColor]       // 0.0, 1.0, 1.0 RGB
#define kYellwColor     [UIColor yellowColor]     // 1.0, 1.0, 0.0 RGB
#define kMagentaColor   [UIColor magentaColor]    // 1.0, 0.0, 1.0 RGB
#define kOrangeColor    [UIColor orangeColor]     // 1.0, 0.5, 0.0 RGB
#define kPurpleColor    [UIColor purpleColor]     // 0.5, 0.0, 0.5 RGB
#define kBrownColor     [UIColor brownColor]      // 0.6, 0.4, 0.2 RGB
#define kClearColor     [UIColor clearColor]      // 0.0 white, 0.0 alpha

#define kRGBColorHex(_f) [UIColor colorWithRed:((float)((_f & 0xFF0000) >> 16))/255.0 green:((float)((_f & 0xFF00)>> 8))/255.0 blue:((float) (_f & 0xFF))/255.0 alpha:1.0f]
#define kRGBAColor(_r, _g, _b, _a) [UIColor colorWithRed:(_r)/255.0 green:(_g)/255.0 blue:(_b)/255.0 alpha:_a]
#define kRGBColor(_r, _g, _b) RGBAColor(_r, _g, _b, 1.0f)
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/

/*******************************************UIImage*****************************************************/
#pragma mark - UIImage

// 读取本地图片
#define kLoadImage(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]
// 读取本地png图片
#define kLoadPngImage(_file) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:_file ofType:nil]]
// 定义UIImage对象
#define kImageNamed(_name) [UIImage imageNamed:_name]
// 可拉伸的图片
#define kResizableImage(name,top,left,bottom,right) [[UIImage imageNamed:name] resizableImageWithCapInsets:UIEdgeInsetsMake(top,left,bottom,right)]
#define kResizableImageWithMode(name,top,left,bottom,right,mode) [[UIImage imageNamed:name] resizableImageWithCapInsets:UIEdgeInsetsMake(top,left,bottom,right) resizingMode:mode]
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/



#endif /* SuMarco_h */
