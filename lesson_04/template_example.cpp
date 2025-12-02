#include <iostream>
#include <string>

using namespace std;

template <class T>
T ReturnBigger(T item1, T item2);

int main()
{
    int number = ReturnBigger(10, 5);
    string name = ReturnBigger("mouse", "zebra");
    float number2 = ReturnBigger(3.14, 9.81);
    char letter = ReturnBigger('m', 'z');

    cout << number << endl;  // 10
    cout << name << endl;    // zebra
    cout << number2 << endl;  // 9.81
    cout << letter << endl;

    return 0;
}

template <class T>
T ReturnBigger(T item1, T item2)
{
    // T bigger;
    // if(item1 > item2)
    // {
    //     bigger = item1;
    // }
    // else
    // {
    //     bigger = item2;
    // }
    T bigger = (item1 > item2) ? item1 : item2;
    return bigger;
}