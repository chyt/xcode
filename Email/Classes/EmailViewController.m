//
//  EmailViewController.m
//  Email
//
//  Created by Charles Tian on 3/19/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import "EmailViewController.h"

@implementation EmailViewController

-(IBAction)showPicker:(id)sender
{
	Class mailClass = (NSClassFromString(@"MFMailComposeViewController"));
	if (mailClass !=nil)
	{
		if([mailClass canSendMail])
		{
			[self displayComposerSheet];
		}
		else {
			UIAlertView *error = [[UIAlertView alloc] initWithTitle:@"Can't send mail" message:@"Emailing functionalities are not available on your device." delegate:self cancelButtonTitle:@"Close" otherButtonTitles:nil];
			[error show];
			[error release];
		}
	}
	else {
		UIAlertView *error = [[UIAlertView alloc] initWithTitle:@"Can't send mail" message:@"Emailing functionalities are not available on your device." delegate:self cancelButtonTitle:@"Close" otherButtonTitles:nil];
		[error show];
		[error release];
	}
}

-(void)displayComposerSheet
{
	MFMailComposeViewController *picker = [[MFMailComposeViewController alloc] init];
	picker.mailComposeDelegate = self;
	NSArray *toRecipients = [NSArray arrayWithObject:@"example@example.com"];
	[picker setToRecipients:toRecipients];
	[picker setSubject:@"Send Test Email"];
	[self presentModalViewController:picker animated:YES];
	[picker release];
}

-(void)mailComposeController:(MFMailComposeViewController *)controller didFinishWithResult:(MFMailComposeResult)result error:(NSError *)error
{
	[self dismissModalViewControllerAnimated:YES];
}
	
- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
