#ifndef STACK_H
#define STACK_H
#include <stdexcept>

const int STACK_SIZE = 10;

class Stack
{
public:
    Stack();
    ~Stack();  // do nothing
    void Push(int newData);
    void Pop();
    int Top();
    bool isEmpty();

private:
    int stack[STACK_SIZE];
    int topIndex;
};

#endif