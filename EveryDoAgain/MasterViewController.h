//
//  MasterViewController.h
//  EveryDoAgain
//
//  Created by Tyler Yan on 2015-07-20.
//  Copyright (c) 2015 Tyler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

