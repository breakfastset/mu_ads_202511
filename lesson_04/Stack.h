#ifndef STACK_H
#define STACK_H
#include <stdexcept>

const int STACK_SIZE = 10;

template <class T>
class Stack
{
public:
    Stack();
    ~Stack();  // do nothing
    void Push(T newData);
    void Pop();
    T Top();
    bool isEmpty();

private:
    T stack[STACK_SIZE];
    int topIndex;
};

template <class T>
Stack<T>::Stack()
{
    topIndex = -1;   // to indicate the stack is empty
}

template <class T>
Stack<T>::~Stack()
{
    // do nothing as there is no pointer data
}

template <class T>
void Stack<T>::Push(T newData)
{
    if(topIndex < STACK_SIZE - 1)
    {
        topIndex++;
        stack[topIndex] = newData;
    }
}

template <class T>
void Stack<T>::Pop()
{
    if(!isEmpty())
    {
        topIndex--;
    }
}

template <class T>
T Stack<T>::Top()
{
    if(isEmpty())
    {
        throw std::out_of_range("Array index out of bounds");
    }
    return stack[topIndex];
}

template <class T>
bool Stack<T>::isEmpty()
{
    return topIndex < 0;
}
#endif