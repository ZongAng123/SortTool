//
//  NSObject+SortKey.m
//  LZSortTool
//
//  Created by 纵昂 on 2017/3/10.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import "NSObject+SortKey.h"
#import <objc/runtime.h>
@implementation NSObject (SortKey)
- (void)setKey:(NSString *)key {
    
    objc_setAssociatedObject(self, @selector(key), key, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (NSString *)key {
    
    return objc_getAssociatedObject(self, _cmd);
}
@end
