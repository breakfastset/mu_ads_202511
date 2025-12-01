#include "Stack.h"

Stack::Stack()
{
    topIndex = -1;   // to indicate the stack is empty
}

Stack::~Stack()
{
    // do nothing as there is no pointer data
}

void Stack::Push(int newData)
{
    if(topIndex < STACK_SIZE - 1)
    {
        topIndex++;
        stack[topIndex] = newData;
    }
}

void Stack::Pop()
{
    if(!isEmpty())
    {
        topIndex--;
    }
}

int Stack::Top()
{
    if(isEmpty())
    {
        throw std::out_of_range("Array index out of bounds");
    }
    return stack[topIndex];
}

bool Stack::isEmpty()
{
    return topIndex < 0;
}