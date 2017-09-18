//
//  iotekString.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/11.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef iotekString_h
#define iotekString_h
#include <stdio.h>
namespace iotek {
    class String{
    public:
        String(const char* =NULL);
        ~String();
        
        String(const String&);
        
        String& operator=(const String&); //String a; a=b;
        String& operator=(const char*);   //Stirng a; a="hello world"
        
        String& operator+=(const String&); //＋的引用
        String operator+(const String&) const;
        
        String& operator+=(const char *); //＋的引用
        String operator+(const char *) const;
        
        inline const char* data() const{
        
            return m_data;
        }
    private:
        char *m_data;
    };
}

#endif /* iotekString_h */
