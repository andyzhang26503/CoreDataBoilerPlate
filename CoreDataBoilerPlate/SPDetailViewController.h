//
//  SPDetailViewController.h
//  CoreDataBoilerPlate
//
//  Created by andyzhang on 13-12-9.
//  Copyright (c) 2013年 sporttery.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SportteryInfo.h"

@interface SPDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) SportteryInfo *sportteryInfo;


@end
