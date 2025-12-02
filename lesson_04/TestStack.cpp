#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;
int main()
{
    Stack<int>numbers;
    numbers.Push(10);
    numbers.Push(20);
    numbers.Push(30);

    Stack<string>names;
    names.Push("Abel");
    names.Push("Baby");
    names.Push("Catana");

    while(!names.isEmpty())
    {
        cout << names.Top() << endl;
        names.Pop();
    }

    return 0;
}