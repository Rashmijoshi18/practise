// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     string name;
//     string course;
//     int rollno;

// public:
//     void setDetails(string n, string c, int r)
//     {
//         name = n;
//         course = c;
//         rollno = r;
//     }
//     void getDetails()
//     {
//         cout << "Name: " << name << ", Course: " << course << ", Roll No: " << rollno << endl;
//     }
//     void show()
//     {
//         getDetails();
//     }
// };
// int main()
// {
//     student s1;
//     s1.setDetails(" Rashmi", "Btech", 34);
//     s1.show();
// }

#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int cls;

public:
    void setdata(string n, int c)
    {
        name = n;
        cls = c;
    }
    void getdata()
    {
        cout << "Name: " << name << ", Class: " << cls << endl;
    }
};
int main()
{
    student s1;
    s1.setdata("Rashmi", 12);
    s1.getdata();
}