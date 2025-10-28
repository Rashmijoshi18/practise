#include <iostream>
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

    int key;
    cin >> key;

    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
            break;
            // stop when found
        }
    }

    // if loop completed fully, i == n → not found
    if (i == n)
    {
        cout << "not found";
    }

    return 0;
}
