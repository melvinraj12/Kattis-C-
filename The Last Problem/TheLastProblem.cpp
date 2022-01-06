#include <iostream>

using namespace std;

int main()
{
    string a;
    int flag;
    do
    {
        flag = 0;
        getline(cin, a);
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] > 90 && a[i] < 97)
            {
                flag = 1;
            }
            if (a[i] > 32 && a[i] < 65)
            {
                flag = 1;
            }
            if (a[i] < 32 || a[i] > 122)
            {
                flag = 1;
            }
        }
    } while (flag == 1);

    cout << "Thank you, " << a << ", and farewell !";
}