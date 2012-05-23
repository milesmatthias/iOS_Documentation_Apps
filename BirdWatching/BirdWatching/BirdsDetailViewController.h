//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Miles Matthias on 5/22/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;
@interface BirdsDetailViewController : UITableViewController
@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
