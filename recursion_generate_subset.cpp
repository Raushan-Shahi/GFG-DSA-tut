#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
void subset(string s, string current="", int i=0){
    if(i==s.length())
    {
        cout<< current <<endl;
        return;
    }
    subset(s,current,i+1);
    subset(s,current+s[i],i+1);
}



int main(){
    subset("ABC", "",0);
    return 0;
}