//
//  main.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/1.
//  Copyright © 2017年 bean. All rights reserved.
//

#include <iostream>
#include "func.c"


using namespace::std;

namespace one {
    int M=200;
    int inf=10;
}

namespace two {
    int X;
    int inf=100;
}

//3、引用、指针
void foo(int val){
    val=10;
}

void bar(int& val){
    val =10;
}

void zoo(int* pval){
    *pval=10;
}

//4、内联函数
#include <stdio.h>
inline bool isnumber(char ch){
    return (ch>='0'&&ch<='9')?true:false;
}
//4、内联函数 宏定义
#define MAX(a,b) ((a)>(b))?(a):(b)
#define square(x) ((x)*(x))
inline int max(int a, int b){
    return a>b?a:b;
}

//7、函数模板
template <typename T>
T abs(T x){
    return x<0?-x:x;
}


//8、类和对象
class Car{
public:
    void run(){
        cout<<"Car run"<<endl;
    }
    
    void stop(){
        cout<<"Car stop"<<endl;
    }
    void setProperty(int price,int carNum){
        m_price=price;
        m_carNum=carNum;
    }
private:
    int m_price;
    int m_carNum;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    using two::X;
    cout<<X<<endl;
    X=-100;
    
    one::inf *=1;
    
    cout<<one::inf<<endl;
    cout<<one::M<<endl;
    
    two::inf*=2;
    cout<<two::inf<<endl;
    cout<<X<<endl;
    
    
    std::cout << "Hello, World!\n";
    
    
    cout <<"/////////////////////////\n//引用，应用参数 \n/////////////////////////\n"<<endl;
    
    int intone=0;
    int& r_int_one=intone;
    intone=5;
    
    cout<<intone<<endl;
    cout<<r_int_one<<endl;
    
    r_int_one=7;
    
    cout<<intone<<endl;
    cout<<r_int_one<<endl;
    
    cout<<&(intone)<<endl;
    cout<<&(r_int_one)<<endl;
    
    cout <<"/////////////////////////\n//引用，指针 \n/////////////////////////\n"<<endl;
    
    int a =1;
    int b =1;
    int c =1;
    foo(a);
    bar(b);
    zoo(&c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    
    cout <<"/////////////////////////\n//内联函数 \n/////////////////////////\n"<<endl;
    char d;
    while ((d= cin.get())!='q') {
        if (isnumber(d)) {
            cout<<"You enter a digit"<<endl;
        }else
            cout<<"You enter a non-digit"<<endl;
    }
    
    cout <<"/////////////////////////\n//宏定义 \n/////////////////////////\n"<<endl;
    a=55,b=4;
    int e=square(2+3);
    cout<<e<<endl;
    c=max(a++,b);
    cout<<c<<endl;

    cout <<"/////////////////////////\n//函数重载 \n/////////////////////////\n"<<endl;
    char ch='0';
    int val =0;
    foo(ch, val);
    printf("SSSSSSSSS\n");
    
    cout <<"/////////////////////////\n//模板函数 -绝对值\n/////////////////////////\n"<<endl;
    int n=-5;
    double m=-5.5;
    cout<<abs(n)<<endl;
    cout<<abs(m)<<endl;
    
    cout <<"/////////////////////////\n//类、对象-2\n/////////////////////////\n"<<endl;
    Car ca;
    cout<<sizeof(ca)<<endl;
    ca.setProperty(10000, 101021);
    ca.run();
    ca.stop();
    
    return 0;
}


