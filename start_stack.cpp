#include <bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int> v;

public:
    void push(int data)
    {
        v.push_back(data);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v[v.size() - 1];
    }
    bool empty()
    {
        return v.size() == 0;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element is: " << st.top() << endl;
    st.pop();
    cout << "Top element after pop is: " << st.top() << endl;
    cout << "Is stack empty? " << endl;
    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    return 0;
}