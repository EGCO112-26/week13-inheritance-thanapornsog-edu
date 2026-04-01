#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class NODE {
protected:
    long data;   
    NODE* next;
public:
    NODE(long d = 0) { 
        data = d; 
        next = NULL; 
    }
    virtual ~NODE() {
        cout << "Node " << data << " is being deleted" << endl;
    } 
    
    virtual void display() { 
        cout << " Node data:" << data << endl; 
    }
    
    void set_next(NODE* n) { next = n; }
    NODE* get_next() { return next; }
};
#endif