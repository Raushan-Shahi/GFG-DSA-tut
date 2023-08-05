#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
};

bool mycmp(point p1, point p2)
{
    return (p1.x < p2.x);
}

int main()
{
    point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = 3;
    sort(arr, arr + n, mycmp);
    for (auto i : arr)
        cout << i.x << " " << i.y << endl;
    return 0;
}