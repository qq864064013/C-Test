//
//  main.m
//  OC基础
//
//  Created by 谭生正 on 2017/5/26.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <iostream>


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        
        using namespace std;
        
        NSObject* jdk = [NSObject new];
        NSObject* jds = [NSObject new];
        
        auto msb = jdk;
        
        decltype(jds) msk = jds;

        NSLog(@"%@\n",[msb class]);
        NSLog(@"%@\n",[msk class]);
        
        
        std::cout<<jdk<<std::endl;
        std::cout<<jds<<std::endl;
        
        
        std::cout<<&jdk<<endl;
        
        
    }
    return 0;
}
