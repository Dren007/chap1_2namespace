//
//  rmb.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/11.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef rmb_h
#define rmb_h

typedef unsigned int uint;

#include <iostream>
using namespace::std;

class RMB{
    friend RMB operator+(const RMB&,const RMB&);
    friend bool operator>(const RMB&,const RMB&);

public:
    RMB(uint y,uint jf);
    ~RMB();
    
    void display() const{
        cout<<"RMB: "<<yuan<<".";
        if (jf<10) {
            cout<<"0";
        }
        cout<<jf<<endl;
    }
    
private:
    uint yuan;
    uint jf;
};

#endif /* rmb_h */
