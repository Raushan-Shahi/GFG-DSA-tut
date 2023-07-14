#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    


void swapping(int v[], int l, int r)
{
    if(l>=r)
        return;
    swap(v[l],v[r]);
    swapping(v, l+1, r-1);
}



int main(){
    int arr[] = {1,2,3,4,5};
    swapping(arr, 0,4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<< endl;
    }
    
return 0;
}