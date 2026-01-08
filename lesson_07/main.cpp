#include "Heap.h"
#include <iostream>

using namespace std;

int main()
{
    Heap myHeap;
    int things[] = {15, 10, 18, 2, 1, 16, 4, 13, 9, 7};
    for(int i = 0; i < 10; i++)
    {
        myHeap.Insert(things[i]);
    }
    myHeap.PrintContents();
    cout << endl;

    int sortedNumbers[10];
    for(int i = 9; i >= 0; i--)
    {
        sortedNumbers[i] = myHeap.DeleteRoot();
    }

    cout << endl << "-- Sorted numbers --" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << sortedNumbers[i] << "  ";
    }
    cout << endl;

    return 0;
}