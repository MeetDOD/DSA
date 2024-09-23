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

void insertEnd(Node *&head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void rotateByKthElement(Node *&head, int k)
{
    Node *temp = head;
    int count = 1;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    // formula.
    k = k % count;
    // return the same list without change.
    if (k == 0)
    {
        return;
    }
    // 1. make the last noe point to head.
    temp->next = head;
    // 2. find n - kth node.
    temp = head;
    for (int i = 1; i < (count - k); i++)
    {
        temp = temp->next;
    }
    Node *newHead = temp->next;
    temp->next = NULL;
    head = newHead;
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

    Node *head = new Node(1);

    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 4);
    insertEnd(head, 5);

    traversal(head);
    cout << endl;
    rotateByKthElement(head, 2);
    traversal(head);

    return 0;
}