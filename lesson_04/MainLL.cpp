#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> numbers;
    int currentNum;

    numbers.Append(10);
    numbers.Append(20);

    numbers.GetCurrentItem(currentNum);
    cout << currentNum << endl;
    
    numbers.GetNext();
    
    numbers.GetCurrentItem(currentNum);
    cout << currentNum << endl;

    return 0;
}