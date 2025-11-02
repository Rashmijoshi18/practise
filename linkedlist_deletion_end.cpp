#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    if (first == NULL)
    {
        cout << "empty";
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        Node *Second = first;
        while (Second->next->next != NULL)
        {
            Second = Second->next;
        }
        delete Second->next;
        Second->next = NULL;
    }
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}