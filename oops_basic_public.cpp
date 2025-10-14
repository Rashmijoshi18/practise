// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//     string brand;
//     int year;

//     void show()
//     {
//         cout << "Brand: " << brand << ", Year: " << year << endl;
//     }
// };

// int main()
// {
//     Car c1;
//     // Object creation
//     c1.brand = "Tesla";
//     c1.year = 2024;

//     c1.show();
//     return 0;
// }

#include <iostream>
using namespace std;
class student
{
public:
    string name;
    string course;
    int rollno;
    void show()
    {
        cout << "Name: " << name << ", Course: " << course << ", Roll No: " << rollno << endl;
    }
};
int main()
{
    student s1;
    s1.name = " Rashmi";
    s1.course = "Btech";
    s1.rollno = 34;
    s1.show();
}