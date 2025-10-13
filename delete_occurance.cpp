#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {5, 2, 5, 3, 5, 4};
    int n = 6;
    int value = 5;

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != value)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    n = j;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
