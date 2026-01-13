#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> NumberContainer;

void Display(const NumberContainer &numbers);
void SelectionSort(NumberContainer &numbers);
void InsertionSort(NumberContainer &numbers);
void BubbleSort(NumberContainer &numbers);

int main()
{
    NumberContainer numbers{67, 21, 13, 4, 19, 20, 50, 18, 17};
    BubbleSort(numbers);
    Display(numbers);
    return 0;
}


void Display(const NumberContainer &numbers)
{
    cout << "[";
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        cout << numbers[i] << ", ";
    }
    if (numbers.size() > 0)
    {
        cout << numbers[numbers.size() - 1];
    }
    cout << "]" << endl;
}

void SelectionSort(NumberContainer &numbers)
{
    int minIndex;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        minIndex = i; // min is an index
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j; // found the new minimum index
            } // a comparison here
        }
        swap(numbers[minIndex], numbers[i]);
        cout << "  ss---> ";
        Display(numbers);
    }
}

void InsertionSort(NumberContainer &numbers)
{
    int temp;
    int j;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        temp = numbers[i + 1]; // take the number to the right side for insertion
        j = i + 1;
        while (j > 0 && temp < numbers[j - 1])
        {
            numbers[j] = numbers[j - 1]; // keep shifting
            j--;
        }
        numbers[j] = temp;    // insert the number in the correct position
        cout << "  is---> ";
        Display(numbers);
    }
}

void BubbleSort(NumberContainer &numbers)
{
    bool swapping = true;
    while (swapping)
    {
        swapping = false;
        for (int i = 0; i < numbers.size() - 1; i++)
        { // don’t look at the last one 
            if (numbers[i] > numbers[i + 1])
            { // comparison
                swap(numbers[i], numbers[i + 1]);
                swapping = true;
            }
            Display(numbers);
        }
    }
}