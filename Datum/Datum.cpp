#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b;
    c = 20;
    d = 9;
    if (b == 1 || b == 2)
    {
        b += 10;
        d--;
    }
    else
    {
        b -= 2;
    }
    int f = a + ((13 * b - 1) / 5) + d + (d / 4) + c / 4 - 2 * c;
    if (f < 0)
    {
        int temp = 0;
        if (f % 7 == 0)
        {
            f = 0;
        }
        else
        {
            temp = ((f / 7) - 1) * -7;
            f = temp + f;
        }
    }
    else
    {
        f = f % 7;
    }
    string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << day[f];
}