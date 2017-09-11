//
//  singleton.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/10.
//  Copyright © 2017年 bean. All rights reserved.
//

#include <iostream>
#include "singleton.h"

using namespace::std;

Singleton *Singleton::instance=NULL;

Singleton::Singleton(){
    cout<<"Singleton instance "<<endl;
}

Singleton::~Singleton(){

}
Singleton *Singleton::getInstance(){

    Singleton *ret=instance;
    if (instance==NULL) {
        instance=new Singleton();
        ret=instance;
    }
    
    return ret;
    
}

void Singleton::doSomething(){
    cout<<__func__ <<"," <<__LINE__ <<endl;

}
void Singleton::destroy(){
    delete this;
    instance=NULL;
}
