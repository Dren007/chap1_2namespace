//
//  animal.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/18.
//  Copyright © 2017年 bean. All rights reserved.
//

#include "animal.h"
#include <iostream>
using namespace::std;


namespace iotek_an {
    Animal::Animal(int age)
        :m_age(age){
        cout<<"Animal constructing "<<endl;
    }
    
    Animal::~Animal(){
        cout<<"Animal destructing"<<endl;
    }
    
    void Animal::setAge(int age){
        m_age=age;
    }
    
    int Animal::getAge() const{
        return m_age;
    }
    
    
    Cat::Cat(int age, int color)
    :Animal(age),m_color(color){
        cout<<"Cat constructing "<<endl;
    }
    Cat::~Cat(){
        cout<<"Cat destructing "<<endl;
    }
    void Cat::setColor(int color){
        m_color=color;
    }
    int Cat::getColor() const{
        return m_color;
    }
    
    Dog::Dog(int age,int weight)
    :Animal(age),m_weight(weight){
        cout<<"Dog constructing"<<endl;
    }
    Dog::~Dog(){
        cout<<"Dog destructing"<<endl;
    }
    void Dog::setWeight(int weight){
        m_weight=weight;
    }
    int Dog::getWeight() const{
        return m_weight;
    }
}
