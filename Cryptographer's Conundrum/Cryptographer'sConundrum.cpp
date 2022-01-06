#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    char b[a.length() + 1];
    for (int i = 1; i < a.length() + 1; i++)
    {
        b[i] = a[i - 1];
    }
    int j = 2, k = 3;
    int count = 0;
    for (int i = 1; i < a.length(); i = i + 3)
    {
        if (b[i] == 'P')
        {
            count += 1;
        }
        if (b[j] == 'E')
        {
            count += 1;
        }
        if (b[k] == 'R')
        {
            count += 1;
        }
        j += 3;
        k += 3;
    }

    cout << a.length() - count;
}