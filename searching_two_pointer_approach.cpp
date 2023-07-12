#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

bool sumcheck(vector<int> v, int x)
{
    int i =0, j = v.size()-1;
    while(i<j)
    {
        if(v[i]+v[j] == x)
            return true;
        else if(v[i]+v[j]<x)
            i++;
        else
            j--;       
    }
    return false;
}


int main(){
    vector<int> v = {2,4,8,10,12,20,23};
    cout<< sumcheck(v,23);
    
return 0;
}