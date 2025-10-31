#include <iostream>
using namespace std;
class Box
{
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Declare friend function
    friend void printWidth(Box box);
};

void printWidth(Box box)
{
    cout << "Width of box: " << box.width << endl;
}
int main()
{
    Box box(10.5);
    printWidth(box);
    return 0;
}