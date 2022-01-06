#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int f[a];
    int b;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        string c[b];
        for (int i = 0; i < b; i++)
        {
            cin >> c[i];
        }
        string c1[b];
        for (int i = 0; i < b; i++)
        {
            c1[i] = c[i];
            if (c1[i] != "0")
            {
                for (int j = 0; j < b; j++)
                {
                    if (c1[i] == c[j])
                    {
                        c[j] = "0";
                    }
                }
            }
        }
        int count;
        for (int i = 0; i < b; i++)
        {
            if (c1[i] == "0")
            {
                break;
            }
            else
            {
                count++;
            }
        }
        f[i] = count;
    }
    for (int i = 0; i < a; i++)
    {
        cout << f[i] << endl;
    }
    return 0;
}