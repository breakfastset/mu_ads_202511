#include <iostream>

#define SIZE 10

using namespace std;

int mdata[SIZE] = {65, 23, 89, 13, 9, 10, 45, 21, 7, 11};
int temp[SIZE];

void Merge(int first, int last);   // void Merge(vector<int> leftContainer, vector<int> rightContainer)
void MergeSort(int first, int last);
void DisplayArray();


int main()
{
    DisplayArray();
    MergeSort(0, SIZE-1);
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

void Merge(int first, int last)
{
    int mid = (first + last) / 2;
    int i1 = first - 1;
    int i2 = first;
    int i3 = mid + 1;
    while ((i2 <= mid) && (i3 <= last))
    {
        if (mdata[i2] < mdata[i3])
        {
            i1++;
            temp[i1] = mdata[i2];
            i2++;
        }
        else
        {
            i1++;
            temp[i1] = mdata[i3];
            i3++;
        }
    } // may still be items in the first section
    while (i2 <= mid)
    {
        i1++;
        temp[i1] = mdata[i2];
        i2++;
    } // may still be items in the second section
    while (i3 <= last)
    {
        i1++;
        temp[i1] = mdata[i3];
        i3++;
    } // copy from temp back to data
    for (int i = first; i <= last; i++)
    {
        mdata[i] = temp[i];
    }
}

void MergeSort(int first, int last)
{
    int mid = (first + last) / 2;
    if (first < last)
    {
        MergeSort(first, mid);     // MergeSort left
        MergeSort(mid + 1, last);  // MergeSort right
        Merge(first, last);        // Merge left and right
    }
}