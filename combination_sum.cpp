#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void comb_sum(vector<vector<int>> &ans, vector<int> &ds, vector<int> &v, int target, int ind)
{
    if (ind == v.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (v[ind] <= target)
    {
        ds.push_back(v[ind]);
        comb_sum(ans, ds, v, target - v[ind], ind);
        v.pop_back();
    }
    comb_sum(ans, ds, v, target, ind + 1);
}

int main()
{
    vector<vector<int>> ans;
    vector<int> ds;
    int target = 7;
    vector<int> v = {2, 3, 6, 7};
    comb_sum(ans, ds, v, 7, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}