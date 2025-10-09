#include <iostream>
using namespace std;

void change(int &x)
{           // & means reference
    x = 50; // changes original
}

int main()
{
    int a = 10;
    change(a);
    cout << a; // Output: 50
}
