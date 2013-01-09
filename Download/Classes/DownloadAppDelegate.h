//
//  DownloadAppDelegate.h
//  Download
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DownloadViewController;

@interface DownloadAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DownloadViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DownloadViewController *viewController;

@end

