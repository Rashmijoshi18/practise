#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // print spaces for formatting
        for (int j = 0; j < n - i; j++)
            cout << " ";

        int num = 1; // first number in each row is always 1
        for (int k = 0; k <= i; k++)
        {
            cout << num << " ";
            // update num using binomial coefficients
            num = num * (i - k) / (k + 1);
        }
        cout << endl;
    }
    return 0;
}
