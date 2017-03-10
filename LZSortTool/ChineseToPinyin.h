//
//  ChineseToPinyin.h
//  LZSortTool
//
//  Created by 纵昂 on 2017/3/10.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChineseToPinyin : NSObject
+ (NSString *) pinyinFromChiniseString:(NSString *)string;
+ (char) sortSectionTitle:(NSString *)string;
char pinyinFirstLetter(unsigned short hanzi);
@end
