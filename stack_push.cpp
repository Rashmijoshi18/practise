#include <iostream>
using namespace std;
int stack[5], n = 5, top = -1;
void push(int val)
{
    if (top == 4)
    {
        cout << "filled";
    }
    else
    {
        top++;
        stack[top] = val;
        cout << val;
    }
}
int main()
{
    push(23);
    push(13);
    push(10);
}