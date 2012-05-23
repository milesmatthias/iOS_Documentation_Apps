//
//  BirdsDetailViewController.h
//  Test
//
//  Created by Miles Matthias on 5/23/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
