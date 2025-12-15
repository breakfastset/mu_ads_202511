#ifndef BST_H
#define BST_H

#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
};

class Bst
{
    private:
        Node * root;
        int size;

        bool Insert(Node *parent, Node *newNode);
        bool Search(Node *parent, int value);
        void InOrder(Node *currentNode);

    public:
        Bst();
        ~Bst();
        bool Insert(int value);
        bool Search(int value);
        int GetSize() const;
        void InOrder();
};

#endif