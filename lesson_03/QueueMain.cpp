#include <iostream>
#include "Queue2.h"

using namespace std;

int main()
{
    Queue intQueue;

    for(int i = 0; i < 21; i++)
    {
        intQueue.Join(i);
    }

    while(!intQueue.IsEmpty())
    {
        int number = intQueue.Front();
        cout << "Serving " << number << endl;
        intQueue.Leave();
    }
    cout << "--- Queue is Empty ... All Done! ---" << endl;
    return 0;
}