#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>

const int CAPACITY = 10;

class Queue
{
    private:
        int queue[CAPACITY];
        int first;   // front of queue
        int last;    // back of queue
        int count;   // number of items in the Queue

    public:
        Queue();
        ~Queue();
        void Join(int item);
        void Leave();
        int Front();
        bool IsEmpty();
};

#endif