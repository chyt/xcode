//
//  EmailViewController.h
//  Email
//
//  Created by Charles Tian on 3/19/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface EmailViewController : UIViewController <MFMailComposeViewControllerDelegate> {

}
-(IBAction)showPicker:(id)sender;
-(void)displayComposerSheet;
@end

