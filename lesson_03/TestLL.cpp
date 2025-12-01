#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList numberLL;
    for(int i = 0; i < 10; i++)
    {
        numberLL.Append(i);
    }
    numberLL.PrintContents();
    numberLL.Delete(10);
    numberLL.PrintContents();
    numberLL.Delete(7);
    numberLL.PrintContents();
    numberLL.Delete(0);
    numberLL.PrintContents();
    numberLL.Delete(0);
    numberLL.PrintContents();
    
    cout << "  ... Looping ..." << endl;
    int size = numberLL.GetSize();
    cout << "Size: " << size << endl;

    for(int i = 0; i < numberLL.GetSize(); i++)
    {
        numberLL.Delete(0);
        numberLL.PrintContents();

    }

    return 0;
}