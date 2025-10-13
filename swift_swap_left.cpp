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
    int new_value;
    cin >> new_value;

    // shift to left and swap
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = new_value;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}