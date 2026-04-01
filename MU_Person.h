#ifndef MU_PERSON_H
#define MU_PERSON_H
#include <iostream>
#include <string>
#include "Thai_person.h" 
#include "NODE.h"

using namespace std;

class MU_person : public Thai_person, public NODE {
protected:
    string name;

public:
    MU_person(long x = 112, string n = "Prapaporn", long nid = 1010101) 
        : Thai_person(nid), NODE(x) {
        name = n;
        
        cout << "MU person constructor " << data << endl;
    }
    
    virtual ~MU_person() {}
};
#endif