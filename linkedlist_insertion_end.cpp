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

    LinkedList *newnode = new LinkedList();
    newnode->data = 40;
    newnode->next = NULL;

    // Move temp to last node
    LinkedList *temp = first;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Link new node at the end
    temp->next = newnode;

    LinkedList *head = first;

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}