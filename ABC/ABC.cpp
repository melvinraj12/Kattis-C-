#include <iostream>

using namespace std;
int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> b[i];
        if (b[i] == 'c')
        {
            temp = a[i];
            a[i] = a[3];
        }
    }
}
