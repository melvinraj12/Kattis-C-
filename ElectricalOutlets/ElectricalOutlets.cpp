#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int x[a];
    for (int i = 0; i < a; i++)
    {
        int b;
        int z = 0;
        cin >> b;
        int n[a][b];
        for (int j = 0; j < b; j++)
        {
            cin >> n[i][j];
            z += n[i][j];
        }
        x[i] = z - (b - 1);
    }
    for (int i = 0; i < a; i++)
    {
        cout << x[i] << endl;
    }
    return 0;
}
