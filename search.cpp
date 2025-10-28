#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found at index " << i;
            return 0;
        }
    }
    cout << "Not Found";
}