#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c[b][3];
    int ta = 0;
    for (int i = 0; i < b; i++)
    {
        c[i][2] = 0;
        for (int j = 0; j < 2; j++)
        {
            cin >> c[i][j];
        }
        c[i][2] = c[i][0] * c[i][1];
        ta += c[i][2];
    }
    cout << ta / a;
}