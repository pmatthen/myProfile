//
//  RecipeViewController.h
//  MyProfile
//
//  Created by Vanaja Matthen on 24/05/14.
//  Copyright (c) 2014 Dr. Sara Solomon Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UIViewController

- (IBAction)backButtonTouched:(id)sender;
- (IBAction)addYourOwnButtonTouched:(id)sender;

@property (strong, nonatomic) IBOutlet UITableView *myTableView;

@end
