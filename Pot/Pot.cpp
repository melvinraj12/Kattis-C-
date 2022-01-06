#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];
    long long int c = 0;
    for (int i = 0; i < a; i++)
    {
        int po;
        int base;
        cin >> n[i];
        po = n[i] % 10;
        base = (n[i] - po) / 10;
        c += pow(base, po);
    }

    cout << c;
    return 0;
}