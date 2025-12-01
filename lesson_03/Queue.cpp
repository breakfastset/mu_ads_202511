#include "Queue.h"

Queue::Queue()
{
    first = 0;
    last = -1;
    count = 0;
}

Queue::~Queue()
{
    // no pointer data, leave empty
}

void Queue::Join(int item)
{
    if(count < CAPACITY)       // ensure queue has space
    {
        last++;
        if(last >= CAPACITY)   // if index out of bounds
        {
            last = 0;          //     switch last to first position
        }
        queue[last] = item;    // place item at last
        count++;
    }
}

void Queue::Leave()
{
    if(!IsEmpty())
    {
        first++;
        if(first >= CAPACITY)
        {
            first = 0;
        }
        count--;
    }
}

int Queue::Front()
{
    if(IsEmpty())
    {
        throw std::out_of_range("Queue is empty!");
    }
    return queue[first];
}

bool Queue::IsEmpty()
{
    return count == 0;
}