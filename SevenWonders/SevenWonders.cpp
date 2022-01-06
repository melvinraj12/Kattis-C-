#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int t = 0, c = 0, g = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'T')
        {
            t++;
        }
        else if (a[i] == 'C')
        {
            c++;
        }
        else if (a[i] == 'G')
        {
            g++;
        }
    }
    if (t == 0 || c == 0 || g == 0)
    {
        cout << pow(t, 2) + pow(c, 2) + pow(g, 2);
    }
    else
    {
        cout << pow(t, 2) + pow(c, 2) + pow(g, 2) + 7;
    }
}