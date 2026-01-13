#include <iostream>

using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55 89 144
long Fibo(int numTerms);
long Fibo2(int numTerms);

int main()
{
    for(int i = 0; i < 45; i++)
    {
        cout << Fibo2(i) << " ";
    }
    cout << endl;

    return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55 89 144
long Fibo(int numTerms)
{
    if(numTerms == 0 || numTerms == 1)
    {
        return numTerms;
    }
    else
    {
        return Fibo(numTerms - 2) + Fibo(numTerms - 1);
    }
}

long Fibo2(int numTerms)
{
    if(numTerms == 0 || numTerms == 1)
    {
        return numTerms;
    }
    long term0 = 0;
    long term1 = 1;
    long term2;
    for(int i = 2; i <= numTerms; i++)
    {
        term2 = term0 + term1;
        term0 = term1;
        term1 = term2;
    }
    return term2;
}
