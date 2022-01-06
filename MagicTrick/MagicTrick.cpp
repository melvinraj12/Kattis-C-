#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int flag = 0;
    for (int i = 0; i < a.length(); i++)
    {
        char b = a[i];
        for (int j = 0; j < a.length(); j++)
        {
            if (b == a[j])
            {
                flag += 1;
            }
        }
    }
    if (flag == a.length())
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}