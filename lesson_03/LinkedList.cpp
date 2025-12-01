#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
    size = 0;
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

void LinkedList::Delete(int index)
{
    if(index >= size || index < 0)
    {
        cout << "Incorrect index!" << endl;
        return;   // ignore
    }
    if(index == 0)
    {
        Node *oldNode = head;
        head = head->next;
        delete oldNode;
        oldNode = nullptr;
        size--;
    }
    else
    {
        int currentIndex = 0;
        Node *currentNode = head;
        Node *prevNode = nullptr;
        while(currentIndex < index)   // get to the current index and the previous index
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
            currentIndex++;
        }
        prevNode->next = currentNode->next;   // link up previous node to next node of current
        // this will delink currentNode
        if (currentNode == tail)    
        {
            tail = prevNode;
        }
        delete currentNode;   // remove currentNode from memory
        size--;
    }
}

Node * LinkedList::GetHead()
{
    return head;
}

Node * LinkedList::GetTail()
{
    return tail;
}

int LinkedList::GetSize()
{
    return size;
}


void LinkedList::Append(int number)
{
    // Create the new Node
    Node *newNode = new Node;
    newNode->number = number;

    if(head == nullptr)   // Linked List must empty
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

Node * LinkedList::Search(int target)
{
    Node *currentNode = head;
    Node *targetNode = nullptr;
    while(currentNode != nullptr && targetNode == nullptr)  // not found
    {
        if(currentNode->number == target)
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

void LinkedList::Remove()
{
    Node * currentNode = head;
    while(currentNode != nullptr && currentNode->next != tail)
    {
        currentNode = currentNode->next;
    }

    if (tail != head)
    {
        Node *oldTail = tail;
        tail = currentNode;
        delete oldTail;
        
        size--;
    }
    else if (tail != nullptr)
    {
        delete tail;
        head = tail = nullptr;
        size--;
    }
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
    cout << "head ->";
    while(currentNode != nullptr)
    {
        cout << "[" << currentNode->number << "] ->";
        currentNode = currentNode->next;
    }
    cout << "null" << endl;
}
