#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int n = 5;
    int value = 11;
    int pos = 2;

    arr[pos] = value;
    // simply replace element

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
