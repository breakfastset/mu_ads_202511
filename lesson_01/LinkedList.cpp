#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    // Need to return memory
    Node *currentNode = head;
    Node *oldNode = nullptr;
    while (currentNode != nullptr)
    {
        oldNode = currentNode;
        currentNode = currentNode->next;
        delete oldNode;  // return memory
    }
    head = nullptr;
    tail = nullptr;
}

Node * LinkedList::GetHead()
{
    return head;
}

Node * LinkedList::GetTail()
{
    return tail;
}

void LinkedList::Concatenate(LinkedList otherList)
{
    if (head == nullptr)  // if current list is empty
    {
        head = otherList.GetHead();   // head and tail are the first node of the other list
        tail = otherList.GetHead();    
    }
    else
    {
        tail->next = otherList.GetHead(); // tail's next = other list's head
        tail = otherList.GetTail();
    }
}

void LinkedList::AddAccount(int acctNumber, float bal)
{
    Node *newAccount = new Node;
    newAccount->accountNumber = acctNumber;
    newAccount->balance = bal;
    newAccount->next = head;
    if (head == nullptr)
    {
        tail = newAccount;
    }
    head = newAccount;
}

void LinkedList::AppendAccount(int acctNumber, float bal)
{
    // Create the new Node
    Node *newAccount = new Node;
    newAccount->accountNumber = acctNumber;
    newAccount->balance = bal;

    if(head == nullptr)   // Linked List must empty
    {
        head = newAccount;
        tail = newAccount;
    }
    else
    {
        tail->next = newAccount;
        tail = newAccount;
    }
}

Node * LinkedList::Search(int targetAcct)
{
    Node *currentNode = head;
    Node *targetNode = nullptr;
    while(currentNode != nullptr && targetNode == nullptr)  // not found
    {
        if(currentNode->accountNumber == targetAcct)
        {
            targetNode = currentNode;
        }
        else
        {
            currentNode = currentNode->next;
        }
    }

    return targetNode;
}

void LinkedList::Reverse()
{
    Node *oldHead, *currentNode, *nextNode;
    oldHead = head;
    if (oldHead != nullptr)
    {
        currentNode = oldHead->next;
        while(currentNode != nullptr)
        {
            nextNode = currentNode->next;  // look forward to next node
            currentNode->next = head;     // let currentNode point to head
            head = currentNode;           // update head to currentNode until it reaches the tail
            currentNode = nextNode;       // update currentNode until it reaches null
        }
        oldHead->next = nullptr;    // new tail
        tail = oldHead;
    }
}


void LinkedList::PrintContents()
{
    Node *currentNode = head;
    while(currentNode != nullptr)
    {
        cout << "Account Number: " << currentNode->accountNumber << endl;
        cout << "       Balance: " << currentNode->balance << endl << endl;
        currentNode = currentNode->next;
    }
}
