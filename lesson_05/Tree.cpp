#include "Tree.h"

Tree::Tree(char newthing, Tree *L, Tree *R)
{
    data = newthing;
    leftptr = L;
    rightptr = R;
}