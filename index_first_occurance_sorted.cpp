#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstoccurance(vector<int> v, int x)
{
    int low =0, high = v.size()-1;

    while(low <=high)
    {
        int mid = (low + high)/2;

        if(x > v[mid])
            low = mid +1 ;
        
        else if(x < v[mid])
            high = mid -1;
        else
        {
            if(mid ==0 || v[mid-1] != v[mid])
                return mid;
            
            else
                high = mid -1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {1, 2, 2, 2, 4, 4, 5, 6, 7, 7, 8, 9, 9, 9};
    cout << firstoccurance(v,2);
    return 0;
}