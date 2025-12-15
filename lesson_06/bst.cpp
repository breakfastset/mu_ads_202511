#include "bst.h"

Bst::Bst()
{
    root = nullptr;
    size = 0;
}

Bst::~Bst()
{
    // need to delete
}

bool Bst::Insert(int value)
{
    Node *newNode = new Node;
    newNode->key = value;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if(root == nullptr)
    {
        root = newNode;
        size++;
        return true;
    }
    else
    {
        return Insert(root, newNode);
    }
}

bool Bst::Insert(Node *parent, Node *newNode)
{
    if(parent->key == newNode->key)
    {
        return false;
    }
    else if(newNode->key < parent->key)
    {
        // insert to the left
        if(parent->left == nullptr)
        {
            parent->left = newNode;
            size++;
            return true;
        }
        else
        {
            return Insert(parent->left, newNode);
        }
    }
    else if(newNode->key > parent->key)
    {
        // insert to the right
        if(parent->right == nullptr)
        {
            parent->right = newNode;
            size++;
            return true;
        }
        else
        {
            return Insert(parent->right, newNode);
        }
    }
    return false;
}

bool Bst::Search(int value)
{
    if(root == nullptr)
    {
        return false;
    }
    else
    {
        return Search(root, value);
    }
}

bool Bst::Search(Node *parent, int value)
{
    if(parent == nullptr)
    {
        return false;
    }

    if(parent->key == value)
    {
        // cout << "Key is: " << parent->key << ", Val: " << value << endl; 
        return true;
    }
    else if(value < parent->key)
    {
        // cout << "Left Key is: " << parent->key << ", Val: " << value << endl; 
        return Search(parent->left, value);  // search left
    }
    else if(value > parent->key)
    {
        // cout << "Right Key is: " << parent->key << ", Val: " << value << endl; 
        return Search(parent->right, value);  // search right
    }
    else
    {
        return false;
    }
}

int Bst::GetSize() const
{
    return size;
}

void Bst::InOrder(Node *currentNode)
{
    if(currentNode == nullptr)
    {
        return;
    }
    InOrder(currentNode->left);
    cout << currentNode->key << "  ";
    InOrder(currentNode->right);
}

void Bst::InOrder()
{
    InOrder(root);
    cout << endl;
}