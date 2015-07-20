//
//  DetailViewController.h
//  EveryDoAgain
//
//  Created by Tyler Yan on 2015-07-20.
//  Copyright (c) 2015 Tyler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

