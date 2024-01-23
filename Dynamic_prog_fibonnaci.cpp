#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibonnacci(int n)
{
    int prev1 = 0, prev2 = 1;
    int cur;
    for (int i = 2; i < n; i++)
    {
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
    }
    return cur;
}

int main()
{
    cout << fibonnacci(7) << " " << fibonnacci(6) << " " << fibonnacci(4);
    return 0;
}