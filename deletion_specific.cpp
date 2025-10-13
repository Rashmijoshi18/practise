#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1, 3, 5, 7, 9};
    int n = 5;
    int pos = 3;

    // shift elements to left
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
    // reduce size

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
