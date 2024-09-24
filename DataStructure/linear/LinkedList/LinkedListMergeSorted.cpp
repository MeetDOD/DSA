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

void solve(Node *&head1, Node *&head2)
{
    Node *current1 = head1;
    Node *current2 = head2;
    Node *next1 = current1->next;
    Node *next2 = current2->next;

    while (next1 != NULL && next2 != NULL)
    {
        if ((current2->data >= current1->data) && (current2->data <= next1->data))
        {
            current1->next = current2;
            next2 = current2->next;
            current2->next = next1;
            current1 = current2;
            current2 = next2;
        }
        else
        {
            current1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                current1->next = current2;
            }
        }
    }
}

void mergeTwoSortedLL(Node *&head1, Node *&head2)
{
    if (head1 == NULL)
    {
        return;
    }

    if (head2 == NULL)
    {
        return;
    }

    if (head1->data <= head2->data)
    {
        solve(head1, head2);
    }
    else
    {
        solve(head2, head1);
    }
}

void traversal(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{

    Node *head1 = new Node(1);
    insertEnd(head1, 3);
    insertEnd(head1, 5);
    insertEnd(head1, 7);
    insertEnd(head1, 9);

    Node *head2 = new Node(2);
    insertEnd(head2, 4);
    insertEnd(head2, 6);
    insertEnd(head2, 8);
    insertEnd(head2, 10);

    traversal(head1);
    cout << endl;
    traversal(head2);
    cout << endl;

    mergeTwoSortedLL(head1, head2);

    traversal(head1);

    return 0;
}