#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void union_array(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }

        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    }
    while (j < m)
    {
        if (j >= 0 || b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
    }
}

int main()
{
    int a[] = {2, 10, 20, 20};
    int b[] = {10, 40, 60};
    union_array(a, b, 4, 3);
    return 0;
}