#include <iostream>
using namespace std;

int main()
{
    int n[3];
    int a = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }
    a = n[0] * n[1] * n[2];
    cout << a;

    return 0;
}
