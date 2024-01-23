//0th to Nth  step with only 1 or 2 step at a time
// climbing stairs 


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int steps(int n){
    if(n<=1) return 1;

    int left = steps(n-1);
    int right = steps(n-2);
    return left + right;
}


int main(){
    cout << steps(4);
return 0;
}