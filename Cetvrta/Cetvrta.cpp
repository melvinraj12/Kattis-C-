#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int x[3], y[3];
    int x1, y1;
    for (int i = 0; i < 3; i++)
    {
        x[i] = a[i][0];
        y[i] = a[i][1];
        if (a[i][0] != a[i][1])
        {
            x1 = a[i][0];
            y1 = a[i][1];
        }
    }
    int fax1 = 0, fay1 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (x[i] == x1)
        {
            fax1 += 1;
        }
        if (y[i] == x1)
        {
            fay1 += 1;
        }
    }
    cout << fax1 << " " << fay1;
    // int f1, f2;
    // if (fay1 == 2)
    // {
    //     f1 = f2 = y1;
    // }
    // else if (fay1 == 1)
    // {
    //     f1 = x1;
    //     f2 = y1;
    // }
    // cout << f1 << " " << f2;
}