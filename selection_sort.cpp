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

    // Selection Sort
    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
