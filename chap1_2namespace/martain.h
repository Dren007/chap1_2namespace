//
//  Martain.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/6.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef Martain_h
#define Martain_h
class Martain{
public:
    Martain();
    ~Martain();
    
    void fight();
    void hide();
    static int getCount();
private:
    static int martainCount; //类的静态成员
    int m_bloodValue;
};

#endif /* Martain_h */
