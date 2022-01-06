#include <iostream>

using namespace std;

int main()
{
    int a[3] = {1, 0, 0};
    string b;
    cin >> b;
    for (int i = 0; i < b.length(); i++)
    {
        int temp;
        if (b[i] == 'A')
        {
            temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        else if (b[i] == 'B')
        {
            temp = a[1];
            a[1] = a[2];
            a[2] = temp;
        }
        else if (b[i] == 'C')
        {
            temp = a[2];
            a[2] = a[0];
            a[0] = temp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 1)
        {
            cout << i + 1;
        }
    }
}