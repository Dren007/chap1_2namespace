//
//  furniture.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/19.
//  Copyright © 2017年 bean. All rights reserved.
//

#include "furniture.h"
using namespace::std;

Sofa::Sofa(int weight)
    :m_weight(weight){
    cout<<"sofa constructing"<<endl;
}

Bed::Bed(int  weight)
    :m_weight(weight){
    cout<<"bed constructing"<<endl;
}

SofaBed::SofaBed(){
    cout<<"sofabed constructing"<<endl;
}
