//
//  student1.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/7.
//  Copyright © 2017年 bean. All rights reserved.
//

#include <iostream>
using namespace::std;

#include "student1.h"
#include <cstring>

Student1::Student1(const char *pName,int sId)
    :m_id(sId)
        
{
    memset(name, 0, 40);
    if (pName!=NULL) {
        int len=strlen(pName);
        len=(len>39)?39:len;
        strncpy(name, pName,len);
    }
    cout<<"constructor of student: "<<name<<endl;
}

Student1::~Student1(){
    cout<<"destructor of student: "<<name<<endl;
    
}

void Student1::print(){
    cout<<"student: "<<name<<endl;
}

Student1::Student1(const Student1& s){
    cout<<"constructoring copy ! &S=: "<<&s<<endl;
    strcpy(name, "copy");
    strcat(name, s.name);
    m_id=s.m_id;
}
