#include <iostream>

using namespace std;

int main()
{
    int matrix[2][3];
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "matrix[" << row << "][" << col << "]: " << &matrix[row][col] << endl;
        }
    }
    return 0;
}