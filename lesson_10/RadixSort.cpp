#include <iostream>

#define SIZE 10

using namespace std;

int mdata[SIZE] = {65, 23, 89, 13, 9, 10, 451, 21, 7, 11};
int temp[SIZE];

void Merge(int first, int last);
void MergeSort(int first, int last);
void DisplayArray();


int main()
{
    DisplayArray();
    MergeSort(0, SIZE-1);
    DisplayArray();    
    return 0;
}