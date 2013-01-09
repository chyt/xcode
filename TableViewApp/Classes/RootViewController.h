//
//  RootViewController.h
//  TableViewApp
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	UITableView *mainTableView;
	NSMutableArray *contentsList;
}

@property (nonatomic,retain) IBOutlet UITableView *mainTableView;
@property (nonatomic,retain) NSMutableArray *contentsList;

@end
