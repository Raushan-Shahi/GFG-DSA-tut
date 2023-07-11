#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> v,int x)
{
    int low = 0, high = v.size() - 1;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if (v[mid]==x)
            return mid;
        
        else if(v[mid] > x)
            high = mid-1;
        else 
            low = mid +1;
    }
    return -1;
    
    
}

int main()
{
    vector<int> a= {1,2,3,4,5,6,7,8,9};
    cout << binarysearch(a,4);

    return 0;
}