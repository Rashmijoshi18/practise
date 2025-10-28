#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
};
int main()
{
    student s;
    cin >> s.name >> s.age;
    cout << s.name << " " << s.age;
}