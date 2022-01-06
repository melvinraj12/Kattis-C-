#include <iostream>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    if (a == "OCT 31" || a == "DEC 25")
    {
        cout << "yup";
    }
    else
    {
        cout << "nope";
    }

    return 0;
}
