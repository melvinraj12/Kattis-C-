#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int a;
    cin >> a;
    long long int b[a];
    long long int f[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
        f[i] = (b[i] == 0) ? 1 : (log10(b[i]) + 1);
    }
    for (int i = 0; i < a; i++)
    {
        cout << f[i] << endl;
    }
}
