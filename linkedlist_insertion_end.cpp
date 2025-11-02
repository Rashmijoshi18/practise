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

    // Create new node to insert at end
    Node *add = new Node();
    add->data = 4;
    add->next = NULL;

    // Traverse to the end
    Node *temp = first;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Link last node to new node
    temp->next = add;

    // Display the linked list
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
