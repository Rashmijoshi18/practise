#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> nums;

    // Add elements to the vector
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // Print all elements
    cout << "Vector elements: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\nSize of vector: " << nums.size() << endl;

    // Remove last element
    nums.pop_back();

    cout << "After pop_back: ";
    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}
