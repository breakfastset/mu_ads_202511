#ifndef STACK_H
#define STACK_H
#include <stdexcept>
#include "LinkedList.h"

class Stack
{
public:
    Stack();
    ~Stack(); 
    void Push(int newData);
    void Pop();
    int Top();
    bool isEmpty();

private:
    LinkedList stack;
};

#endif