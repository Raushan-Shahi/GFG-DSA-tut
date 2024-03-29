#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lpartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j < h - 1; j++)
    {
        if (arr[i] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int l = lpartition(arr, 0, 6);
    cout << l;
    return 0;
}