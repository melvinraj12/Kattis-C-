#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    cin >> a;
    float f = a * 5280000 / 4854;
    cout << fixed << setprecision(0) << f;
}
