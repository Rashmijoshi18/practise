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

    first->data = 20;
    second->data = 30;
    third->data = 10;

    first->next = second;
    second->next = third;
    third->next = NULL;

    Node *temp = first;
    // Deletion of last node
    if (first == NULL)
    {
        cout << "List is empty";
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        // Traverse till the second last node
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        // Now temp is pointing to second last node
        delete temp->next;
        // delete last node
        temp->next = NULL;
        // make second last node as last
    }

    // Print remaining linked list
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
