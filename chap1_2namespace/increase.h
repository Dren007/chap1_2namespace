//
//  increase.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/11.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef increase_h
#define increase_h
class Increase{

public:
    Increase(int val);
    ~Increase();
    
    Increase& operator++();  //prefix
    Increase operator++(int ); // postfix
    
    int getVal() const{
    
        return m_val;
    }
    
private:
    
    int m_val;
};

#endif /* increase_h */
