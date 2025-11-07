#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 4, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (result != -1)
        cout << "First occurrence of " << key << " is at index " << result;
    else
        cout << "Element not found";

    return 0;
}
