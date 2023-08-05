// bubble sort


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

void bubble_sort( int *arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
}


int main(){
    int arr[] = {2,10,8,7};
    bubble_sort(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    
return 0;
}