//
//  main.m
//  混编验证
//
//  Created by 谭生正 on 2017/5/31.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <iostream>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
       
        std::string mp = "我是好人";
        NSString* string = [NSString stringWithCString:mp.c_str() encoding:NSUTF8StringEncoding];
        NSLog(@"%@",string);
        
    }
    return 0;
}
