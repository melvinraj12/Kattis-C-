#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 1, 2, 2, 2, 8};
    int b[6];
    int c[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> b[i];
        c[i] = a[i] - b[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
