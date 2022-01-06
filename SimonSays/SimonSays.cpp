#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    string c = "Simon says";
    string f[a];
    for (int i = 0; i < a; i++)
    {
        if (b[i].find(c))
        {
            cout << "got";
        }
        else
        {
            cout << "nada";
        }
    }
}