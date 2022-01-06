#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int b[a];
    int m = 0, md = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int n = sizeof(b) / sizeof(b[0]);

    sort(b, b + n, greater<int>());
    int d = 1;
    for (int i = 0; i < a; i++)
    {
        if (b[i] + d > m)
        {
            m = b[i] + d;
        }
        d++;
    }
    cout << m + 1;
}