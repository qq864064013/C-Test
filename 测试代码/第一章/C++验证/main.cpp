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
    
    
    int x[10]; int *p = x;
    
    cout<<sizeof(x)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    
    
    return 0;
}
