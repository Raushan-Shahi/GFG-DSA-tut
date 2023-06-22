#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palindrom(int x)
{
    int rev = 0;
    int temp = x;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return (rev == x);
}

int main()
{
    cout << palindrom(456654) << endl;
    cout << palindrom(6576) << endl;
    return 0;
}