//
//  ViewController.m
//  ARFuTest
//
//  Created by 涛涛 on 2017/4/26.
//  Copyright © 2017年 I_MT. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
     UIButton *btn =[[UIButton alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
     btn.backgroundColor=[UIColor redColor];
     [btn setTitle:@"扫福" forState:UIControlStateNormal];
     [btn addTarget:self action:@selector(showUnity) forControlEvents:UIControlEventTouchUpInside];
     [self.view addSubview:btn];
    
}
-(void)showUnity{
    AppDelegate *delegate =  (AppDelegate *)[UIApplication sharedApplication].delegate;
    [delegate showUnityWindow];
}
-(BOOL)prefersStatusBarHidden{
    return NO;
}
-(UIStatusBarStyle)preferredStatusBarStyle{
  return   UIStatusBarStyleLightContent;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
