#include <iostream>
using namespace std;

class Sample
{
private:
    int arr[3];

public:
    void input()
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Sample s;
    s.input();
    s.display();
    return 0;
}
