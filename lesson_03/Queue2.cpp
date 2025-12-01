#include "Queue2.h"

Queue::Queue()   // already created when declared
{
}

Queue::~Queue()
{
    // no pointer data, leave empty
}

void Queue::Join(int item)
{
    queue.Append(item);
}

void Queue::Leave()
{
    queue.Delete(0);
}

int Queue::Front()
{
    if(IsEmpty())
    {
        throw std::out_of_range("Queue is empty");
    }
    return queue.GetHead()->number;
}

bool Queue::IsEmpty()
{
    return queue.GetSize() == 0;
}