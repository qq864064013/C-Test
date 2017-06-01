//
//  main.cpp
//  指针
//
//  Created by 谭生正 on 2017/5/26.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#include <iostream>


using namespace std;
int main(int argc, const char * argv[]) {
   
    
    int a = 8;
    int *p = &a;
    int **pp = &p;
    

    //pp 是个指针的指针 他指向的值 是 指针p的地址

    cout<<"  &a:"<<&a<<"    p:"<<p <<"  *pp: "<<*pp; //都是指向a 的地址
    cout<<"  *p:"<<*p<<"    **p:"<<**pp<<endl; //得到的值都是 8
    
    return 0;
}
