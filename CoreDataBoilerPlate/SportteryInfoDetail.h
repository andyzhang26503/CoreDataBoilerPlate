//
//  SportteryInfoDetail.h
//  CoreDataBoilerPlate
//
//  Created by andyzhang on 13-12-10.
//  Copyright (c) 2013年 sporttery.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SportteryInfo;

@interface SportteryInfoDetail : NSManagedObject

@property (nonatomic, retain) NSNumber * a;
@property (nonatomic, retain) NSString * a_cn;
@property (nonatomic, retain) NSNumber * a_id;
@property (nonatomic, retain) NSNumber * chooseA;
@property (nonatomic, retain) NSNumber * chooseD;
@property (nonatomic, retain) NSNumber * chooseH;
@property (nonatomic, retain) NSNumber * d;
@property (nonatomic, retain) NSNumber * dare;
@property (nonatomic, retain) NSNumber * goalline;
@property (nonatomic, retain) NSNumber * h;
@property (nonatomic, retain) NSString * h_cn;
@property (nonatomic, retain) NSNumber * h_id;
@property (nonatomic, retain) NSString * l_cn;
@property (nonatomic, retain) NSNumber * l_id;
@property (nonatomic, retain) NSString * num;
@property (nonatomic, retain) NSNumber * playMethod;
@property (nonatomic, retain) NSNumber * result;
@property (nonatomic, retain) SportteryInfo *info;

@end
