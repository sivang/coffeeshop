//
//  VenueCell.h
//  CoffeeShop
//
//  Created by Lion User on 04/02/2013.
//  Copyright (c) 2013 Omniqueue Technologies Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VenueCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *distanceLabel;
@property (strong, nonatomic) IBOutlet UILabel *checkinsLabel;

@end
