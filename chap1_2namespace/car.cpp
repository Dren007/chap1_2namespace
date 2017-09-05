//
//  car.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/5.
//  Copyright © 2017年 bean. All rights reserved.
//
#include <iostream>
using namespace::std;

#include "car.h"

void Car::run(){
    cout<<"Car run"<<endl;
}

void Car::stop(){
    cout<<"Car stop"<<endl;
}

void Car::setProperty(int price, int carNum){
    //m_price=price;
    //m_carNum=carNum;
    this->m_price=price;
    this->m_carNum=carNum;
}

void Car::print(){
    cout<<" in "<<__func__<<" this="<<this<<endl;
}
