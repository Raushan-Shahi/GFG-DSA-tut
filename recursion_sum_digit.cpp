#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int getsum(int n){
    if(n==0)
        return 0;
    else 
        return getsum(n/10) + n%10;
}

int main(){
    cout << getsum(283);
return 0;
}