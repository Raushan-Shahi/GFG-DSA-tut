#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;

    if (arr[mid] == x)
        return mid;

    else if (arr[mid] > x)
        return binsearch(arr, low, mid - 1, x);

    else
        return binsearch(arr, mid + 1, high, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, n = 8;
    int x = 3;

    cout << binsearch(arr, 0, n - 1, x);
    return 0;
    return 0;
}