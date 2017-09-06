//
//  student.h
//  chap1_2namespace
//
//  Created by Forexroo on 2017/9/5.
//  Copyright © 2017年 bean. All rights reserved.
//

#ifndef student_h
#define student_h
class Student{
public:
    explicit Student(int id=0);
    ~Student();
    inline int getId(){
        return m_id;
    }
    void setId(int id){
        m_id=id;
    }
    
    int getScore(){
        return m_score;
    }
    void setScore(int score){
        m_score=score;
    }
    
    
private:
    int m_id;
    int m_score;

};

#endif /* student_h */
