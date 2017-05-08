//
//  AppDelegate.h
//  ARFuTest
//
//  Created by 涛涛 on 2017/4/26.
//  Copyright © 2017年 I_MT. All rights reserved.
//

#import <UIKit/UIKit.h>
@class UnityAppController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,strong)UIWindow *unityWindow;

@property (nonatomic,strong)UnityAppController *unityController;

-(void)showUnityWindow;
-(void)hideUnityWindow;

@end

