#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int lcm;

    // Find larger number
    if (a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }

    // keep increasing until divisible by both
    while (lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }

    cout << lcm;
    return 0;
}
