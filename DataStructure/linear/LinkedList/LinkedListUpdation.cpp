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

void updateNodeData(Node *&head, int position, int data)
{
    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    temp->data = data;
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

    insertStart(head, 77);
    insertStart(head, 777);
    insertStart(head, 7777);

    updateNodeData(head, 3, 7777);

    traversal(head);

    return 0;
}