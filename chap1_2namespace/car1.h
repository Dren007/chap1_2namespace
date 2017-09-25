//
//  car1.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/19.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef car1_h
#define car1_h

#include <iostream>
using namespace::std;

namespace iotek_car {
    class Engine{
    public:
        Engine(int id)
        :m_id(id){
        
        }
        ~Engine();
        
        void start(){
            cout<<"engine start\n "<<endl;
        }
        void stop(){
            cout<<"engine stop\n"<<endl;
            
        }
        
    private:
        int m_id;
    
    };
    
    class Wheel{
    public:
        Wheel(int id){
            cout<<"wheel construting"<<endl;
        }
        ~Whell();
        
        void roll(){
            cout<<"wheel rolling"<<endl;
        }
        
    private:
        int m_id;
    
    };
    
    
    class Car{
    public:
        
    private:
        Car(const Car&);
        Car& operator=(const Car&);
        
        Engine *engine;
        Wheel *wheel;
    
    };
}


#endif /* car1_h */
