// Author: 王勇 
// Time: 2019-12-08
// Description: This is

#ifndef C_LEARN_STUDENT_H
#define C_LEARN_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    int score;
    bool operator<(const Student &otherStudent){
        return score<otherStudent.score;
    }

    friend ostream& operator<<(ostream &os, const Student &student){
        os<<"Student:"<<student.name<<" "<<student.score<<endl;
        return os;
    }
};



#endif //C_LEARN_STUDENT_H
