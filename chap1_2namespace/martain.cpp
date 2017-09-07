//
//  Martain.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/6.
//  Copyright © 2017年 bean. All rights reserved.
//
#include <iostream>
#include "martain.h"
using namespace::std;

int Martain::martainCount=0;

Martain::Martain(){
    martainCount++;
}

Martain::~Martain(){
    martainCount--;
}


int Martain::getCount(){
    return martainCount;
}

void Martain::fight(){

}

void Martain::hide(){

}
