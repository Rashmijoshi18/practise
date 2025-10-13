#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {2, 4, 6, 8, 10};
    int n = 5;
    int value = 6;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            // Shift all elements to the left starting from i
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            // Reduce array size
            i--;
            // at same index to check new element after shift
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
