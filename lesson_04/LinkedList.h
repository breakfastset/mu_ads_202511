#ifndef LINKED_LIST_H
#define LINKED_LIST_H
using namespace std;


// ------ Declaration of Template Class --------- //
template <class T>
struct Node
{
    T data;
    Node *next;
};

template <class T>
class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void Append(T item);
        void Delete(int index);
        void Remove();
        Node<T> * GetHead();
        Node<T> * GetNext();
        bool GetCurrentItem(T &item);
        int GetSize();

    private:
        Node<T> *head; // start of the linked list
        Node<T> *current;
        Node<T> *tail;
        int size;

};

// ----- Start of Implementation -------- //
template <class T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
    current = head;
    size = 0;
}

template <class T>
LinkedList<T>::~LinkedList()
{
    // Need to return memory
    Node<T> *currentNode = head;
    Node<T> *oldNode = nullptr;
    while (currentNode != nullptr)
    {
        oldNode = currentNode;
        currentNode = currentNode->next;
        delete oldNode;  // return memory
    }
    head = nullptr;
    tail = nullptr;
}

template <class T>
void LinkedList<T>::Append(T data)
{
    // Create the new Node
    Node<T> *newNode = new Node<T>();
    newNode->data = data;

    if(head == nullptr)   // Linked List must empty
    {
        head = newNode;
        tail = newNode;
        current = head;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

template <class T>
void LinkedList<T>::Delete(int index)
{
    if(index >= size || index < 0)
    {
        cout << "Incorrect index!" << endl;
        return;   // ignore
    }
    if(index == 0)
    {
        Node<T> *oldNode = head;
        head = head->next;
        delete oldNode;
        oldNode = nullptr;
        size--;
    }
    else
    {
        int currentIndex = 0;
        Node<T> *currentNode = head;
        Node<T> *prevNode = nullptr;
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

template <class T>
void LinkedList<T>::Remove()
{
    Node<T> * currentNode = head;
    while(currentNode != nullptr && currentNode->next != tail)
    {
        currentNode = currentNode->next;
    }

    if (tail != head)
    {
        Node<T> *oldTail = tail;
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

template <class T>
Node<T> * LinkedList<T>::GetHead()
{
    return head;
}


template <class T>
Node<T> * LinkedList<T>::GetNext()
{
    if(current != nullptr)
    {
        current = current->next;
    }
    return current;
}

template <class T>
bool LinkedList<T>::GetCurrentItem(T &item)
{
    if(current != nullptr)
    {
        item = current->data;
        return true;
    }
    return false;
}

template <class T>
int LinkedList<T>::GetSize()
{
    return size;
}

#endif