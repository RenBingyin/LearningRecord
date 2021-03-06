//
//  BYContact+CoreDataProperties.h
//  VIPERTest
//
//  Created by by_r on 2018/3/6.
//  Copyright © 2018年 by_r. All rights reserved.
//
//

#import "BYContact+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface BYContact (CoreDataProperties)

+ (NSFetchRequest<BYContact *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *lastName;
@property (nullable, nonatomic, copy) NSString *firstName;

@end

NS_ASSUME_NONNULL_END
