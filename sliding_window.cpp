#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    int maxSum = sum;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        if (sum > maxSum)
            maxSum = sum;
    }

    cout << "Maximum sum of any subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}
