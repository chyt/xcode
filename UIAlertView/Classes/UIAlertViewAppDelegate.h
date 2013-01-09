//
//  UIAlertViewAppDelegate.h
//  UIAlertView
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIAlertViewViewController;

@interface UIAlertViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIAlertViewViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIAlertViewViewController *viewController;

@end

