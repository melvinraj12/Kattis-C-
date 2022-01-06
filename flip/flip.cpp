#include <iostream>
#include <math.h>
using namespace std;

int reverse(int number);
int main(void)
{
    int a, b;
    while (cin >> a >> b)
    {
        a = reverse(a);
        b = reverse(b);
        if (b > a)
        {
            cout << b;
        }
        else
        {
            cout << a;
        }
    }
    return 0;
}

int reverse(int number)
{

    int result = 0;

    while (number > 0)
    {
        result = result * 10 + number % 10;
        number /= 10;
    }

    return result;
}