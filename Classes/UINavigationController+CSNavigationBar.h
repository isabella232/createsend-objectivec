//
//  UINavigationController+CSNavigationBar.h
//  CreateSend
//
//  Created by Nathan de Vries on 30/03/12.
//  Copyright (c) 2012 Nathan de Vries. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (CSNavigationBar)

- (id)initWithRootViewController:(UIViewController *)rootViewController
       applyCSNavigationBarStyle:(BOOL)applyCSNavigationBarStyle;

+ (id)controllerWithRootViewController:(UIViewController *)rootViewController
             applyCSNavigationBarStyle:(BOOL)applyCSNavigationBarStyle;

@end
