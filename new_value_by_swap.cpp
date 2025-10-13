#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // swap and add new value at first by input

    int new_value;
    cin >> new_value;
    // arr[0] = arr[n - 1];
    arr[0] = new_value;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
