//
//  SPMasterViewController.h
//  CoreDataBoilerPlate
//
//  Created by andyzhang on 13-12-9.
//  Copyright (c) 2013年 sporttery.cn. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface SPMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
