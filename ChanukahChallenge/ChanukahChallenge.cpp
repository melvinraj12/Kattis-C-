#include <assert.h>
#include <iostream>
using namespace std;
int cha(int n);
int main()
{
    int a;
    cin >> a;
    int b[a];

    for (int i = 0; i < a; i++)
    {
        int c[2];
        int j = 0;
        do
        {
            cin >> c[j];
            j++;
        } while (j < 2);
        b[i] = cha(c[1]);
    }
    for (int i = 0; i < a; i++)
    {
        cout << i + 1 << " " << b[i] << endl;
    }
    return 0;
}

int cha(int n)
{
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        a += i;
    }
    return a + n;
}
