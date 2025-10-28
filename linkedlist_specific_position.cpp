#include <iostream>
using namespace std;
// insertion at specific position in linked list
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

    LinkedList *newnode = new LinkedList();
    newnode->data = 15;

    // Insertion at position 2 (0-based index)
    int position = 2;
    LinkedList *temp = first;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

    LinkedList *head = first;

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}