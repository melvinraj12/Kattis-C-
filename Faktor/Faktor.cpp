#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = (a * b) + 1;
    if (c % b == 0)
    {
        cout << c - 1;
    }
    else
    {
        cout << (a * (b - 1) + 1);
    }
    return 0;
}
