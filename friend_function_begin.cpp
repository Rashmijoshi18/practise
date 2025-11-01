#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    friend void comp(A, B);
};
class B
{
private:
    int b;

public:
    friend void comp(A, B);
};
int main()
{
    cout << "Hello World";
}