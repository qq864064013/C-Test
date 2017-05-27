//
//  main.cpp
//  C++验证
//
//  Created by 谭生正 on 2017/5/27.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
  
    using namespace std;
    
    vector<string> k = {"a","bs","cc"};
    
    cout<<&k<<endl;
    
    vector<string>::iterator ki = k.begin();
    
    cout<<*ki<<endl;
    

    
    
    
    return 0;
}
