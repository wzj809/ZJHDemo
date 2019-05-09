//
//  AppDelegate.h
//  ZJHDemo
//
//  Created by 王振杰 on 2019/5/9.
//  Copyright © 2019年 王振杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

