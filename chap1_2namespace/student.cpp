//
//  student.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/5.
//  Copyright © 2017年 bean. All rights reserved.
//
#include <iostream>
#include "student.h"

using namespace::std;

Student::Student(int id)
:m_id(id),m_score(0)
{
//    m_id=id;
//    m_score=0;
    cout<<"Student consturctor"<<endl;
}

Student::~Student(){

    cout<<"Student desturctor"<<endl;
}
