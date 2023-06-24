#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 0; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int x = checkprime(44);
    cout << checkprime(45) << endl;
    cout << isprime(898) << endl;
    cout << isPrime(887) << endl;
    return 0;
}