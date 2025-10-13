#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1, 3, 5, 7, 9};
    int n = 5;
    int value = 11;

    arr[n] = value;
    n++;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
