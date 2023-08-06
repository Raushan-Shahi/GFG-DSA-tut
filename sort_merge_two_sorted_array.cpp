#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> join_arr(int *arr1, int *arr2, int n, int m)
{
    int i = 0, j = 0;
    vector<int> arr;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        arr.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        arr.push_back(arr2[j]);
        j++;
    }
    return arr;
}

int main()
{
    int arr1[] = {1, 3, 5, 6};
    int arr2[] = {2, 4, 8, 18};
    int n = 4;
    int m = 4;
    vector<int> v = join_arr(arr1, arr2, n, m);
    for (int i = 0; i < n + m; i++)
        cout << v[i] << " ";

    return 0;
}