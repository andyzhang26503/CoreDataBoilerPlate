//
//  SPDetailViewController.h
//  CoreDataBoilerPlate
//
//  Created by andyzhang on 13-12-9.
//  Copyright (c) 2013年 sporttery.cn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SPDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
