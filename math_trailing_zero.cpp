#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int trailzero(int n)
{
    int count=0,x=5;
    while(n>=x)
    {
        count = count + n/x;
        x *=5;
    }
    return count;
}

int main(){
    cout<< trailzero(5)<<endl;
    cout<<trailzero(100);

return 0;
}