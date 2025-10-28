#include <iostream>
using namespace std;
class LinkedList
{
public:
    int data;
    LinkedList *next;
};
int main()
{
    LinkedList *first = new LinkedList();
    LinkedList *second = new LinkedList();
    LinkedList *third = new LinkedList();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    cout << first->data << " ";
    cout << first->next->data << " ";
    cout << first->next->next->data << " ";
}