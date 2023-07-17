#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subsum(int ind, int arr[], int n, int sum, int s, vector<int> v)
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
            return true;
        }
        return false;
    }

    v.push_back(arr[ind]);
    s += arr[ind];


    if (subsum(ind + 1, arr, n, sum, s, v) == true)
    {
        return true;
    }

    v.pop_back();
    s -= arr[ind];
    if (subsum(ind + 1, arr, n, sum, s, v)== true){
        return true;
    }

    return false;
}

int main()
{
    int n = 3, sum = 2;
    int arr[] = {1, 2, 1};
    vector<int> v;
    int t = subsum(0, arr, 3, sum, 0, v);
    cout << t;
    return 0;
}