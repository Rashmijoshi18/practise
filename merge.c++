#include <iostream>
using namespace std;

int main()
{
    // first array
    int arr1[3] = {1, 2, 3};

    // second array
    int arr2[4] = {4, 5, 6, 7};

    // sizes
    int n1 = 3;
    int n2 = 4;

    // new array to store merged result
    int merged[n1 + n2];

    // copy elements of arr1
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // copy elements of arr2
    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // print merged array
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}
