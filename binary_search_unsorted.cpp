#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    // Copy and sort the array
    vector<int> sortedarr = arr;
    sort(sortedarr.begin(), sortedarr.end());

    // Binary search on sorted array
    int start = 0, end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (sortedarr[mid] == key)
        {
            break;
        }
        else if (sortedarr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (start <= end)
    {
        // Find the index in the original array
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << i << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Not found" << endl;
    }
}
