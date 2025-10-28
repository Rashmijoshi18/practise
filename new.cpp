#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int age;
};
int main()
{
    student *s = new student;

    // to access members of class using pointer use '->' operator
    (*s).name = "Rashmi"; // dereferencing pointer and then accessing member using '.'
    // (*s).age = 20;
    s->age = 20; // accessing member using '->' operator
    cout << s->name << " " << s->age << endl;
    delete s;
}