#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    float n[a][3];
    int o[a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> n[i][j];
        }
        if (n[i][1] > n[i][0])
        {
            int b;
            b = n[i][1];
            n[i][1] = n[i][0];
            n[i][0] = b;
        }
        if ((n[i][0] + n[i][1]) == n[i][2] || (n[i][0] * n[i][1]) == n[i][2] || (n[i][0] / n[i][1]) == n[i][2] || (n[i][0] - n[i][1]) == n[i][2])
        {
            o[i] = 1;
        }
        else
        {
            o[i] = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (o[i] == 1)
        {
            cout << "Possible"
                 << "\n";
        }
        else
        {
            cout << "Impossible"
                 << "\n";
        }
    }
    return 0;
}
