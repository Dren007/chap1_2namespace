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
/*class Car{
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
*/
//8.类和对象2
#include "car.h"


//7、函数模板
#include "student.h"

void fooCar(Car *pcar){//指针
    pcar->print();
    pcar->stop();
}

void barCar(Car& rcar){//引用
    rcar.print();
    rcar.stop();
}

//12、构造和析构函数
#include "student.h"
void funS(Student stu){


}

//13、标准库类型string
#include <string>


//14、static类成员
#include "martain.h"
void funM(){
    Martain mc;
    int count=Martain::getCount();
    cout<<"count = "<<count<<endl;
    
}


//14、动态内存分配
class Test{
public:
    Test()
    :m_val(0)
    {
        cout<<"Test"<<endl;
    }
    ~Test(){
        cout<<"~Test"<<endl;
    }
private:
    int m_val;
};

//15、动态内存分配


//17、拷贝构造函数
#include "student1.h"
void fooS1(Student1 st1){
    cout<<"In fun "<<__func__<<endl;
}
Student1 barS1(){
    Student1 tom("Tom",112);
    
    return tom;
}

//18、拷贝构造函数--浅、深拷贝
#include "person.h"

//19、constr 关键字

//20、友元函数 友元类
class X;

class Y{
public:
    void f(X* );
    //void b(X);
private:
    X* pX;
};

//void Y::b(X as){
//
//}

class X{
public:
    void initialize();
    friend void g(X*,int);
    friend void Y::f(X *);
    friend class Z;
    friend void h();
    
private:
    int i;
    
};

void X::initialize(){
    i=0;
}

void g(X* x,int i){
    x->i=i;
}
void Y::f(X * x){
    x->i=47;
}

class Z{
public:
    void initialize();
    void g(X* x);
    
private:
    int j;
};

void Z::initialize(){
    j=99;
}
void Z::g(X *x){
    x->i+=j;
   
}

void h(){
    //X.i=100;
}


//21、单例模式
#include "singleton.h"

//22、运算重载
#include "rmb.h"


//25、自增运算重载
#include "increase.h"

//26、String运算重载
#include "iotekString.h"
using namespace::iotek;

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
    Car ca(1000,89838);
    cout<<sizeof(ca)<<endl;
    /*ca.setProperty(10000, 101021);
    ca.run();
    ca.stop();
    
    cout <<"/////////////////////////\n//类、对象-2 this指针\n/////////////////////////\n"<<endl;
    cout<<"the address of ca is:"<<&ca<<endl;
    ca.print();
    
    cout <<"/////////////////////////\n//类、对象-2 指针函数\n/////////////////////////\n"<<endl;
    fooCar(&ca);
    
    cout <<"/////////////////////////\n//类、对象-2 引用函数\n/////////////////////////\n"<<endl;
    barCar(ca);
    */
    cout <<"/////////////////////////\n//构造函数\n/////////////////////////\n"<<endl;
    ca.print();
    
     cout <<"/////////////////////////\n//析构函数\n/////////////////////////\n"<<endl;
    Student stu(1000);
    funS(stu);
    //funS(10002);
    
    
    
    cout <<"/////////////////////////\n//标准库类型string\n/////////////////////////\n"<<endl;
    string sta("C++");
    string stb(sta);
    string stc(4,'r');
    cout<<"a="<<sta<<" b="<<stb<<" c="<<stc<<endl;
    string std;
    std=sta;
    if (std.empty()) {
        cout<<"string std is empty! "<<endl;
    }else
        cout<<"sting std's size is:"<<std.size()<<endl;
    
    
    cout <<"/////////////////////////\n//static类成员\n/////////////////////////\n"<<endl;
    int count=Martain::getCount();
    cout<<"count = "<<count<<endl;
    
    Martain ma;
    count=Martain::getCount();
    cout<<"count = "<<count<<endl;
    
    Martain mb;
    count=Martain::getCount();
    cout<<"count = "<<count<<endl;
    
    funM();
    
    cout <<"/////////////////////////\n//动态内存分配\n/////////////////////////\n"<<endl;
    {
    Test t;
    }
    cout<<"end of }"<<endl;
    
    Test *pVal=new Test();
    delete pVal;
    pVal=NULL;
    
    int *p=(int *)malloc(sizeof(int));
    free(p);
    p=NULL;
    
    Test *pArray=new Test[2];
    delete [] pArray;
    //delete pArray;
    pArray=NULL;
    
    
    cout <<"/////////////////////////\n//拷贝构造函数\n/////////////////////////\n"<<endl;
    cout<<"Enter main---->"<<endl;
    Student1 joe("joe",87);
    
    cout<<"Calling fooS1"<<endl;
    fooS1(joe);
    cout<<"After call of fooS1"<<endl;
    
    
    cout <<"/////////////////////////\n//拷贝构造函数--浅、深拷贝\n/////////////////////////\n"<<endl;
    
    Person pe("peter");
    Person pe3("Tom");
    Person pe2=pe;
    pe.Print();
    pe2.Print();
    
    pe2=pe3;
    
    
    cout <<"/////////////////////////\n//友元函数、友元类?\n/////////////////////////\n"<<endl;
    class X x;
    Z z;
    z.g(&x);
    
    
    cout <<"/////////////////////////\n//单例模式\n/////////////////////////\n"<<endl;
    
    Singleton::getInstance()->doSomething();
    
    cout <<"/////////////////////////\n//运算重载\n/////////////////////////\n"<<endl;
    RMB val1(2,50);
    RMB val2(2,48);
    if (val1>val2) {
        cout<<"val1 is more than val2 "<<endl;
    }
    
    val1=val1+val2;
    val1.display();
    
    cout <<"/////////////////////////\n//前、后增量\n/////////////////////////\n"<<endl;
    int fx=0;
    int fy=0;
    for (int j=0; j<10; j++) {
        fx=fx++;
        cout<<" fx="<<fx<<endl;
        
        fy=++fy;
        cout<<" fy="<<fy<<endl;
    }
    cout<<"fx="<<fx<<",fy="<<fy<<endl;
    
    
    cout <<"/////////////////////////\n//增量运算重载\n/////////////////////////\n"<<endl;
    Increase inc(100);
    Increase inc2=++inc;
    cout<<inc2.getVal() <<endl;
    cout<<inc.getVal() <<endl;
    cout<<endl;
    
    Increase inc3=inc++;
    cout<<inc3.getVal() <<endl;
    cout<<inc.getVal() <<endl;
    cout<<endl;
    
    
    cout <<"/////////////////////////\n//String类运算重载\n/////////////////////////\n"<<endl;
    
    String s10("hello");
    
    String s02=s10;
    String s30="wold";
    
    s30=s10;
    s30="world";
    
    s10+=s30;
    
    cout<<"s10="<<s10.data()<<endl;
    cout<<"s30="<<s30.data()<<endl;
    
    return 0;
}


