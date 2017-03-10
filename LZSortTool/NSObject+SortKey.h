//
//  NSObject+SortKey.h
//  LZSortTool
//
//  Created by 纵昂 on 2017/3/10.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (SortKey)
/********* 为方便排序,新增一个属性 *************/
@property (nonatomic,copy)NSString *key;
@end
