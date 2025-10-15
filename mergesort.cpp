#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }

    while (right <= end)
    {
        temp[index++] = arr[right++];
    }

    // Copy back to original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6, 3, 5, 10, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
