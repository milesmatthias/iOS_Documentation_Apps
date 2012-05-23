//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Miles Matthias on 5/22/12.
//  Copyright (c) 2012 InspiringApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end
