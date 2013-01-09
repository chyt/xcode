//
//  MapViewAppDelegate.h
//  MapView
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapViewViewController;

@interface MapViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MapViewViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MapViewViewController *viewController;

@end

