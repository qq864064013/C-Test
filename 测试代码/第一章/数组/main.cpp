//
//  main.cpp
//  数组
//
//  Created by 谭生正 on 2017/5/31.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    using namespace std;
    
    const unsigned int sz = 5;
    
    int a1[sz] = {1,2,4,5,4};
    int a2[sz] = {1,2,4};  //等价于{1,2,4,0,0};
    string a3[sz] = {"a"}; // 等价于{“a”,"","","",""};
    char a4[sz] = {'a','b','c','d','\0'}; // 最后一个必然是空字符  a b c d e  就会出错  后面没有地方放空字符
    
    //数组不允许用一个数组 =  另一个数组 这样子去初始化；
    int  (*ap)[sz] = &a1;
    
    
    
    
    
    
    int array1[3] = {1,6,7};
    int (*p)[3] = &array1;  //*p 是array1 这个数组的指针
    int *pa = array1;       //*pa 是指向 array1数组 第一个元素的指针（等价于 int* pa = array1[0]）  *p == 1(第一个元素)  *(p+1) == 6（第二个元素）
    auto array1_count = end(array1) - begin(array1); //最后一个元素地址 - 首元素地址  =  数组长度
    cout<<"类型信息:"<<typeid(array1_count).name()<<"  长度:"<<array1_count<<endl;
    
    
    cout<<p<<endl;
    cout<<pa<<endl;     //二个变量地址是一致的 但是他们的类型是不一样的,  pa int型指针 , p  int型数组指针
    cout<<*p<<endl<<*pa<<endl; //输出   0x7fff5fbff640  1  一个是地址，一个是第一个元素1
    
    cout<<++p<<endl<<++pa<<endl; // ++p是数组array1整块地址+1等于下一个数组首地址  ++pa是array第一个元素+1等于下一个元素地址
    
    
    
    
    //二维数组
    
    int ktm[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; //三行4列
    //int ktm[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}  和上面是一样的
    //ktm[1][2] == 7;   //第二列 第三个数等于 7；
    int (&ktm_o)[4] = ktm[2];   // ktm_o 等于 是ktm 的第三行的 数组{9,10,11,12}
    int (*pkm)[3][4] = &ktm; //pkm  是整个 ktm【3】【4】 这整块地址的首地址
    int (*pkm2)[4] = &ktm[0]; // pkm2 是 第三行数组 的首地址
    
    cout<<(*(++pkm2))[2]<<endl;

    cout<<pkm<<endl<<pkm2<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
    
    return 0;
}
