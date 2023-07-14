#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(int ind, int arr[], int n, int sum, vector<int> &v, int s)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    v.push_back(arr[ind]);
    s += arr[ind];

    func(ind + 1, arr, n, sum, v, s);

    s-= arr[ind];
    v.pop_back();
    
    func(ind + 1, arr, n, sum, v, s);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> v;
    int ind = 0;
    func(0, arr, n, sum, v, 0);
    return 0;
}