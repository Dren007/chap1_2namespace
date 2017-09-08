//
//  student1.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/7.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef student1_h
#define student1_h
////拷贝构造函数
class Student1{
public:
    explicit Student1(const char *pName="NA",int sid=0);
    ~Student1();
    
    Student1(const Student1& s);
    void print();
    
private:
    char name[40];
    int m_id;
    
};


#endif /* student1_h */
