//
//  main.cpp
//  容器vector
//
//  Created by 谭生正 on 2017/5/27.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
 
    using  std::vector;
    
    vector<std::string> m1; //未初始化的 容器
    vector<std::string> m2 = {"a","bc","efg"}; // 容器中有三个 字符串  a , bc, efg
    vector<std::string> m2_1{"a","bc","efg"};  //和上面的效果一样
    vector<std::string> m3 = m2; // m2 的一个副本
    vector<std::string> m4(m2); // 同样是复制 m2 的一个副本 和上面效果一样
    vector<std::string> m5(10,"a") ;  //10 个重复的 字符串 a 的容器
    vector<std::string> m6(5); // 初始化 5 个容量的 容器
    
    vector<std::string> *p = &m3;
    
    
    vector<std::string>::const_iterator iter; //迭代器类型
    iter = m2.begin(); //获取m2的迭代器 根据 <string>   <const string> 返回的迭代器类型不同
    //iter = m2.cbegin(); // 获取m2 的const 迭代器；
    
 
    
    
    
    
    return 0;
}
