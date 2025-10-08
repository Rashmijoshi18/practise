#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a >> b && a >> c)
    {
        if (b > c)
        {
            cout << "second max is b:" << b;
        }
        else
        {
            cout << "second max is c:" << c;
        }
    }
    else if (b >> a && b >> c)
    {
        if (a > c)
        {
            cout << "second max is a:" << a;
        }
        else
        {
            cout << "second max is c:" << c;
        }
    }
    else
    {
        if (a > b)
        {
            cout << "second max is a:" << a;
        }
        else
        {
            cout << "second max is b:" << b;
        }
    }
}