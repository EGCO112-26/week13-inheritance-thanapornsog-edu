#ifndef THAI_PERSON_H
#define THAI_PERSON_H
#include <iostream>
using namespace std;

class Thai_person {
protected:
    long nat_id;
public:
    Thai_person(long nid = 1010101) { 
        nat_id = nid; 
    }
    ~Thai_person() {}
    void display_thai() { 
        cout << "Nat ID: " << nat_id << endl; 
    }
};
#endif