#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // Pointer pointing to first element of array
    int *ptr = arr;

    cout << "Array elements using pointer:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << *(ptr + i) << endl;
    }

    cout << "\nMemory addresses:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of arr[" << i << "] = " << (ptr + i) << endl;
    }

    // Demonstrating equivalence
    cout << "\nPointer and Array Relationship:\n";
    cout << "arr     = " << arr << endl;
    cout << "&arr[0] = " << &arr[0] << endl;
    cout << "ptr     = " << ptr << endl;

    return 0;
}

// Output:
// Array elements using pointer:
// arr[0] = 10
// arr[1] = 20
// arr[2] = 30
// arr[3] = 40
// arr[4] = 50

// Memory addresses:
// Address of arr[0] = 0x61fef0
// Address of arr[1] = 0x61fef4
// Address of arr[2] = 0x61fef8
// Address of arr[3] = 0x61fefc
// Address of arr[4] = 0x61ff00

// Pointer and Array Relationship:
// arr     = 0x61fef0
// &arr[0] = 0x61fef0
// ptr     = 0x61fef0
// PS C:\Users\Reshm\Documents\practise_git>
