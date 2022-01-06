#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    int b;
    cin >> a >> b;
    float c[b][3];
    float d = 0;
    for (int i = 0; i < b; i++)
    {
        c[i][2] = 1;
        for (int j = 0; j < 2; j++)
        {
            cin >> c[i][j];
            c[i][2] *= c[i][j];
        }
        d += c[i][2] * a;
    }
    cout << fixed << setprecision(6) << d;
}
