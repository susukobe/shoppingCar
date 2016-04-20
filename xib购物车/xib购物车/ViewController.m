//
//  ViewController.m
//  xib购物车
//
//  Created by 大神ke on 16/4/20.
//  Copyright © 2016年 大神ke. All rights reserved.
//

#import "ViewController.h"
#import "shoppingViewController.h"
#import "UIViewController+Create.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"购物车";
    
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"跳转" style:UIBarButtonItemStylePlain target:self action:@selector(buttonClick)];
}

- (void)buttonClick{
    
    shoppingViewController *shop = [UIViewController createFromStoryboardName:@"shoppingViewController" WithIdentifier:@"shoppingViewController"];
    [self.navigationController pushViewController:shop animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
