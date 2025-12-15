#include <iostream>
#include "bst.h"

using namespace std;

int main()
{
    Bst bstree;
    int numbers[] = {30, 45, 40, 80, 25, 20, 15, 18, 9, 75};
    cout << "Inserting ";
    for(int i = 0; i < 10; i++)
    {
        cout << numbers[i] << "  ";
        bstree.Insert(numbers[i]);
    }
    cout << endl;

    cout << "--- Testing Search ---" << endl;
    //cout << "Found 80? " << bstree.Search(80) << endl;   // 1
    cout << "Found 81? " << bstree.Search(81) << endl;   // 0
    cout << "Found 19? " << bstree.Search(19) << endl;   // 0
    cout << "Found 33? " << bstree.Search(33) << endl;   // 0
    // cout << "Found 20? " << bstree.Search(20) << endl;   // 1

    cout << "--- Searching all numbers in the array --- " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "Found " << numbers[i] << "? " << bstree.Search(numbers[i]) << endl;
    }

    cout << endl << "-------------------------------------" << endl;
    bstree.InOrder();

    return 0;
}