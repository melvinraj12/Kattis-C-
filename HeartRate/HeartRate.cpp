#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin >> a;
    float b[a][2];
    float f[a][3];
    float fbpm;
    float bpm;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
        fbpm = 60 / b[i][1];
        bpm = 60 * b[i][0] / b[i][1];
        for (int k = 0; k < 3; k++)
        {
            if (k == 0)
            {
                f[i][k] = bpm - fbpm;
            }
            else if (k == 1)
            {
                f[i][k] = bpm;
            }
            else if (k == 2)
            {
                f[i][k] = bpm + fbpm;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << fixed << setprecision(4) << f[i][j] << " ";
        }
        cout << "\n";
    }
}