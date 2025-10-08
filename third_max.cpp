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

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }

    cout << third;
}
