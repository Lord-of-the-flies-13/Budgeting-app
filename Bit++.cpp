// Bit++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Bitplusplus(int n,string *a)
{
    int i;
    int x = 0;
    for (i = 0; i < n; i++)
        if (a[i] == "X++" || a[i] == "++X")
            x++;
        else
            x--;
    return x;

}

int main()
{
    int n,i;
    cin >> n;
    string* a = new string[n];
    

    for (i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        a[i] = str;
    }
    cout << Bitplusplus(n, a);

    delete[] a;
    return 0;
        

}

