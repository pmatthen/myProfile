//
//  FoodTrackerItem.h
//  MyProfile
//
//  Created by Poulose Matthen on 28/11/14.
//  Copyright (c) 2014 Dr. Sara Solomon Fitness. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface FoodTrackerItem : NSManagedObject

@property (nonatomic, retain) NSNumber * caloriesPerServing;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSNumber * isToday;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * numberOfServings;
@property (nonatomic, retain) NSString * servingSize;

@end
