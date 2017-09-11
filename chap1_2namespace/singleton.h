//
//  singleton.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/10.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef singleton_h
#define singleton_h

class Singleton{
    
public:
    static Singleton *getInstance();
    
    void doSomething();
    void destroy();
private:
    Singleton();
    ~Singleton();
    
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
    
    static Singleton *instance;
    
};

#endif /* singleton_h */
