#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];
    int total = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
        if (n[i] >= 0)
        {
            n[i] = 0;
        }
        else
        {
            total += (n[i] * -1);
        }
    }
    cout << total;

    return 0;
}
