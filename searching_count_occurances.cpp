#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lastoccurance(vector<int> v, int x)
{
    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (v[mid] > x)
            high = mid - 1;
        else if (v[mid] < x)
            low = mid + 1;
        else
        {
            if(mid == v.size()-1 || v[mid+1] != v[mid])
                return mid;
            else
                low = mid +1;
        }

    }
    return -1;
}


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


int countocc(vector<int> v, int x)
{
    int first = firstoccurance(v, x);

    if(first == -1)
        return 0;
    else
        return lastoccurance(v,x)-first +1;
}

int main()
{
    vector<int> v = {1,2,2,3,34,5,6,7,7,7,7,8};
    cout << countocc(v,7);
    return 0;
}