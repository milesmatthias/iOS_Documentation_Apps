//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Miles Matthias on 5/22/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
