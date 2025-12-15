#include <iostream>
#include "Tree.h"
using namespace std;

void inOrder(Tree *T);
int main()
{
    Tree *T1, *T2, *T3, *T4, *T5, *T6;
    Tree *myTree; // always use pointers to trees

    T1 = new Tree('D', NULL, NULL);
    T2 = new Tree('E', NULL, NULL);
    T3 = new Tree('B', T1, T2);
    T4 = new Tree('F', NULL, NULL);
    T5 = new Tree('G', NULL, NULL);
    T6 = new Tree('C', T4, T5);
    myTree = new Tree('A', T3, T6);
    inOrder(myTree);
}

void inOrder(Tree *T)
{
    if (T == NULL)
    {
        return;
    }
    inOrder(T->Left());
    printf("%c ", T->RootData());
    inOrder(T->Right());
}