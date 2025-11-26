#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int *ptr = nullptr;   // initialised to null
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Contents of ptr: " << ptr << endl;

    ptr = &num;
    cout << "Contents of ptr again: " << ptr << endl;
    cout << "Address of num       : " << &num << endl;

    *ptr = 20;
    cout << "num: " << num << endl;

    return 0;
}