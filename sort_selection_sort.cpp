//selection sort


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        int min_ind = i;
        for (int j = i; j < n ; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[i], arr[min_ind]);
    }
}

int main()
{
    int arr[] = {2, 8, 7, 10, 20, 18};
    int n = 6;
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    
    return 0;
}