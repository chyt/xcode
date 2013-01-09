//
//  UIWebViewEmbedAppDelegate.h
//  UIWebViewEmbed
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIWebViewEmbedViewController;

@interface UIWebViewEmbedAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIWebViewEmbedViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIWebViewEmbedViewController *viewController;

@end

