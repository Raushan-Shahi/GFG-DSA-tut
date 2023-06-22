#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int lcm(int a, int b)
{
    int res = max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
            return res;
        res++;
    }
    return res;
}

//optimised euclidean algorithm
int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main(){
    cout<<"lcm of 3,5 is: "<< (3*5)/GCD(3,5);
return 0;
}