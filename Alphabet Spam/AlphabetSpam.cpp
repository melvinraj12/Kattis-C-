#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string a;
    cin >> a;
    float wp = 0, lc = 0, uc = 0, s = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 95)
        {
            wp += 1;
        }
        if (a[i] >= 65 && a[i] <= 90)
        {
            uc += 1;
        }
        if (a[i] >= 97 && a[i] <= 122)
        {
            lc += 1;
        }
        if (a[i] >= 33 && a[i] < 65 || a[i] > 90 && a[i] < 97 || a[i] > 122 && a[i] <= 126)
        {
            s += 1;
        }
    }
    cout << wp << " " << lc << " " << uc << " " << s << endl;
    float l = a.length();
    float b[4];
    b[0] = wp / l;
    b[1] = lc / l;
    b[2] = uc / l;
    b[3] = (s - wp) / l;
    for (int i = 0; i < 4; i++)
    {
        cout << setprecision(-6) << b[i] << endl;
    }
}