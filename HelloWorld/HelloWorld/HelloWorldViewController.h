//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Miles Matthias on 5/21/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)changeGreeting:(id)sender;

@property (copy, nonatomic) NSString *userName;

@end
