#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int a;
    long int temp;
    cin >> a;
    temp = a;
    long int count = 0;
    for (int i = 0; a > 0; i++)
    {
        a = a / 2;
        count++;
    }
    a = temp;
    int b[count];
    for (int i = 0; a > 0; i++)
    {
        b[i] = a % 2;
        a = a / 2;
    }
    a = temp;
    int rb = 0;
    int j = count - 1;
    for (int i = 0; i < count; i++)
    {
        rb += b[j] * pow(2, i);
        j--;
    }
    cout << rb;
}