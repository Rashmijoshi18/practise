#include <iostream>
using namespace std;
struct Node
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

    first->next = second;
    second->next = third;
    third->next = NULL;

    first->data = 10;
    second->data = 20;
    third->data = 30;

    Node *todelete = first;
    while (todelete->next->next != NULL)
    {
        todelete = todelete->next;
    }

    delete todelete->next;
    todelete->next = NULL;

    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}