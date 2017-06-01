//
//  main.cpp
//  变量
//
//  Created by 谭生正 on 2017/5/25.
//  Copyright © 2017年 谭生正. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    
    
    /*
    
    int a;
    int b, c;
    int *p;
     
    p = new int;  //为了能输入指针类型  p 必须得初始化一个内存地址   否则不能 std::cin>> *p;
    
    std::cout<<"";
    std::cin>> a;
    std::cin>> b;
    std::cin>> c;
    std::cin>> *p;
    std::cout<<a+b+c<<"后缀";
    std::cout << "Hello, World!\n"
    std::cout << *p <<std::endl;
    std::cout<<p ;

    */
    
    const int anf = 233;
    //int *kp = &anf;  // 不能这么搞 anf 是常亮 任何尝试修改anf值得操作的都是不被允许的
    
    
    
    
    
    
//    别名
    
    
    int ct = 9;
    int &ck = ct;   //ck 是ct  的别名
    //int &ckk = 9;  //这样子不行 为什么不行下面有解释
    std::cout<< ck; //输出 9
    
    
    
    int uk = 42;
    const int &r1 = uk; //允许将const int & 绑定到一个普通的int 对象上
    const int &r2 = 42; //正确  r1是一个常量引用
    /*
     
     为什么上面int &ckk = 9 ; 不行  而
     const int &r2 = 42 ; 又可以
     因为  int &r2 = 42 的时候 编译器做了如下操作
     const int temp = 42;
     const int &r2 = temp;
     实际上 r2  是临时常量 temp 的别名
     所以 int &ckk = 9 不行 是因为
     const int temp = 9
     int &ckk = temp     ckk 是一个变量的别名 而 temp 一定是个常量 所以  会有错误
     */

    
    
    
    
    const int &r3 = r1*2; //正确  r3是一个常量引用   常量*2 还是常量
    //int &r4 = r1 * 2; //错误 r4 是一个普通常量 引用
    
    
    
    
    
    int cq = 7;
    const int cqa = cq; // 一旦初始化了 就不会再改变  实际上 是copy 了 7 这个值
    const int &cqb = cq; //这里有点特别 cq++ 这个常量的值居然被改变了
    cq++;
    std::cout<<"\n看看常量是多少:cqa:"<<cqa<<"  cqb:"<<cqb<<std::endl;
    
    
    
    
    //指针常量
    const double pi = 3.14;
    //double * pi_Ptr = &pi;  //错误 如果这样定义 可以通过pi_Ptr 改变了常量的值
    double pi_2 = 3.14;
    const double* pi_2_ptr = &pi_2; // 常量指针可以指向一个变量地址
    //*pi_2_ptr = 3.15  通过常量指针 修改 pi_2 的值是不被允许的
    //但是不能 保证pi_2_prt 指向的pi 不能不被其他方式修改
    pi_2  = 3.15;
    std::cout<<*pi_2_ptr;  // 输出  3.15
    
    
    
    
    
    int ctk = 9;
    int ctn = 8;
    const int *const_ctk = &ctk; // 变量的值不能 通过*const_ctk 改变
    //*const_ctk = 5; // 变量的值不能 通过*const_ctk 改变
    const_ctk = &ctn; //但是const_ctk 指向的值是可以变得
    std::cout<<*const_ctk;
    const int *const const_ctkk = &ctk; //变量的值 和指针指向的地址都不能通过const_ctkk去改变变
    //*const_ctkk = 5; // 变量的值不能 通过*const_ctkk 改变
    //const_ctkk = &ctn; //const_ctkk 指向的地址也不能被改变

    

    
    
    //auto  自动识别类型
    
    
    int kdt = 9;
    auto kdf = kdt;   //自动识别 kdf  为 int 类型
    
    
    const int ij =3;
    auto jf = ij;    //这里 auto  推断 ij 为 int 类型  忽略掉了 const  这是auto 的特性 会忽略上层 const
    const auto jff = ij; //这样才能保证和ij 类型一至
    //jff = 9;
    //cout<<"这里注意"<<jff;
    
    //cout<< if << " " << jf <<endl;   //输出 3  3
    //jf++;
    //cout<< if << " " << jf << endl;  //输出 3  4
    
    
    
    return 0;
}
