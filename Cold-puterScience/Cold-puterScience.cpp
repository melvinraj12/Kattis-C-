#include <assert.h>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];
    int b = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
        if (n[i] < 0)
        {
            b += 1;
        }
    }
    cout << b << endl;
    return 0;
}
