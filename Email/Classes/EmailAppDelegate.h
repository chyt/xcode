//
//  EmailAppDelegate.h
//  Email
//
//  Created by Charles Tian on 3/19/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EmailViewController;

@interface EmailAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    EmailViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet EmailViewController *viewController;

@end

