#include <iostream>
using namespace std;
int stack[4] = {1, 2, 3, 4};
int top = 3;
void pop()
{
    if (top == -1)
    {
        cout << "filled";
    }
    else
    {
        cout << stack[top];
        top--;
    }
}
int main()
{
    pop();
    pop();
}