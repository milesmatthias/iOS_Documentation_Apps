//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Miles Matthias on 5/22/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSInteger)theIndex;
- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation;

@end
