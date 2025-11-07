#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

int main()
{
    Node *N1 = new Node(10);
    Node *N2 = new Node(20);
    Node *N3 = new Node(30);
    Node *N4 = new Node(40);

    N1->next = N2;
    N2->prev = N1;
    N2->next = N3;
    N3->prev = N2;
    N3->next = N4;
    N4->prev = N3;

    Node *head = N1;
    Node *newNode = new Node(5);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
