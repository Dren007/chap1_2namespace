//
//  person.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/8.
//  Copyright © 2017年 bean. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace::std;

#include "person.h"

Person::Person(char *pN){
    if (pN!=NULL) {
        cout<<"Constructoring "<<pN<<endl;
        int len=(int)strlen(pN)+1;
        name=new char[len];
        cout<<"name= "<<static_cast<void *>(name )<<endl;
        
        memset(name, 0, len);
        strcpy(name, pN);
    }else
        name=NULL;
}

Person::~Person(){
    cout<<"\n\nDesstructoring Person ~~ "<<endl;
    if (name!=NULL) {
        Print();
        delete []name;
        name=NULL;
    }
}

Person::Person(const Person &p){//拷贝构造函数
    cout<<"Copy constructor of Person "<<endl;
    if (p.name!=NULL) {
        int len=(int)strlen(p.name)+1;
        name=new char[len];
        cout<<"name= "<<static_cast<void *>(name)<<endl;
        memset(name, 0, len);
        strcpy(name, p.name);
        
    }else
        name=NULL;
}

Person& Person::operator=(const Person &other){
    cout<<"Operator "<<endl;
    if (&other==this) {
        return *this;
    }
    
    if (name!=NULL) {
        delete []name;
        name=NULL;
    }
    
    if (other.name!=NULL) {
        int len=(int)strlen(other.name)+1;
        name=new char[len];
        memset(name, 0, len);
        strcpy(name, other.name);
    }else{
        name=NULL;
    }
    
    return *this;
        
}

void Person::Print(){
    cout<<"pName= "<<static_cast<void *>(name)<<endl;
}
