//
//  animal.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/18.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef animal_h
#define animal_h

namespace  iotek_an {
    
    class Animal{
    public:
        Animal(int age);
        ~Animal();
        
        void setAge(int age);
        int getAge() const;
        
    private:
        int m_age;
        
    };
    
    
    class Cat:public Animal{
    public:
        Cat(int age, int color);
        ~Cat();
        
        void setColor(int color);
        int getColor() const;
        
    private:
        int m_color;
    
    };
    
    
    class Dog:public Animal{
    public:
        Dog(int age, int weight);
        ~Dog();
    
        void setWeight(int weight);
        int getWeight() const;
    private:
        int m_weight;
    };
}


#endif /* animal_h */
