#include <iostream>
#include <vector>
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
    Node *newData = new Node(data);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newData;
}

void deleteAlternative(Node *&head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        temp = temp->next;
        delete (deleteNode);
    }
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

    Node *node = new Node(1);

    Node *head = node;

    insertStart(head, 2);
    insertStart(head, 3);
    insertStart(head, 4);
    insertStart(head, 5);

    traversal(head);

    cout << endl;

    deleteAlternative(head);

    traversal(head);

    return 0;
}