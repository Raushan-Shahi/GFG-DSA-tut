//insertion sort



#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void insert_sort(int *arr, int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = i-1; j >= 0; j--)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        
    }
    
}


int main(){
    int arr[]= {20,5,40,60,10,30};
    int n = 6;
    insert_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
return 0;
}