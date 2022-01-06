#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a][3];
    string c[a];
    int flag = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> n[i][j];
        }
        flag = n[i][1] - n[i][2] - n[i][0];
        if (flag > 0)
        {
            c[i] = "advertise";
        }
        else if (flag < 0)
        {
            c[i] = "do not advertise";
        }
        else
        {
            c[i] = "does not matter";
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}