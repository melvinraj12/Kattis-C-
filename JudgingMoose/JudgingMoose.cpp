#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    int f;
    if (a == b)
    {
        if (a == 0 || b == 0)
        {
            cout << "Not a moose";
        }
        else
        {
            cout << "Even"
                 << " " << a + b;
        }
    }
    else
    {
        if (a > b)
        {
            cout << "Odd"
                 << " " << 2 * a;
        }
        else
        {
            cout << "Odd"
                 << " " << 2 * b;
        }
    }
}