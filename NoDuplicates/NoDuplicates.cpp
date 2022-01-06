#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (isspace(a[i]))
        {
            count++;
        }
    }
    string b[count + 1];
    int i = 0;
    stringstream ss(a);
    string word;
    while (ss >> word)
    {
        b[i] = word;
        i++;
    }
    int flag = 0;
    int ff = 0;
    for (int i = 0; i < count + 1; i++)
    {
        for (int j = 0; j < count + 1; j++)
        {
            if (b[i] == b[j])
            {
                flag += 1;
            }
        }
    }
    if (flag == count + 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
