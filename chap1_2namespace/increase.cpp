//
//  increase.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/11.
//  Copyright © 2017年 bean. All rights reserved.
//

#include "increase.h"

Increase::Increase(int val)
        :m_val(val){
            
    
}

Increase::~Increase(){

}

Increase& Increase::operator++(){
    ++m_val;
    return *this;
}

Increase Increase::operator++(int){
    Increase ret(m_val);
    ++m_val;
    
    return ret;

}
