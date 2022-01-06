#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    float b[a][5];
    string f[a];
    for (int i = 0; i < a; i++)
    {
        float t, y;
        for (int j = 0; j < 5; j++)
        {
            cin >> b[i][j];
        }
        t = b[i][2] / (b[i][0] * cos(b[i][1]));
        y = (b[i][0] * t * sin(b[i][1])) - ((9.81 / 2) * pow(t, 2));
        if ((b[i][3] - y) >= 1 && (y - b[i][4]))
        {
            f[i] = "Safe";
        }
        else
        {
            f[i] = "Not Safe";
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << f[i] << endl;
    }
}