#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>
#include "LinkedList.h"

class Queue
{
    private:
        LinkedList queue;

    public:
        Queue();
        ~Queue();
        void Join(int item);
        void Leave();
        int Front();
        bool IsEmpty();
};

#endif