#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mb, mc;
    if ((a - b) > b)
    {
        mb = a - b;
    }
    else
    {
        mb = b;
    }
    if ((a - c) > c)
    {
        mc = a - c;
    }
    else
    {
        mc = c;
    }
    cout << mb * mc * 4;
}