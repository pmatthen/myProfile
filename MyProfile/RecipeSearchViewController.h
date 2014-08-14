//
//  RecipeSearchViewController.h
//  MyProfile
//
//  Created by Poulose Matthen on 14/08/14.
//  Copyright (c) 2014 Dr. Sara Solomon Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeSearchViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITableView *myTableView;
@property (strong, nonatomic) IBOutlet UITextField *myTextField;

- (IBAction)searchButtonPressed:(id)sender;

@end
