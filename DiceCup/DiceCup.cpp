#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    if (b > a)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    if (a == b)
    {
        cout << ++a;
    }
    else
    {
        int c = a - b;
        for (int i = b + 1; i <= a + 1; i++)
        {
            cout << i << endl;
        }
    }

    return 0;
}
