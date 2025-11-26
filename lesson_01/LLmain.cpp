#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList accounts;   // create a LinkedList object
    accounts.AddAccount(1, 10);
    accounts.AddAccount(2, 20);
    accounts.AddAccount(3, 40);
    accounts.AppendAccount(4, 100);
    accounts.AppendAccount(5, 200);

    //LinkedList accounts2;
    //accounts2.AddAccount(9, 111);
    //accounts2.AddAccount(10, 222);

    //accounts.Concatenate(accounts2);

    accounts.PrintContents();

    accounts.Reverse();
    cout << "---- After reversal ---" << endl;
    accounts.PrintContents();
    cout  << "-------------------------------" << endl << endl;

    Node *account = accounts.Search(1);
    if(account != nullptr)
    {
        cout << "Found Target!" << endl;
        cout << "Acct number: " << account->accountNumber << endl;
        cout << "   Balance : " << account->balance << endl;
    }
    else
    {
        cout << "Target account not found!" << endl;
    }
    return 0;
}