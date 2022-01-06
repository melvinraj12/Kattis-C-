#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int i;
    int N, t;
    cin >> N;
    int x = 4;
    for (i = 1; i <= N; i++)
    {
        t = sqrt(x) + sqrt(x) - 1;
        x = t * t;
    }
    cout << x;
    return 0;
}