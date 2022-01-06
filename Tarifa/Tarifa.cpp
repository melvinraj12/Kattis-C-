#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int n[b + 1];
    n[0] = 0;
    for (int i = 1; i < b + 1; i++)
    {
        cin >> n[i];
        n[0] += n[i];
    }

    cout << a * (b + 1) - n[0];
    return 0;
}