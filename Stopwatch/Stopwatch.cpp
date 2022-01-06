#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    if (a % 2 != 0)
    {
        cout << "still running";
    }
    else
    {
        int flag = 0;
        for (int i = 0; i < a; i += 2)
        {
            flag += n[i + 1] - n[i];
        }
        cout << flag;
    }
    return 0;
}