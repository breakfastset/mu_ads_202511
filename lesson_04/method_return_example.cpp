#include <iostream>

using namespace std;

// forward declaration or prototype
bool translatePositive(int x, int y, int distance, int &xt, int& yt);
// returns status of whether it can translate (true or false)
// returns the new values of x and y
// xt and yt are returned by reference

int main()
{
    int x;
    int y;
    bool canMove = translatePositive(10, 20, 5, x, y);   // move 10 to 15, 20 to 25 (x=15, y=25)
    if(canMove)
    {
        cout << "New (x, y) = (" << x << ", " << y << ")" << endl;
    }

    return 0;
}

bool translatePositive(int x, int y, int distance, int &xt, int& yt)
{
    if(distance > 0)
    {
        xt = x + distance;
        yt = y + distance;
        return true;
    }
    return false;
}
