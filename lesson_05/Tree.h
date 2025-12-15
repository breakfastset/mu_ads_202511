#ifndef TREE_H
#define TREE_H

class Tree
{
private:
    char data;
    Tree *leftptr, *rightptr;

public:
    Tree(char newthing, Tree *L, Tree *R); // constructor with parameters
    ~Tree() {}
    char RootData() { return data; } // inline functions
    Tree *Left() { return leftptr; }
    Tree *Right() { return rightptr; }
};

#endif