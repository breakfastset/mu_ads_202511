#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> IntegerContainer;
typedef vector<IntegerContainer> IntegerMatrix;

int Sum(const IntegerContainer & numbers);
int Sum(const IntegerMatrix & numbers);

int main()
{
    IntegerContainer intNumbers {44, 77, 88, 13, 14, 200, 100};
    IntegerContainer intNumbers2 {441, 717, 88, 13, 14, 200, 55};
    IntegerContainer intNumbers3 {442, 7, 88, 13, 14, 210, 1050};
    IntegerContainer intNumbers4 {344, 37, 88, 13, 14, 10, 99};
    IntegerContainer intNumbers5 {444, 47, 88, 13, 14, 20, 1550};

    IntegerMatrix intMatrix {intNumbers, intNumbers2, intNumbers3, intNumbers4};

    int total = Sum(intMatrix);
    cout << "Total is: " << total << endl;
    return 0;
}

int Sum(const IntegerMatrix & numbers)
{
    int total = 0;                            // 1
    for(int i = 0; i < numbers.size(); i++)   // n
    {
        total = total + Sum(numbers[i]);      // n * n
    }
    return total;                              // 1
}
// Total = n^2 + n + 2

// assume the size of numbers is n where n is a big number
int Sum(const IntegerContainer & numbers)
{
    int total = 0;                           // 1
    for(int i = 0; i < numbers.size(); i++)  // n
    {
        total = total + numbers[i];          // n
    }
    return total;                            // 1
}
// Total steps = 2n + 2
// Big O = O(2n + 2) = O(n)