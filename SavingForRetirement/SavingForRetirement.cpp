#include <iostream>

using namespace std;

int main()
{
    int b, br, bs, a, as;
    cin >> b >> br >> bs >> a >> as;
    int fb = (br - b) * 5;
    int m = fb / as;
    int i;
    if (m * as >= fb)
    {
        i = m;
    }
    else
    {
        i = m + 1;
    }
    cout << a + i;
}