#include <iostream>
#include "Stack2.h"

using namespace std;

int main()
{
    Stack numberStack;
    for(int i = 0; i < 20; i++)
    {
        numberStack.Push(i);
    }

    while(!numberStack.isEmpty())
    {
        int topNum = numberStack.Top();
        cout << topNum << endl;
        numberStack.Pop();
    }
    cout << "Bye bye!" << endl;
    return 0;
}