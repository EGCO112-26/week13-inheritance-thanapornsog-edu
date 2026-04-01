#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "MU_Person.h" 

using namespace std;

class student : public MU_person {
private:
    double gpa; 
public:
    student(long i = 111, double g = 2.5, string s = "Nattawut", long nid = 1010101) 
        : MU_person(i, s, nid) {
        gpa = g;     
        cout << "MU student constructor  " << gpa << endl;
    }
    virtual ~student() {}
};
#endif