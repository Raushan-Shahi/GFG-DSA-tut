#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x = 1;

int nameprint()
{
    if (x > 5)
        return 0;
    cout << "name" << endl;
    x ++;
    nameprint();
    return 0;
}

int main()
{
    nameprint();
    return 0;
}