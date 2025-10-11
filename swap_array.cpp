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
    int i, j;
    cin >> i >> j;
    swap(arr[i], arr[j]);
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}