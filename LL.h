#ifndef LL_H
#define LL_H
#include "NODE.h"

class LL{
private:
    NODE* hol;
    int size;
public:
    LL();
    ~LL();
    void add_node(NODE*&);
    void show_all();
};
#endif