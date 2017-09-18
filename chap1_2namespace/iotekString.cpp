//
//  iotekString.cpp
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/11.
//  Copyright © 2017年 bean. All rights reserved.
//

#include "iotekString.h"

#include <iostream>
using namespace::std;
using namespace::iotek;

String::String(const char* str){
    if (NULL==str) {
        m_data=new char[1];
        *m_data='\0';
    }else{
        int length=strlen(str);
        m_data=new char[length+1];
        strcpy(m_data,str);
    
    }
    
}

String::~String(){
    delete[] m_data;
    
}

String::String(const String& other){
    int length=strlen(other.m_data);
    m_data=new char[length+1];
    strcpy(m_data,other.m_data);
}
String &String::operator=(const String& other){
    if (this==&other) {
        return  *this;
    }
    delete []m_data;
    
    int length=strlen(other.m_data);
    m_data=new char[length+1];
    strcpy(m_data,other.m_data);
    
    return *this;
}


String& String::operator=(const char* other){
    delete[] m_data;
    if (other ==NULL) {
        m_data=new char[1];
        *m_data='\0';
        
    }else{
        int length=strlen(other);
        m_data=new char[length+1];
        strcpy(m_data,other);
    
    }
    
    return *this;
}

String& String::operator+=(const String & other){
    char *tmp=m_data;
    int length=(int)(strlen(m_data)+strlen(other.m_data));
    
    m_data=new char[length+1];
    strcpy(m_data, tmp);
    strcpy(m_data, other.m_data);
    
    delete [] tmp;
    
    return *this;
    
}

String String::operator+(const String& other)const{
    String relust;
    relust += *this;
    relust += other;
    
    return relust;
}

String& String::operator+=(const char *other){
    String tmp(other);
    *this+=tmp;
   
    return  *this;

}

String String::operator+(const char* other) const{
    String relust=*this;
    relust+=other;
    
    return  relust;
}
