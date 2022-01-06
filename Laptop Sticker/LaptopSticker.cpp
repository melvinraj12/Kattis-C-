#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a - 2 - c) >= 0 && (b - 2 - d) >= 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}