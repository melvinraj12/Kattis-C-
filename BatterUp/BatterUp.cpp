#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    float flag = 0;
    float total = 0;
    float b[a];
    float c;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
        if (b[i] >= 0)
        {
            flag += 1;
            total += b[i];
        }
    }
    c = total / flag;
    cout << c;
}