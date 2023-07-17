#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subsum(int ind, int arr[], int n, int sum, int s)
{
    if (ind == n)
    {
        if (s == sum)
        {
            return 1;
        }
        return 0;
    }

    s += arr[ind];

    int l = subsum(ind + 1, arr, n, sum, s);


    s -= arr[ind];
    int r = subsum(ind + 1, arr, n, sum, s);

    return l+r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    cout << subsum(0, arr, n, sum, 0);
    return 0;
}