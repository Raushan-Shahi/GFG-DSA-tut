#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b > a && b >= c)
        return b;
    else
        return c;
}

int maxpiece(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(maxpiece(n - a, a, b, c), maxpiece(n - b, a, b, c), maxpiece(n - c, a, b, c));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    cout << maxpiece(9, 2, 2, 2);
    return 0;
}