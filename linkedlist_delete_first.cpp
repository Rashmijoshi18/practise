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

    Node *todelete = first;
    first = first->next;
    delete todelete;

    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}