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
    Node *newData = new Node(data);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newData;
}

int middleElement(Node *&head)
{

    Node *flash = head;
    Node *reverseFlash = head;

    while (flash != NULL && flash->next != NULL)
    {
        flash = flash->next->next;
        reverseFlash = reverseFlash->next;
    }

    return reverseFlash->data;
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

    traversal(head);

    cout << endl;

    int ans = middleElement(head);

    cout << "Therefore the middle element in the linkedlist is : " << ans << endl;

    return 0;
}