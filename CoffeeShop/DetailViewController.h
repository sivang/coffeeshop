//
//  DetailViewController.h
//  CoffeeShop
//
//  Created by Lion User on 03/02/2013.
//  Copyright (c) 2013 Omniqueue Technologies Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
