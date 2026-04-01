#include <iostream>
#include <cstdlib>
#include "NODE.h"
#include "LL.h"
#include "student.h"

using namespace std;

int main(int argc, char *argv[]) {
    LL A;
    int i;
    NODE *t;

    for (i = 1; i < argc; i += 3) {
        if (i + 1 < argc) { 
            long id = atol(argv[i]);
            double gpa = atof(argv[i+1]);
            string name = (i + 2 < argc) ? argv[i+2] : "Unknown";

            cout << "adding " << id << endl;
            
            t = new student(id, gpa, name);
            A.add_node(t);
        }
    }

    cout << endl; 
    A.show_all(); 
    cout << endl; 
    
    return 0;
}