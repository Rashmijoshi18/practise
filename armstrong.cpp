#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digit;
    int sum = 0;
    int temp;
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        temp /= 10;
        sum += digit * digit * digit;
    }
    if (sum == n)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}