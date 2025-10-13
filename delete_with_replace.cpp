#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int n = 5;
    int pos = 3;

    arr[pos - 1] = 0;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
