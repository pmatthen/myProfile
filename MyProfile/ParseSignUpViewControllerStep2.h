//
//  ParseSignUpViewControllerStep2.h
//  MyProfile
//
//  Created by Vanaja Matthen on 16/05/14.
//  Copyright (c) 2014 Dr. Sara Solomon Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ParseSignUpViewControllerStep2 : UIViewController

@property NSMutableArray *heightArray;
@property NSString *name;
@property NSString *email;
@property NSString *username;
@property NSString *password;

- (IBAction)backButtonTouched:(id)sender;

@end
