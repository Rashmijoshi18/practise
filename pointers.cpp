#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // variable
    int *p;
    // pointer declaration
    p = &a;
    // pointer stores address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p stores address: " << p << endl;
    cout << "Value at address stored in p: " << *p << endl;
    // dereferencing

    return 0;
}
