#include <iostream>
using namespace std;

void change(int x)
{
    x = 50; // only changes the copy
}

int main()
{
    int a = 10;
    change(a);
    cout << a; // Output: 10
}
