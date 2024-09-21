#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertStart(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertEnd(Node *&head, int data)
{
    if (head == NULL)
    {
        insertStart(head, data);
    }

    Node *temp = head;
    Node *newNode = new Node(data);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertBetween(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertStart(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertEnd(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void traversal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{

    Node *node = new Node(7);

    Node *head = node;
    Node *tail = node;

    insertStart(head, 8);
    insertStart(head, 9);
    insertBetween(tail, head, 3, 7);
    insertEnd(head, 10);
    insertEnd(head, 11);
    traversal(head);

    return 0;
}