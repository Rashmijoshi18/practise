#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0, temp;
    temp = n;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
}