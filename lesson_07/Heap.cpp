#include "Heap.h"

Heap::Heap()
{
    lastIndex = -1;
}

void Heap::Insert(int newthing)
{
    data[lastIndex + 1] = newthing; // add to the end
    lastIndex = lastIndex + 1;

    if (lastIndex == 0)
    {
        return; // only one item in Heap
    }

    int childIndex = lastIndex; // let childIndex be the newest index
    int parentIndex = 0;
    bool swapping = true;
    while (swapping)
    {
        // fix the heap
        swapping = false;
        parentIndex = (childIndex % 2 == 0) ? childIndex / 2 - 1 : childIndex / 2; // find parent

        if (parentIndex >= 0)
        {
            if (data[childIndex] > data[parentIndex])
            {
                std::swap(data[childIndex], data[parentIndex]);
                swapping = true;
                childIndex = parentIndex;
            }
        }
    }
}

void Heap::PrintContents()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int Heap::DeleteRoot()
{
    if (lastIndex < 0)
    {
        return -1;
    }

    int topOfHeap = data[0]; // the root
    data[0] = data[lastIndex];
    data[lastIndex] = 0; // deleting...could virtually delete
    lastIndex = lastIndex - 1;
    int parentIndex = 0;                  // root at the moment
    int leftIndex = parentIndex * 2 + 1;  // left child
    int rightIndex = parentIndex * 2 + 2; // right child

    while (data[parentIndex] < data[leftIndex] || data[parentIndex] < data[rightIndex])
    {
        if (data[rightIndex] < data[leftIndex])
        { // follow left
            std::swap(data[leftIndex], data[parentIndex]);
            parentIndex = leftIndex;
        }
        else
        { // else follow right
            std::swap(data[rightIndex], data[parentIndex]);
            parentIndex = rightIndex;
        }
        leftIndex = parentIndex * 2 + 1;
        rightIndex = parentIndex * 2 + 2;
        if (leftIndex > lastIndex)
        {
            break;
        }
        else
        {
            if (rightIndex > lastIndex)
            {
                if (data[parentIndex] < data[leftIndex])
                {
                    std::swap(data[parentIndex], data[leftIndex]);
                }
                break;
            }
        }
    }
    return topOfHeap;
}