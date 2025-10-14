#include <iostream>
using namespace std;
class student
{
public:
    // array of objects
    string name;
    int cls;
};
student students[100];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << students[i].name << ", Class: " << students[i].cls << endl;
    }
}

// output// output
// 2
// rashmi 9
// joshi 10
// Name: rashmi, Class: 9
// Name: joshi, Class: 10