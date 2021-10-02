#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->next = NULL;
    }
};

void traverseLinkedList(Node *node)
{
    Node *temp = node;

    while (temp != NULL)
    {
        cout << temp->data << ", ";
        temp = temp->next;
    }
}


void findMiddelELem(Node *head)
{
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << "\n middle element" << slow->data;
}

int main()
{

    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;
    fourth->data = 50;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    traverseLinkedList(head);

    findMiddelELem(head);
  
    return 0;
}
