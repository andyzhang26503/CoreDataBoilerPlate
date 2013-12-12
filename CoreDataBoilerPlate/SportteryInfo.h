//
//  SportteryInfo.h
//  CoreDataBoilerPlate
//
//  Created by andyzhang on 13-12-10.
//  Copyright (c) 2013年 sporttery.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SportteryInfoDetail;

@interface SportteryInfo : NSManagedObject

@property (nonatomic, retain) NSNumber * ifWin;
@property (nonatomic, retain) NSDate * submitDate;
@property (nonatomic, retain) NSNumber * sumMoney;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSSet *details;
@end

@interface SportteryInfo (CoreDataGeneratedAccessors)

- (void)addDetailsObject:(SportteryInfoDetail *)value;
- (void)removeDetailsObject:(SportteryInfoDetail *)value;
- (void)addDetails:(NSSet *)values;
- (void)removeDetails:(NSSet *)values;

@end
