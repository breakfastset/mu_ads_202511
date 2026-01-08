#ifndef HEAP_H
#define HEAP_H
#include <algorithm>
#include <iostream>

class Heap
{
private:
    int data[10]; // can change that to dynamic
    int lastIndex;     // last index
public:
    Heap();
    ~Heap(){}; // destructor
    void Insert(int newthing);
    // bool Delete(int item);
    int DeleteRoot();
    void PrintContents();
};

#endif