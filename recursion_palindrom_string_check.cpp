#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

bool palindrom( string &s, int i)
{
    if(i >= s.size()/2)
        return true;
    if(s[i] != s[s.size()-i-1])
        return false;
    return(palindrom(s, i+1));
}


int main(){
    string s = "madams";
    cout<< palindrom(s, 0);
return 0;
}