#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    // shift left from beginning
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
