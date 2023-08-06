#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i-1] == a[i])
            continue;

        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int arr1[] = {3, 5, 10, 10, 10, 15, 15, 20};
    int arr2[] = {5, 10, 10, 15, 30};
    intersection(arr1, arr2, 8, 5);
    return 0;
}