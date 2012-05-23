//
//  BirdsMasterViewController.h
//  Test
//
//  Created by Miles Matthias on 5/23/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdsDetailViewController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdsDetailViewController *detailViewController;

@end
