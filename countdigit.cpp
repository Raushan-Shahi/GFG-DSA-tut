#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countdigit(int a)
{
    int count = 0;
    while (a > 0)
    {
        a = a / 10;
        count++;
    }
    return count;
}

int main()
{
    cout << countdigit(7867);
    return 0;
}