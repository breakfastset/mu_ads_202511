#include <iostream>
#include <vector>   // STL vector, std::vector
#include <string>
#include "CommonLibraries.h"

int main()
{
    // vector<int> numbers;  // empty vector
    vector<int> numbers {99, 88, 77};  
    cout << "Initial size of vector: " << numbers.size() << endl;

    numbers.push_back(10);  // append to the vector
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    cout << "Size now: " << numbers.size() << endl;
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Insert 49 at position 2" << endl;
    vector<int>::const_iterator cItr = numbers.begin(); // point to start of vector
    numbers.insert(cItr + 2, 49);
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Remove last element" << endl;
    numbers.pop_back();
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Remove element at position 3" << endl;
    numbers.erase(cItr + 3);
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << endl;
    //                    begin()       end()
    vector<int> newNumbers {11, 22, 33};
    cout << *(newNumbers.begin()) << endl;   // element at position 0 -> 11
    cout << *(newNumbers.end()-1) << endl;    

    vector<string> names {"Able", "Mabel", "Cable"};

    return 0;
}