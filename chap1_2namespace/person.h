//
//  person.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/8.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef person_h
#define person_h
class Person{
public:
    Person(char *pName);
    ~Person();
    
    Person(const Person &s);
    Person &operator=(const Person &other);
    void Print();
private:
    char *name;
};

#endif /* person_h */
