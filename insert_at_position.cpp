#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1, 3, 5, 7, 9};
    int n = 5;
    int value = 11;
    int pos = 3;

    // shift elements to right from end to pos
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    // insert value at given position
    n++;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
