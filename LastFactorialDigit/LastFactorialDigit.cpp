#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int a;
    cin >> a;
    long int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
        b[i] = fact(b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        cout << b[i]<<endl;
    }

    return 0;
}

int fact(int n)
{
    long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    if (fact < 10)
    {
        return fact;
    }
    else
    {
        return fact % 10;
    }
}