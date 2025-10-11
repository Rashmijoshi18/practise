#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fac = 1;
    for (int i = 0; i < n; i++)
    {
        fac = fac * (i + 1);
    }
    cout << fac;
}