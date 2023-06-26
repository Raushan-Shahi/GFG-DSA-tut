#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 3;
    int y = 6;
    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    unsigned int a = 1;
    cout << (~a) << endl;           // unsigned is always positive
    int b = 1;
    cout << (~b) << endl;           // signed is sometimes negative
    return 0;
}