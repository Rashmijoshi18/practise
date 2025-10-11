#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem, ans = 0, mul = 1;
    while (n > 0)
    {
        rem = n % 2;
        n /= 2;
        ans = ans + rem * mul;
        mul = mul * 10;
    }
    cout << ans;
}