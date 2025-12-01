#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream> /// should never be included in classes unless it is an IO class
using namespace std;

struct Node
{
    int number;
    Node *next;
};

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void Append(int number);
        void Delete(int index);
        void Remove();
        Node * Search(int number);
        void PrintContents();  // not recommended I/O not supposed to be in class
        Node * GetHead();
        Node * GetTail();
        int GetSize();

        void Reverse();

    private:
        Node *head; // start of the linked list
        Node *tail;
        int size;

};

#endif