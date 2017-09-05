//
//  car.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/5.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef car_h
#define car_h
class Car{
public:
    void run();
    void stop();
    void setProperty(int price,int carNum);
    void print();
private:
    int m_price;
    int m_carNum;
};


#endif /* car_h */
