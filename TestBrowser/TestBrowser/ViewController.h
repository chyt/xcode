//
//  ViewController.h
//  TestBrowser
//
//  Created by Charles Tian on 4/14/12.
//  Copyright (c) 2012 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UIWebView *webView;
    IBOutlet UITextField *webAddress;
    IBOutlet UIActivityIndicatorView *active;
    IBOutlet UIToolbar *toolbar;
}

@end
