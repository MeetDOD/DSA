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
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void reverseLinkedList(Node *&head)
{
    Node *temp = head;
    vector<int> ans;

    while (temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }

    int i = ans.size() - 1;
    temp = head;

    while (temp)
    {
        temp->data = ans[i];
        i--;
        temp = temp->next;
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

    reverseLinkedList(head);
    traversal(head);

    return 0;
}