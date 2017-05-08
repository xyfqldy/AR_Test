//
//  AppDelegate.m
//  ARFuTest
//
//  Created by 涛涛 on 2017/4/26.
//  Copyright © 2017年 I_MT. All rights reserved.
//

#import "AppDelegate.h"
#import "UnityAppController.h"
#import "UnityAppController+UnityInterface.h"
#import "UnityAppController+Rendering.h"
#import "InternalProfiler.h"
extern bool _didResignActive;
#import "ViewController.h"
@interface AppDelegate ()

@end

@implementation AppDelegate

/*extern "C" {
    float doExitSelector()
    {
         // 使用这个代码会导致应用Crash
         // ReleaseViewHierarchy();
         // UnityCleanup();
        // 所以在这里，使用以下方法：讲Unity暂停，隐藏项目，将iOS项目Window显示
        UnityPause(true);
        _didResignActive = YES;
        Profiler_UninitProfiler();
        [[[UnityGetMainWindow() rootViewController] view] setHidden:YES];
        AppDelegate *delegate = (AppDelegate *)[UIApplication sharedApplication].delegate;
        delegate.window.hidden = NO;
        [delegate.window makeKeyWindow];
        
        return 0.0f;
    }
}*/
-(UIWindow *)unityWindow{
    return UnityGetMainWindow();
}

-(void)showUnityWindow{
    if (!self.unityController) {
        self.unityController=[[UnityAppController alloc]init];
        [self.unityController application:[UIApplication sharedApplication] didFinishLaunchingWithOptions:nil];
    }
    //下面只是有些尝试罢了，结果并不理想哈。
   // [self.unityController applicationDidFinishLaunching:[UIApplication sharedApplication]];
    //[self.unityController applicationDidBecomeActive:[UIApplication sharedApplication]];
   // [self.unityController createDisplayLink];
    UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
    button.frame = CGRectMake(0, 0, 155, 85);
    button.backgroundColor=[UIColor redColor];
    [button setTitle:@"返回" forState:UIControlStateNormal];
    [button addTarget:self action:@selector(hideUnityWindow) forControlEvents:UIControlEventTouchUpInside];
    [self.unityWindow addSubview:button];
  
    /*if (![_unityController paused]) {
        [_unityController setPaused:NO];
    }else{
        [_unityController setPaused:YES];
    }*/
    _unityController.paused = NO;
    self.window.hidden =YES;
    self.unityWindow.hidden = NO;
    [self.unityWindow makeKeyWindow];
}
-(void)hideUnityWindow{
//    [self.unityController destroyDisplayLink];
//    doExitSelector();
//    return;

    /*if (![_unityController paused]) {
        [_unityController setPaused:NO];
    }else{
        [_unityController setPaused:YES];
    }*/
    _unityController.paused =YES;
    self.unityWindow.hidden = YES;
    self.window.hidden = NO;
    [self.window makeKeyWindow];
//    [self.unityController applicationWillResignActive:[UIApplication sharedApplication]];
//    [self.unityController applicationWillTerminate:[UIApplication sharedApplication]];
//    self.unityController = nil;
}
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor=[UIColor whiteColor];
    ViewController *vc = [[ViewController alloc]init];
    self.window.rootViewController=vc;
    
    self.unityController=[[UnityAppController alloc]init];
    [self.unityController application:application didFinishLaunchingWithOptions:launchOptions];
    
//    [self hideUnityWindow];
    [self.window makeKeyAndVisible];
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    [self.unityController applicationWillResignActive:application];
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    [self.unityController applicationDidEnterBackground:application];
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    [self.unityController applicationDidBecomeActive:application];
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
