//
//  ToDo.h
//  EveryDoAgain
//
//  Created by Tyler Yan on 2015-07-20.
//  Copyright (c) 2015 Tyler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ToDo : NSManagedObject

@property (nonatomic, retain) NSString * item;
@property (nonatomic, retain) NSString * todoDescription;

@end
