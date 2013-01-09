//
//  AlphaTransparencyAppDelegate.h
//  AlphaTransparency
//
//  Created by Charles Tian on 9/26/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AlphaTransparencyViewController;

@interface AlphaTransparencyAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet AlphaTransparencyViewController *viewController;

@end
