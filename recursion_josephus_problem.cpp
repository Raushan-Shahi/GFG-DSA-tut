#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

int jos(int n, int k)
{
    if(n==1)
        return 0;
    else
        return (jos(n-1,k)+k)%n ;
}


int main(){
    cout << jos(4,3);
return 0;
}