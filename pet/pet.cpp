#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int a[5][4];
    int b;
    for (int i = 0; i < 5; i++)
    {
        b = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
            b += a[i][j];
            a[i][0] = b;
        }
    }
    b = 0;
    int c;
    int i = 0;
    while (i < 5)
    {
        if (a[i][0] >= b)
        {
            b = a[i][0];
            c = i + 1;
        }
        i++;
    }
    cout << c << " " << b << "\n";
    return 0;
}