#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

void intersection(int a[], int b[], int n, int m){
    int i=0, j=0;
    while (i<n && j<m)
    {
        if(i>0 && a[i-1]== a[i]){
            i++;
            continue;
        }
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else{
            cout<<a[i] << " ";
            i++;
            j++;
        }
    }
    
}


int main(){
    
    int a[] = {10,20,20,40,60};
    int b[] = {2,20,20,20};
    intersection(a, b, 5, 4);
return 0;
}