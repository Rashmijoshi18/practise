#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int year;

    void display()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main()
{
    Car c1;
    // Object creation
    c1.brand = "Tesla";
    c1.year = 2024;

    c1.display();
    return 0;
}
