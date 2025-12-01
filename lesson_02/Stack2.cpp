#include "Stack2.h"

Stack::Stack()
{
}

Stack::~Stack()
{
}

void Stack::Push(int newData)
{
    stack.Append(newData);
}

void Stack::Pop()
{
    if(stack.GetHead() != nullptr)
    {
        //stack.Remove();
        stack.Remove();
    }
}

int Stack::Top()
{
    if(isEmpty())
    {
        throw std::out_of_range("Array index out of bounds");
    }
    int number = (stack.GetTail())->number;
    return number;
}

bool Stack::isEmpty()
{
    // return topIndex < 0;
    return stack.GetSize() <= 0;
}