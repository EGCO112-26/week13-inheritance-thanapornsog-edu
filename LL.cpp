#include <iostream>
#include "LL.h"
using namespace std;

LL::LL() {
    hol = NULL;
    size = 0;
}

LL::~LL() {
    NODE* t = hol;
    while (t != NULL) {
        NODE* next_node = t->get_next();
        delete t; 
        t = next_node;
    }
}

void LL::add_node(NODE *&A) {
    A->set_next(hol);
    hol = A;
    size++;
}

void LL::show_all() {
    NODE* t = hol;
    for (int i = 0; i < size; i++) {
        t->display(); 
        t = t->get_next();
    }
}