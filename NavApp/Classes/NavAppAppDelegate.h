//
//  NavAppAppDelegate.h
//  NavApp
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NavAppViewController;

@interface NavAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    NavAppViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet NavAppViewController *viewController;

@end

