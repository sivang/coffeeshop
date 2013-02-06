//
//  Venue.h
//  CoffeeShop
//
//  Created by Lion User on 03/02/2013.
//  Copyright (c) 2013 Omniqueue Technologies Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Location.h"
#import "Stats.h"

@interface Venue : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) Location *location;
@property (strong, nonatomic) Stats *stats;

@end
