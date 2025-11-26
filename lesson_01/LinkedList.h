#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream> /// should never be included in classes unless it is an IO class
using namespace std;

struct Node
{
    int accountNumber;
    float balance;
    Node *next;
};

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();   // destructor
        void AddAccount(int acctNumber, float bal);
        void AppendAccount(int acctNumber, float bal);
        Node * Search(int targetAcct);
        void PrintContents();  // not recommended I/O not supposed to be in class
        Node * GetHead();
        Node * GetTail();

        void Concatenate(LinkedList otherList);
        void Reverse();

    private:
        Node *head; // start of the linked list
        Node *tail;
        int size;

};

#endif