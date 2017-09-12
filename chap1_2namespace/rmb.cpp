//
//  rmb.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/11.
//  Copyright © 2017年 bean. All rights reserved.
//

#include <iostream>

#include "rmb.h"

RMB operator+(const RMB& val1, const RMB& val2){
    
    uint jf=val1.jf+val2.jf;
    uint yuan=val1.yuan+val2.yuan;
    
    if (jf>=100) {
        ++yuan;
        jf-=100;
    }
    
    return RMB(yuan,jf);

}

bool operator>(const RMB& val1, const RMB& val2){
    bool ret=false;
    if (val1.yuan>val2.yuan) {
        ret=true;
    }else if(val1.yuan==val2.yuan){
        if (val1.jf>val2.jf) {
            ret=true;
        }
    
    }
    
    
    return ret;
}

RMB::RMB(uint y,uint val)
    :yuan(y),jf(val){

}


RMB::~RMB(){

}
