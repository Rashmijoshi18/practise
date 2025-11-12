#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int front = -1;
    int back = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (back == n - 1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            back++;
            arr[back] = x;
        }
    }
    while (front <= back && front != -1)
    {
        cout << arr[front] << " ";
        front++;
    }
    if (front > back)
    {
        front = -1;
        back = -1;
    }
    return 0;
}