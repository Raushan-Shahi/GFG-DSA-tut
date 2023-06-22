#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//basic application of euclidean algorithm
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

//optimised euclidean algorithm
int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main(){
    cout<<gcd(6,15);
    cout<<GCD(56, 84);
return 0;
}