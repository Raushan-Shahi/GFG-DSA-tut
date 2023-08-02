#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void print_arr(vector<int> v){
    for (int i = 0; i < v.size(); i++)
        cout<< v[i] << " ";
}


void print_permut(vector<int> v, int ind){
    if(ind == v.size()){
        print_arr(v);
        cout << endl;
        return ;
    }
    for(int i =ind; i < v.size(); i++){
        swap(v[ind], v[i]);
        print_permut(v, ind+1);
        swap(v[ind], v[i]);
    }
}



int main(){
    vector<int> v = {1,2,3};
    vector<vector<int>> ans; 
    print_permut(v, 0);
return 0;
}