#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> NumberContainer;

bool LinearSearch(const NumberContainer &numbers, int target, int &indexFound);
bool BinarySearch(const NumberContainer &numbers, int target, int &indexFound);

int main()
{
    NumberContainer unsortedNumbers {67, 21, 13, 4, 19, 20, 50};
    int indexFound;
    int target = 13;
    bool found = LinearSearch(unsortedNumbers, target, indexFound);
    if(found)
    {
        cout << target << " found at position " << indexFound << endl;
    }

    NumberContainer sortedNumbers {13, 20, 31, 33, 99, 100, 101, 200, 215, 300};
    int indexFound2;
    int target2 = 215;
    bool found2 = BinarySearch(sortedNumbers, target2, indexFound2);
    if(found2)
    {
        cout << target2 << " found at position " << indexFound2 << endl;
    }
    else
    {
        cout << target2 << " not found!" << endl;
    }

    return 0;
}

bool LinearSearch(const NumberContainer &numbers, int target, int &indexFound)
{
    bool found = false;
    int index = 0;
    while(!found && index < numbers.size())
    {
        if(numbers[index] == target)
        {
            indexFound = index;
            found = true;
        }
        index++;
    }
    return found;
}


bool BinarySearch(const NumberContainer &numbers, int target, int &indexFound)
{
    bool found = false;
    int middleIndex = 0;
    int leftIndex = 0;
    int rightIndex = numbers.size() - 1;
    while(!found && leftIndex <= rightIndex)
    {
        middleIndex = (leftIndex + rightIndex) / 2;
        if(numbers[middleIndex] == target)
        {
            indexFound = middleIndex;
            found = true;
        }
        else if(numbers[middleIndex] < target)
        {
            // update left
            leftIndex = middleIndex + 1;
        }
        else if(numbers[middleIndex] > target)
        {
            // update right
            rightIndex = middleIndex - 1;
        }
    }
    return found;
} 