#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {2, 4, 6, 8, 10};
    int n = 5;
    int value = 6;
    int pos = -1;

    // Find the position of the value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
