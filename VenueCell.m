//
//  VenueCell.m
//  CoffeeShop
//
//  Created by Lion User on 04/02/2013.
//  Copyright (c) 2013 Omniqueue Technologies Inc. All rights reserved.
//

#import "VenueCell.h"

@implementation VenueCell


@synthesize nameLabel;
@synthesize distanceLabel;
@synthesize checkinsLabel;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
