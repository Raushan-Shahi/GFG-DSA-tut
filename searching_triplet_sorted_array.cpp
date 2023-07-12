#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool sumcheck(vector<int> v,int i, int x)
{
    int j = v.size()-1;
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

  

bool tripletsum(vector<int> v, int x)
{
    for (int i = 0; i < v.size()-2; i++)
    {
        if(sumcheck(v, i+1, x-v[i]) == 1)
            return true;
    }
    return false;
    
}


int main(){
    vector<int> v = { 1,2,3,4,5,6,7,8,9};
    cout << tripletsum(v, 25)<<endl;
    cout << tripletsum(v, 19)<<endl;
    cout << tripletsum(v, 24)<<endl;
return 0;
}