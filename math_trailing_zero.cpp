#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int trailzero(int n)
{
    int count=0;
    for (int i = 5; i <= n; i*=5)
        count = count + n/i;
    return count;
}

int main(){
    cout<< trailzero(5)<<endl;
    cout<<trailzero(100);

return 0;
}