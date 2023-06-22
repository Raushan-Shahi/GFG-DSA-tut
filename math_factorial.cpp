// theta(n) time complexity for recursive solution 


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << fact(5) << endl;
    cout << factorial(6);
    return 0;
}