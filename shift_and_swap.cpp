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
    // shift and swap
    int new_value;
    cin >> new_value;
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = new_value;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}