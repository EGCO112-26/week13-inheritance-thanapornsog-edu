#include <iostream>
#include "student.h"

using namespace std;

int main() {
    MU_person m;
    m.display_person();
    
    cout << "\n------" << endl;
    student m1(6613121, 2.0, "Vivi",2345);
    student m2(6813245);
    student m3;
    
    m1.display(); 
    m1.display_person();
    cout << "\n=======" << endl;
    
    return 0;
}