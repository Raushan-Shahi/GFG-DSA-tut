#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = v[low];
    while (i < j)
    {
        while (v[i] <= pivot && i <= high - 1)
            i++;
        while (pivot < v[j] && j >= low + 1)
            j--;
        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}

void qs(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pindex = partition(v, low, high);
        qs(v, low, pindex - 1);
        qs(v, pindex + 1, high);
    }
}

int main()
{
    vector<int> v = {4, 6, 2, 5, 7, 9, 1, 3};
    qs(v, 0, v.size() - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}