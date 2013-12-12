//
//  SPDetailViewController.m
//  CoreDataBoilerPlate
//
//  Created by andyzhang on 13-12-9.
//  Copyright (c) 2013年 sporttery.cn. All rights reserved.
//

#import "SPDetailViewController.h"
#import "SportteryInfoDetail.h"

@interface SPDetailViewController ()<UITableViewDataSource,UITableViewDelegate>
- (void)configureView;
@end

@implementation SPDetailViewController

#pragma mark - Managing the detail item

//- (void)setDetailItem:(id)newDetailItem
//{
//    if (_detailItem != newDetailItem) {
//        _detailItem = newDetailItem;
//        
//        // Update the view.
//        [self configureView];
//    }
//}

- (void)configureView
{
    // Update the user interface for the detail item.

//    if (self.detailItem) {
//        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
//    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.sportteryInfo.details.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSArray *detailsArray = [self.sportteryInfo.details allObjects];
    SportteryInfoDetail *detail = detailsArray[indexPath.row];
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    cell.textLabel.text = detail.l_cn;
    cell.detailTextLabel.text = detail.h_cn;

    return cell;
}
@end
