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
    // Create 3 nodes
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // Assign data
    first->data = 20;
    second->data = 30;
    third->data = 10;

    // Link nodes
    first->next = second;
    second->next = third;
    third->next = NULL;

    int index;
    cout << "Enter index to delete (starting from 0): ";
    cin >> index;

    // Case 1: Empty list
    if (first == NULL)
    {
        cout << "List is empty";
        return 0;
    }

    // Case 2: Delete first node
    if (index == 0)
    {
        Node *todelete = first;
        first = first->next;
        delete todelete;
    }
    else
    {
        Node *temp = first;
        int count = 0;

        // Traverse till one node before the target
        while (temp != NULL && count < index - 1)
        {
            temp = temp->next;
            count++;
        }

        // If index is invalid
        if (temp == NULL || temp->next == NULL)
        {
            cout << "Invalid index!" << endl;
            return 0;
        }

        // Node to be deleted
        Node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }

    // Print remaining linked list
    Node *temp = first;
    cout << "Linked list after deletion: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
