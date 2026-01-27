#include <iostream>

#define SIZE 10

using namespace std;

int mdata[SIZE] = {65, 23, 89, 13, 9, 10, 45, 21, 7, 11};
int temp[SIZE];

void Quicksort(int first, int last);
void DisplayArray();
void swap(int *x, int *y);

int main()
{
    DisplayArray();
    Quicksort(0, SIZE-1);
    DisplayArray();    
    return 0;
}

void DisplayArray()
{
    cout << "[";
    for(int i = 0; i < SIZE-1; i++)
    {
        cout << mdata[i] << " ";
    }
    if(SIZE > 0)
    {
        cout << mdata[SIZE-1];
    }
    cout << "]" << endl;
}

void Quicksort(int first, int last)
{
    int i = first + 1, j = last, pivot = mdata[first];
    while (i < j)
    {
        while ((mdata[i] < pivot) && (i < last))
        {
            i++;
        }
        while ((mdata[j] > pivot))
        {
            j--;
        }
        if (i < j)
        {
            swap(&mdata[i], &mdata[j]);
        }
    }
    if (pivot > mdata[j])
    {
        swap(&mdata[first], &mdata[j]);
    }
    if (first < j - 1)
    {
        Quicksort(first, j - 1);
    }
    if (j + 1 < last)
    {
        Quicksort(j + 1, last);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}